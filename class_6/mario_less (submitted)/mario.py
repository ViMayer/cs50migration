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
        # PRINT " " TIMES <DOTS> AND THEN REMOVE 1 FROM <DOTS>
        while x < dots:
            print(" ", end="")
            x += 1
        # PRINT # FOR
        print("#", end="")
        hashes += 1
    # PRINT NEW LINE
    print("")
    dots -= 1
