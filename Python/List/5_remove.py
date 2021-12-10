# The remove() method removes the first matching element (which is passed as an argument) from the list.
# The syntax of the remove() method is:	list.remove(element)

# example
mylist = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday"]
print("My list:", mylist)
flags = True
print("Type 'end' to exit")
while (flags):
	item = input("Remove an item: ")
	if item == "end":	flags = False
	else:	mylist.remove(item)
print("My list:", mylist)

# another way
Start = int(input("Start: "))
End = int(input("End: "))
del mylist[Start:End]	#	use del	to remove item
print("My list:", mylist)