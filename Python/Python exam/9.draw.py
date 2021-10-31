print ("Chuong trinh ve hinh nhap lieu tu ban phim!")
while True:
    print ("Chon 1 trong 3 \n - Ve hinh vong: chon 1 \n - Ve hinh tam giac: chon 2 \n - Ve hinh tam giac kep: chon 3 \n - 0 de huy")
    choose = int(input("Ban chon: "))
    if choose == 1: #in hinh vuong
        value = int(input("Nhap chieu dai, rong: "))
        for x in range (value):
            for y in range (value*2):
                if y == 0 or y == (value*2) - 1 or x == 0 or x == value - 1:
                    print ("*", end='')
                else:
                    print (" ", end='')
            print ()
    elif choose == 2: #in hinh tam giac
        value = int(input("Chieu cao: "))
        for x in range (1, value+1):
            for y in range (value, 0, -1):
                if  y <= x:
                    print ("*", end='')
                else:
                    print (" ", end='')
            print ()
    elif choose == 3: #in hinh tam giac kep
        pass
    elif choose == 0:
        break
    else:
        print ("Sai cu phap, thoat phan mem")
        break
    ask = input("Tiep hay khong? c/k: ")
    if ask == "c":
        continue
    else:
        break
print ("Bye bye!")