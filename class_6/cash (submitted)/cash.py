from cs50 import get_float

# Define values for later
quarter = 25
dime = 10
nickel = 5
penny = 1
quarter_count = 0
dime_count = 0
nickel_count = 0
penny_count = 0
total_coins = 0

# Check for valid input
input_valid = 0
while input_valid == 0:
    amount = get_float("Dollars: $")
    if amount < 0.01:
        print("Invalid amount")
    else:
        input_valid = 1

# Set custom cash value for easier handling
cash = round(amount * 100)

# Count coins
while cash >= 25:
    cash = cash - quarter
    quarter_count += 1
    total_coins += 1

while cash >= 10:
    cash = cash - dime
    dime_count += 1
    total_coins += 1

while cash >= 5:
    cash = cash - nickel
    nickel_count += 1
    total_coins += 1

while cash >= 1:
    cash = cash - penny
    penny_count += 1
    total_coins += 1

# Output
print(
    f"=================\nTotal coins: {total_coins}\nQuarters: {quarter_count}\nDimes: {dime_count}\nNickels: {nickel_count}\nPennies: {penny_count}\n================="
)
