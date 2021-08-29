'''
Hàm Eval là 1 hàm mạnh mẽ có thể thực hiện được các chuỗi phép toán, hàm có thể xác định 1 list được truyền trong 1 chuỗi và các lệnh đơn giản
Ham` Eval() chuyen 1 chuoi thanh cau lenh, neu dung cu phap cau lenh se duoc thuc thi
more: https://www.w3schools.com/python/ref_func_eval.asp
'''

from time import *
s = input("code: ")
x = eval(s) #có thể đẩy vào 1 lệnh như print ("hello world") để hàm xuất ra kết quả trên màn hình
print (x)

sum = eval(input("Code: ")) #hàm eval có thể thực hiện các phép tính được nhập vào từ dạng chuỗi
print (sum)

sleep(1)
list_str = "[1,2,3,4,5]"
l1st = eval(list_str) #chuyển chuỗi list_str sang list
print (l1st)
sleep(1)
print (l1st [2])
