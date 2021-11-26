# split() method splits a string into a list of substrings. You can specify the separator string to use.
# syntax: object.method(separator, maxsplit)
import time #import time module
text = "This is a string"
print(text.split()) # ['This', 'is', 'a', 'string'] this is a list of substrings.

type_here = input("Type here: ")    #input a string
new_list = type_here.split()    #splits type_here into a list of substrings
for item in new_list:
    print(item.center(20))
    time.sleep(0.5) #sleep for 0.5 seconds