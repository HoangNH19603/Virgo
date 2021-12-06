text = input("Input some text here...\n")
upper = lower = numbers = char = space = vowel = consonant = 0
for item in text:
    if item.isupper():
        upper += 1
    elif item.islower():
        lower += 1
    elif item.isnumeric():
        numbers += 1
    elif item.isspace():
        space += 1
    else:
        char += 1
alpha = upper + lower