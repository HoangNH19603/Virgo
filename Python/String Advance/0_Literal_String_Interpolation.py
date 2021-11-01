#Literal String Interpolation Python
import datetime     #import datetime library
Name = input("Enter your name ")    #enter name and age
Age = int(input("Enter your age "))
Birthday = datetime.date(2003, 6, 19)    #birthday
print(f'My name is {Name}, {Age} years old, my Birthday is {Birthday:%A. %B, %d, %Y}.')
print(f'He said his name is {Name!r}')