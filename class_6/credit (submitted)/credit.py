from cs50 import get_int

card = get_int("Number: ")

# Get intercalating numbers
# Ints are used to round the numbers
card1 = int((card % 10**2) / 10) * 2
card2 = int((card % 10**4) / 10**3) * 2
card3 = int((card % 10**6) / 10**5) * 2
card4 = int((card % 10**8) / 10**7) * 2
card5 = int((card % 10**10) / 10**9) * 2
card6 = int((card % 10**12) / 10**11) * 2
card7 = int((card % 10**14) / 10**13) * 2
card8 = int((card % 10**16) / 10**15) * 2

card1 = int(card1 % 100 / 10) + (card1 % 10)
card2 = int(card2 % 100 / 10) + (card2 % 10)
card3 = int(card3 % 100 / 10) + (card3 % 10)
card4 = int(card4 % 100 / 10) + (card4 % 10)
card5 = int(card5 % 100 / 10) + (card5 % 10)
card6 = int(card6 % 100 / 10) + (card6 % 10)
card7 = int(card7 % 100 / 10) + (card7 % 10)
card8 = int(card8 % 100 / 10) + (card8 % 10)

# First sum
check_1 = card1 + card2 + card3 + card4 + card5 + card6 + card7 + card8

card9 = int(card % 10)
card10 = int(card % 10**3 / 10**2)
card11 = int(card % 10**5 / 10**4)
card12 = int(card % 10**7 / 10**6)
card13 = int(card % 10**9 / 10**8)
card14 = int(card % 10**11 / 10**10)
card15 = int(card % 10**13 / 10**12)
card16 = int(card % 10**15 / 10**14)

# Second sum
check_2 = card9 + card10 + card11 + card12 + card13 + card14 + card15 + card16

# Final sum check
check_3 = check_1 + check_2


# Luhn’s algorithm by Allwin Raju
def luhn_checksum(card_number):
    def digits_of(n):
        return [int(d) for d in str(n)]

    digits = digits_of(card_number)
    odd_digits = digits[-1::-2]
    even_digits = digits[-2::-2]
    checksum = 0
    checksum += sum(odd_digits)
    for d in even_digits:
        checksum += sum(digits_of(d * 2))
    return checksum % 10


amex = card
visa = card
mastercard = card
length = 0
length = len(str(card))

while amex >= 10 * 13:
    amex = int(amex / 10**13)

while visa >= 10:
    visa = int(visa / 10)

while mastercard >= 10 * 14:
    mastercard = int(mastercard / 10**14)

# Identify card if valid
if luhn_checksum(card) == 0:
    if length == 15 and (amex == 34 or amex == 37):
        print("AMEX")
    elif visa == 4 and (length == 13 or length == 16):
        print("VISA")
    elif length == 16 and (51 <= mastercard <= 55):
        print("MASTERCARD")
    else:
        print("INVALID")
else:
    print("INVALID")
