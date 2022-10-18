from cs50 import get_string
import math

input = get_string("Text: ")

letters = 0
words = 1
sentences = 0

for i in input:

    # if char is not null add letter
    if i.isalpha():
        letters += 1
    # if char is null add words
    elif i == " ":
        words += 1
    # if char is punctuation add sentences
    elif i == "!" or i == "?" or i == ".":
        sentences += 1

# L is average letters per 100 words
# S is average sentences per 100 words
L = (100 * letters)/words
S = (100 * sentences)/words
# calculate Coleman–Liau index
index = (0.0588 * L) - (0.296 * S) - 15.8

# Round down grade if index decimal is less than 0.5
# round up if more than 0.5
grade = 0
if (float(index) % 1) >= 0.5:
    grade = math.ceil(index)
else:
    grade = round(index)

# Print results
if grade < 1:
    print("Before Grade 1")
elif grade > 16:
    print("Grade 16+")
else:
    print(f"Grade {grade}")


# Debugging tools
# print("()=========} Debugger {=========()")
# print("-------------------------")
# print(f"Input:\n{input}")
# print("-------------------------")
# print(f"L: {L}\nS: {S}\nIndex: {index}\nGrade: {grade}")
# print(f"sentences: {sentences}\nwords: {words}\nletters: {letters}")
# print("-------------------------")
# print("()==============================()")