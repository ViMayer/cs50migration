from cs50 import get_int

# CHECK FOR VALID INPUT
input_valid = 0
while input_valid == 0:
    height = get_int("Height: ")
    if height <= 8 and height >= 1:
        input_valid = 1
    else:
        print("Invalid input!\nPlease type a number between 1 and 8.")


i = 0
# THIS IS DONE BECAUSE THE FORMAT IS RELATIVE TO THE SIZE OF THE LAST LAYER
dots = height - 1
while i < height:
    hashes = 0
    x = 0
    i += 1
    while hashes < i:
        while x < dots:
            print(" ", end="")
            x += 1
        print("#", end="")
        hashes += 1

    # SPACE BETWEEN PYRAMIDS
    print("  ", end="")

    # RESET FOR SECOND PYRAMID
    hashes = 0
    while hashes < i:
        print("#", end="")
        hashes += 1

    # PRINT SPACE
    print("")
    dots -= 1
