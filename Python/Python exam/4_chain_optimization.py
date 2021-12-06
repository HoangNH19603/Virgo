from markupsafe import string


text = input("Enter some text: ")
array = text.split(" ")
string = ""
for item in array:
    if item.isalpha():
        string += " " + item
string = string.strip(" ")
print(string)