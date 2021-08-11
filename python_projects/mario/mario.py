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
    count_spaces = pyramid_height - 1
    count_blocks = 1
    for i in range(pyramid_height):
        for j in range(count_spaces):
            print(" ", end="")
        count_spaces -= 1
        for k in range(count_blocks):
            print("#", end="")
        print()
        count_blocks += 1


if __name__ == "__main__":
    main()

