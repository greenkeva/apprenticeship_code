from cs50 import get_int


def main():
    '''ask for height,check user input'''
    pyramid_height = get_height()
    print_pyramid(pyramid_height)


def get_height():
    while True:
        height = get_int("Height: ")
        if height <= 8 and height > 0:
            break
    return height


def print_pyramid(pyramid_height):
     for i in range(1, pyramid_height + 1):
         print(" " * (pyramid_height - i) + "#" * i)


if __name__ == "__main__":
    main()