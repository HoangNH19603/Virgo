from math import *
print ("Một số hàm toán học cơ bản từ các thư viện có sẵn trong python")
print ("1.Sqrt - căn bậc 2")
print ("2.Pow - lũy thừa")
print ("3.Log -> log(x) = logeX = Inx")
print ("4.Log10 - Logarit cơ số 10 của x, log 10(x) = log10X")
print ("5.Exp - tính ex")
print ("6.Degrees - Đổi radian ra độ")
print ("7.Radians - tính radian 180/pi*x")
print ("8.Fabs - tính giá trị tuyệt đối")
# tham khảo ở đây: https://www.tutorialsteacher.com/python/math-module
# https://toidicode.com/xu-ly-so-hoc-voi-module-math-trong-python-371.html
while True:
    val = int(input("Ban chon: "))
    if val == 1:
        print ("Can bac 2 cua 25 : sqrt(25) = ", sqrt(25))
    elif val == 2:
        print ("Luy thua (5, 3): pow(5, 3) = ", pow(5, 3))
    elif val == 3:
        print ("log(2) = ", log(2))
    elif val == 4:
        print ("log10(100) = ", log10(100))
    elif val == 5:
        print ("exp(2) = ", exp(2))
    elif val == 6:
        print ("degrees (0.05235987755982988) = ", degrees(0.5235987755982988))
    elif val == 7:
        print ("radians(30) = ", radians(30))
    elif val == 8:
        print ("fabs(3) = ", fabs(3))
    else:
        break
    ask = input("Tiep ko? (c/k): \n")
    if ask == "k":
        break
    else:
        continue
print ("Bye bye!")