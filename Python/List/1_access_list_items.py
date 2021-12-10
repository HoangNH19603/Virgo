# create a new list
days_on_w = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
print(days_on_w)
my_favourite_drinks = ["Milk", "Yogurt", "Coffee"]
print(my_favourite_drinks)
my_list = [days_on_w, my_favourite_drinks]
print(my_list)

'''A list type of python just like array in other language you can access to items of list using <name_of_list>[number_of_item], the first item has index 0.
Negative indexing means start from the end
-1 refers to the last item, -2 refers to the second last item etc.'''

# example
print(f"Today is {days_on_w[0]}")
#	negative indexing
print(f"I love {my_favourite_drinks[-1]}")
# both
print(f"On {days_on_w[0]}, I usually drink a cup of {my_favourite_drinks[-1]} before I go to school")
print(f"On {my_list[0][2]}, I usually drink a cup of {my_list[-1][-2]} before I go to school")