print ("chuong trinh dich 1 so nhap vao")
n = int(input("moi nhap vao 1 so [1...99]: "))
if n > 10: #tach don vi va hang chuc
    chuc = n // 10
    donvi = n % 10
else:
    chuc = 0
    donvi = n
if n < 100 and n > 0: #gan gia tri
    if chuc < 10: #gan gia tri hang don vi
     if donvi == 1:
      if chuc >= 2:
       donvi = "mốt"
      else:
       donvi = "một"
     elif donvi == 2:
      donvi = "hai"
     elif donvi == 3:
      donvi = "ba"
     elif donvi == 4:
      donvi = "bốn"
     elif donvi == 5:
      if chuc >= 1:
       donvi = "lăm"
      else:
       donvi = "năm"
     elif donvi == 6:
      donvi = "sáu"
     elif donvi == 7:
      donvi = "bảy"
     elif donvi == 8:
      donvi = "tám"
     elif donvi == 9:
      donvi = "chín"

    if chuc == 1: #gan gia tri hang chuc
     chuc = "mười"
    elif chuc == 2:
     chuc = "hai mươi"
    elif chuc == 3:
     chuc = "ba mươi"
    elif chuc == 4:
     chuc = "bốn mươi"
    elif chuc == 5:
     chuc = "năm mươi"
    elif chuc == 6:
     chuc = "sáu mươi"
    elif chuc == 7:
     chuc = "bảy mươi"
    elif chuc == 8:
     chuc = "tám mươi"
    elif chuc == 9:
     chuc = "chín mươi"
else:
    print ("Nhập sai rùi hihi!")
if n <= 10:
    print (donvi)
else:
    print (chuc, donvi)