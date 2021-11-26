# the splitline() method splits a string into a list of strings, using a delimiter to determine where to split the string.
# syntax: object.splitline(keeplinebreaks)
liststring = '''PH22961:Nguyen Huy Hoang:19/06/2003
PH22962:Nguyen Thi Thuy Linh:16/09/2003
PH22963:Tran Van An:15/09/2003
'''
string_lines = liststring.splitlines()
for line in string_lines:
    print(line)