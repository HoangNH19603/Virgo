print ("Chuong trinh tinh S (x, n)")
x = int(input("nhap x: "))
n = int(input("nhap n: "))
s = 0
for y in range (1, n+1):
    tu = x**y
    mau = 1
    for z in range (1, y+1):
        mau = mau*z
    s = s + tu/mau
print ('S ({0},{1})={2}'.format(x, n, s))