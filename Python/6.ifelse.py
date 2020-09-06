print ("Xet diem trung binh hoc sinh")
math = float(input('nhap diem toan: '))
physical = float(input('nhap diem ly: '))
chemistry = float(input('nhap diem hoa: '))
dtb = (math + physical + chemistry) / 3

if dtb < 7 and dtb >= 4:
    print ("HS TB")
elif dtb >= 7 and dtb < 9:
    print ("HS TT")
    if dtb >= 8.5:
        print ("Ti thi duoc!!!")
elif dtb >= 9 and dtb <= 10:
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
else:
    print ("nhap sai")