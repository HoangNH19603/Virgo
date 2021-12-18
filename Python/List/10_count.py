'''The count() method returns the number of occurrences of a substring in the given string.
The syntax of count() method is: string.count(substring, start=..., end=...)
'''
# use for list
days_on_week = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
print("The number of occurrences of the 'Monday' in list is: ", days_on_week.count("Monday"))

# use for a string
string = "Python is awesome, isn't it?"
print("The number of occurrences of the 'is' is: ", string.count("is"))
print("The number of occurrences of 'is' from 2nd to 8th place is: ", string.count("is",2,8))