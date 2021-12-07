# ljust == left justify
# center == center justify
# rjust == right justify
# syntax: object.method(width,fillchar)

name = input('Name: ')
age = int(input('Age: '))
DoB = input('Date of Birth: ')
print(name.center(30))
print("Date of Birth ".ljust(15),DoB.rjust(15))
print("Age ".ljust(15),str(age).rjust(15))