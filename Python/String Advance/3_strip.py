# Use strip() function to delete the left and right margins
# syntax: object.method(char)
name = input("Enter name ")
name = name.center(30,"-")
print(name)
print(name.strip("-"))