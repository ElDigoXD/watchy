# Todo: clean up file
# Todo: add font stuff
from itertools import batched
from pprint import pprint

from PIL.Image import Resampling, Palette, Dither, Image


def apply_dither(img):
    # Apply dithering
    img = img.convert("L")
    img = img.convert("1", dither=Dither.FLOYDSTEINBERG)

    return img


def image_to_2bit(img):
    img = img.quantize(2, dither=Dither.NONE)
    return img


def dither_by_hand_from_2bit(img: Image) -> Image:
    if img.mode != "P":
        raise ValueError("Image must be in 2-bit palette mode")

    for x in range(img.width):
        for y in range(img.height):
            # Get the pixel value (0-3)
            pixel = img.getpixel((x, y))

            if pixel == 1 or pixel == 2:
                mod_x = x % 4
                mod_y = y % 4
                if mod_x == 3:
                    img.putpixel((x, y), 0)
                elif mod_y == 3:
                    img.putpixel((x, y), 0)
                elif mod_x == 0 or mod_x == 2:
                    if mod_y == 0:
                        img.putpixel((x, y), 3)
                    elif mod_y == 1:
                        img.putpixel((x, y), 0)
                    elif mod_y == 2:
                        img.putpixel((x, y), 3)
                elif mod_x == 1:
                    if mod_y == 0:
                        img.putpixel((x, y), 0)
                    elif mod_y == 1:
                        img.putpixel((x, y), 3)
                    elif mod_y == 2:
                        img.putpixel((x, y), 0)
            if pixel == 2:
                img.putpixel((x, y), 0 if img.getpixel((x, y)) == 3 else 3)

    return img


if __name__ == "__main__":
    import os
    import sys
    from PIL import Image
    import numpy as np


    def _2bit_to_cpp(image_path: str):
        image_name = image_path.replace("\\", "/").split("/")[-1][:-4]
        # Load the image
        img = Image.open(image_path)

        # Convert to 2 bit palette
        img = image_to_2bit(img)
        # Fix palette order mangled by quantize
        img = img.remap_palette([0, 2, 3, 1])
        # Invert the palette
        img.putpalette([0, 0, 0, 85, 85, 85, 170, 170, 170, 255, 255, 255])
        img.show()
        # Convert to numpy array
        data = np.array(img)
        print(data[0:56,30:40])

        # Get dimensions and pixel data
        height, width = data.shape
        pixel_data = data.flatten()
        pixel_data = [x << 6 | y << 4 | z << 2 | w for x, y, z, w in batched(pixel_data, 4)]
        # Convert pixel data to C++ array
        with open(image_name + ".h", "w") as file:
            file.write("#pragma once\n\n")
            file.write(f"// height: {str(height)}px\n")
            file.write(f"// width: {str(width)}px\n")
            file.write(f"const unsigned char {image_name} [] PROGMEM = {{")
            file.write(", ".join([hex(x) for x in pixel_data]) + "\n")
            file.write("};\n")


    _2bit_to_cpp(sys.argv[1])
    # dither_by_hand_from_2bit(image_to_2bit(Image.open(sys.argv[1]))).resize((112, 112*151*2)).show()
