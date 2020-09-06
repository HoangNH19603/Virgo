# loi cu phap (Syntax Errors)
# x=5
# y=x*2
# x*y=10

# loi thuc thi (Run-Time Exceptions)
# x=5
# y=0
# z=x/y

# loi nghiep vu (Logic Errors)
# t=10
# l=10
# h=8.5
# dtb=t+l+h/3
# print (dtb)

# bat loi trong py
try:
    x=10
    y=int(input('nhap vao 1 so:'))
    z=x/y
    print (z)
except:
    print ("bi loi roi")
print ("Hi!")