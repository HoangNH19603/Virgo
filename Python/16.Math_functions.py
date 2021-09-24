from math import *

# math functions in python
# 1.Sqrt - căn bậc 2
# 2.Pow - lũy thừa
# 3.Log -> log(x) = logeX = Inx
# 4.Log10 - Logarit cơ số 10 của x, log 10(x) = log10X
# 5.Exp - tính ex
# 6.Degrees - Đổi radian ra độ
# 7.Radians - tính radian 180/pi*x
# 8.Fabs - tính giá trị tuyệt đối
# 9.Sin, cos, tan
# tham khảo ở đây: https://www.tutorialsteacher.com/python/math-module
# https://toidicode.com/xu-ly-so-hoc-voi-module-math-trong-python-371.html

while True:
    val = int(input("Ban chon: "))
    if val == 1:
        print ("Can bac 2 cua 5 : sqrt(5) = ", sqrt(5))     #binh phuong
    elif val == 2:
        print ("Luy thua (5, 3): pow(5, 3) = ", pow(5, 3))      #so mu
    elif val == 3:
        print ("logarit log(2) = ", log(2))     #log
    elif val == 4:
        print ("logarit co so 10 log10(100) = ", log10(100))    #logarit10
    elif val == 5:
        print ("exp(2) = ", exp(2))
    elif val == 6:
        print ("degrees (0.05235987755982988) = ", round (degrees(0.5235987755982988), 2))     #Radian -> goc
    elif val == 7:
        print ("radians(30) = ", radians(30))   #Radians -> number
    elif val == 8:
        print ("fabs(3) = ", fabs(3))   #tri tuyet doi
    elif val == 9:
        goc = float(input("Moi ban nhap vao 1 goc: "))
        sinx = sin(radians(goc))    #Sin
        cosx = cos(radians(goc))    #Cos
        tanx = tan(radians(goc))    #tan
        cotanx = 1/tanx     #cot
        print ('>>Sinx ({0}) = {1}'.format(goc, sinx))
        print ('>>Cosx ({0}) = {1}'.format(goc, cosx))
        print ('>>tanx ({0}) = {1}'.format(goc, tanx))
        print ('>>cotanx ({0}) = {1}'.format(goc, cotanx))
    else:
        break
    ask = input("Tiep ko? (c/k): \n")
    if ask == "k":
        break
    else:
        continue
print ("Stopped!")