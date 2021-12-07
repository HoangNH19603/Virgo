'''Lists are used to store multiple items in a single variable.
Lists are one of 4 built-in data types in Python used to store collections of data, the other 3 are Tuple, Set, and Dictionary, all with different qualities and usage.
Lists are created using square brackets: []
'''
# example
my_favourite_foods = ["Steak", "Pork", "Spring roll", "Fried chicken", "Sausage roll"]
my_favourite_drinks = ["Milk", "Coffee", "Yogurt"]

print(my_favourite_foods)		# print items lists
print("List length =", len(my_favourite_foods))	# list length
print(my_favourite_drinks)
print("List length =", len(my_favourite_drinks))

# list with multiple type of data, list in list
my_lits = [10, 9.5, "Tuesday", True, ["Monday", "Sunday", "Beach"]]
print(my_lits)

#	type
print(type(my_lits))

# another
new_list = [5]*5
print(new_list)