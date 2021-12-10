# The reverse() method reverses the elements of the list.
# The syntax of the reverse() method is:	list.reverse()

#	example
OS = ["Windows 10", "Windows 11", "Ubuntu", "Mac OS", "Arch Linux"]
print("My favorite OS are: ", OS)
OS.reverse()	#	reverse method
print("Reverse list:", OS)
print("Reverse a List Using Slicing Operator:", OS[::-1])

'''If you need to access individual elements of a list in the reverse order, it's better to use the reversed() function.'''
# Operating System List
systems = ['Windows', 'macOS', 'Linux']

# Printing Elements in Reversed Order
for o in reversed(systems):
    print(o)