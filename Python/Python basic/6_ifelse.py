#normal if else
print ("Xet diem trung binh hoc sinh")
math = float(input('nhap diem toan: '))
physical = float(input('nhap diem ly: '))
chemistry = float(input('nhap diem hoa: '))
dtb = (math + physical + chemistry) / 3

if dtb < 6 and dtb >= 4:print ("HS TB") #if inline
elif dtb >= 6 and dtb < 8:
    print ("HS TT")
    if dtb >= 8.5:
        print ("Ti thi duoc!!!")
elif dtb >= 8 and dtb <= 10:
    print ("HS G")
    if dtb >= 9.7:
        print ("Xuat sac!!!")
    elif dtb < 9.7:
        pass #deo lam nua
elif dtb > 0 and dtb < 4:
    print ("HS Yeu!")
    if dtb < 3:
        print ("Du'p")
    elif dtb >= 3:
        print ("Thi lai")
else:print ("nhap sai") #else inline

#if else inline
Value_x = int(input("nhap gia tri 1: "))
Value_y = int(input("nhap gia tri 2: "))
Sum = 10 if Value_x + Value_y >= 10 else 5
print ("Sum = ", Sum)

Value_n = int(input("nhap 1 so: "))
print ("la so chan" if Value_n % 2 == 0 else "la so le")