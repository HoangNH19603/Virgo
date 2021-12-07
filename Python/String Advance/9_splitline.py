# the splitline() method splits a string into a list of strings, using a delimiter to determine where to split the string.
# syntax: object.splitline(keeplinebreaks)

liststring = '''PH22961:Nguyen Huy Hoang:19/06/2003
PH22962:Nguyen Thi Thuy Linh:16/09/2003
PH22963:Tran Van An:15/09/2003
'''     # create a multi-line string
print("I have a multi-line string like this\n" + liststring)   # print the multi-line string
print("Now I'll split the lines of this string into a list")
string_lines = liststring.splitlines()
print(string_lines) # print the list of strings