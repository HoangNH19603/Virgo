# loi cu phap (Syntax Errors)
# x=5
# y=x*2
# x*y=10

# loi thuc thi (Run-Time Exceptions)
# x=5
# y=0
# z=x/y

# loi nghiep vu (Logic Errors)
# toan = 10
# ly = 10
# hoa = 8.5
# dtb=toan+ly+hoa/3
# print (dtb)

# bat loi trong py
try:
    x=int(input('nhap vao 1 so: '))
    y=int(input('nhap vao 1 so: '))
    print (x/y)
except:
    print ("Error")
else:
    print ('Conguration!')