'''
Eval() function convert parameter inside it to code
more: https://www.w3schools.com/python/ref_func_eval.asp
'''

from time import *
# eval(input("enter a command ")) #I can put the command print("hello world") to Eval()

# sum = eval(input("Code: ")) #hàm eval có thể thực hiện các phép tính được nhập vào từ dạng chuỗi
# print (sum)

sleep(1)
list_str = "[1,2,3,4,5]"
l1st = eval(list_str) #convert from string to list
print (l1st)
for i in l1st:
    print (i)
    sleep(1)