# The sort() method sorts the elements of a given list in a specific ascending or descending order.
# The syntax of the sort() method is:	list.sort(key=..., reverse=...)
'''Alternatively, you can also use Python's built-in sorted() function for the same purpose.
Syntax: sorted(list, key=..., reverse=...)

sort() Parameters:
By default, sort() doesn't require any extra parameters. However, it has two optional parameters:
*	reverse - If True, the sorted list is reversed (or sorted in Descending order)
*	key - function that serves as a key for the sort comparison'''

# example
num_list = [-7, 8, 9.5, 6, 3, 5, 0]
print("num_list:", num_list)
num_list.sort()	#	The default value of the reverse parameter is 'False' which means to sort from smallest to largest. If set it to 'True', the method will sort from largest to smallest
print("num_list sorted", num_list)

vowels = ["o", "i", "a", "u", "e"]
print("vowels:", vowels)
sorted(vowels)	#	It's same sort() method
print("vowels sorted:", vowels)

my_favorite = ["Coffee", "Milk", "Cookie", "Yogurt", "Crush"]
print("My favorite", my_favorite)
my_favorite.sort(key=len, reverse=True)	#	Pass len function and sort from largest to smallest
print("My favorite", my_favorite)
print("\n\n\n","-"*50)

# sorting using custom key
employees = [
    {'Name': 'Alan Turing', 'age': 25, 'salary': 10000},
    {'Name': 'Sharon Lin', 'age': 30, 'salary': 8000},
    {'Name': 'John Hopkins', 'age': 18, 'salary': 1000},
    {'Name': 'Mikhail Tal', 'age': 40, 'salary': 15000},
]

# custom functions to get employee info
def get_name(employee):
    return employee.get('Name')


def get_age(employee):
    return employee.get('age')


def get_salary(employee):
    return employee.get('salary')


# sort by name (Ascending order)
employees.sort(key=get_name)
print(employees, end='\n\n')

# sort by Age (Ascending order)
employees.sort(key=get_age)
print(employees, end='\n\n')

# sort by salary (Descending order)
employees.sort(key=get_salary, reverse=True)
print(employees, end='\n\n')