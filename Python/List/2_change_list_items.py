"""alias"""
list1 = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday"]
print(list1)
list2 = list1		# Now, list 2 will point to the memory of list 1 and reference the value in list 1
print(list2)
list2[-1]	= "Weekend"		# change the value of the last item in list2
print("list 2 = ", list2)	# print list 2
print("list 1 = ", list1)	# print list 1

'''Now you can see the values in list2 and list1 are the same.	Because when I assign the values of list 2 = list 1 this means that now list 2 is allowed to access the values stored in list 1 and both of them will manage the values this together. So when i change the values in list 2 this will also change that value in list 1'''

# Change a Range of Item Values
days_on_w = ["Tuesday", "Wednesday", "Thursday", "Yesterday", "Today", "Tomorrow", "Monday"]
print(days_on_w)
days_on_w[3:6] = ["Friday", "Saturday", "Sunday"]
print(days_on_w)

'''If you insert more items than you replace, the new items will be inserted where you specified, and the remaining items will move accordingly'''

# Change the second value by replacing it with two new values:
thislist = ["apple", "banana", "cherry"]
thislist[1:2] = ["blackcurrant", "watermelon"]
print(thislist)

'''If you insert less items than you replace, the new items will be inserted where you specified, and the remaining items will move accordingly'''

# Change the second and third value by replacing it with one value:
thislist = ["apple", "banana", "cherry"]
thislist[1:3] = ["watermelon"]
print(thislist)