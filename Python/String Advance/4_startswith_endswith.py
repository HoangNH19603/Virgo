# startswith() and endswith() are function used to check the string start or end with the char
# syntax: object.method()

name = input("Enter your name ")
print(name)
print(name.startswith(''))
print(name.endswith('-'))

if name.startswith('Nguyen'): print("The last name of user is Nguyen")
elif name.startswith('Pham'): print("The last name of user is Pham")
elif name.startswith('Tran'): print("The last name of user is Tran")