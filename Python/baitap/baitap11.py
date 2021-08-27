day = int(input("nhap 1 ngay: "))
month = int(input("nhap 1 thang: "))
year = int(input("nhap 1 nam: "))
print ("ngay duoc nhap: ", day, "/", month, "/", year)
if day <= 31 and day >= 1 and month >= 1 and month <= 12:
    if day >= 30 and month in (4, 6, 9, 11):
        print ("loi!! thang: ", month, "chi co 30 ngay")
    elif day >= 31 and month in (1, 3, 5, 7, 8, 10, 12):
        print ("loi!! thang: ", month, "chi co 31 ngay")
    elif month == 2 and year % 4 == 0 and day >= 29:
        print ("loi!! thang 2 nam", year, "chi co 29 ngay")
        '''
        if year % 4 == 0:
            namnhuan = year
        else:
            namnhuan = 1
        if day >= 29 and year == namnhuan:
            print ("loi!! thang 2 nam ", year, "chi co 29 ngay")
        elif day >= 28 and year != namnhuan:
            print ("loi!! thang 2 nam ", year, "chi co 28 ngay")
        '''
    elif month == 2 and year % 4 != 0 and day >= 28:
        print ("loi!!! thang 2 nam", year, "chi co 28 ngay")
    else:
        print ("ngay tiep theo la ngay: ", day + 1, "/", month, "/", year)
else:
    print ("loi!! khong co ngay tiep theo trong thang nay")