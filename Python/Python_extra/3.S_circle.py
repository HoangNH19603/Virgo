print ("chương trình tính chu vi và diện tích hình tròn")
print ("tính chu vi chọn 1")
print ("tính diện tích chọn 2")
print ("hủy chọn 0")
giatri = int(input("mời nhập giá trị:"))

import math
try:
    if giatri == 1:
        bankinh = float(input("mời nhập bán kính:"))
        print ("r = " + str(bankinh))
        print ("ADCT: chu vi = 2.𝝅.r")
        chuvi = bankinh*2*math.pi
        print ("chu vi = " + str(chuvi))
        print ("Bye Bye!")
    elif giatri == 2:
        bankinh = float(input("mời nhập bán kính"))
        print ("r = " + str(bankinh))
        print ("ADCT: diện tích = 𝝅.r")
        dientich = bankinh**2*math.pi
        print ("diện tích = " + str(dientich))
        print ("Bye Bye!")
    elif giatri == 0:
        print ("Bye Bye!")
    else:
        print ("sai cú pháp")
except:
    print ("sai giá trị, nhập x.x thay vì x,x")
    print ("Ngu!")