# The pop() method removes the item at the given index from the list and returns the removed item.
# The syntax of the pop() method is:	list.pop(index)

# Example
prime_numbers = [2, 3, 5, 7]	# create a list of prime numbers
print('Removed Element:', prime_numbers)
prime_numbers.pop(2)	# remove the element at index 2
print('Updated List:', prime_numbers)

# programming languages list
languages = ['Python', 'Java', 'C++', 'French', 'C']

# remove and return the 4th item
return_value = languages.pop(3)
print('Return Value:', return_value)

# Updated List
print('Updated List:', languages)
languages.pop()
# The argument passed to the method is optional. If not passed, the default index -1 is passed as an argument (index of the last item).
print('Updated List:', languages)