# The append() method adds an item, or a list to the end of the list.
# The syntax of the append() method is:	list.append(item)

#	Example:
my_favorite = []	#	create an empty list
print("My favorite is:", my_favorite)
flags = True	#	set flags
print("Type 'end' to exit")
while (flags):
	item = input("Add item: ")
	if item == "end": flags = False	#	set flags to False
	else: my_favorite.append(item)	#	append item
print("My favorite is:", my_favorite)

another_list = []	#	create an empty list
print(another_list)
another_list.append(my_favorite)	#	append list
print(another_list)