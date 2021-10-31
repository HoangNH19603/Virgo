from math import sqrt
# ax^2 + bx + c = 0
print ("chuong trinh tinh phuong trinh bac 2")
a = float(input("nhap gia tri a: "))
b = float(input("nhap gia tri b: "))
c = float(input("nhap gia tri c: "))
if a == 0:
    # bx + c = 0
    if b == 0 and c == 0:
        print ("vo so nghiem")
    elif b == 0 and c != 0:
        print ("vo nghiem")
    else:
        x = -c / b
        print ("x = ",x)
else:
    delta = b**2 - 4 * a * c
    if delta < 0:
        print ("vo nghiem")
    elif delta == 0:
        x = -b / (2 * a)
        print ("nghiem kep x1 = x2 = ",x)
    else:
        x1 = (-b - sqrt(delta)) / (2 * a)
        x2 = (-b + sqrt(delta)) / (2 * a)
        print ("x1 = ", x1, "\nx2 = ", x2)