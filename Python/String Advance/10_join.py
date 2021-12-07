# the join method is used to join the elements of a list into a string
# syntax: object.join(list, separator)
# separator is optional

print("Example")
sv = "MSSV: PH22961;Name: Nguyen Huy Hoang;DoB: 19/06/2003"     # create a string
info = sv.split(';')    # split the string into a list
print("I have an array:", info)     # print the list
print("Now I want print this array as a string")
print("\n".join(info))  # join the list into a string
print("And now I will join the elements of a list into a string")
info_sv = "\n".join(info) # join the list into a string variable
print(info_sv) # print the string variable