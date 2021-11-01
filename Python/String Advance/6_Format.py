#The format() method allows you to format selected parts of a string
#syntax: object.method(variable)
import datetime
name = "Nguyen Huy Hoang"
age = 17
bd = datetime.date(2003,6,19)
paragraph = "My name is {}, {} years old, and my birthday is {}".format(name, age, bd)      #you can change value in {} to ordinal number in (), count from 0
print(paragraph)
paragraph2 = "His name is {0}, and {0} is {1} years old, his birthday is {2}".format(name, age, bd)     #like this
print(paragraph2)

'''
you can also use named indexes by entering a name inside the curly brackets {}, but then you must use names when you pass the parameter value
'''
print("I have a {carname}, it is a {model}.".format(carname = "Lamborghini", model = "Aventador"))