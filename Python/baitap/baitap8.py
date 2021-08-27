print ("Chuong trinh tinh nam nhuan")
year = int(input("nhap 1 nam: "))
# print ("la nam nhuan" if year % 4 == 0 else "khong phai nam nhuan")
# print ("nam " + str(year) + " la nam nhuan" if year % 4 == 0 else "nam " + str(year) + " khong phai nam nhuan")
if year % 4 == 0:
	print ("nam ", year, " la nam nhuan")
	namnhuan = year
else:
	print ("nam ", year, " khong phai nam nhuan")
	namnhuan = 1
print ("")
print ("Tinh ngay trong 1 thang")
month = int(input("nhap 1 thang: "))
if month in (1, 3, 5, 7, 8, 10, 12):
	print ("thang ", month, " co 31 ngay")
elif month in (4, 6, 9, 11):
	print ("thang ", month, " co 30 ngay")
elif month == 2:
	print ("thang " + str(month) + " co 29 ngay" if year == namnhuan else "thang " + str(month) + " co 28 ngay")
else:
	print ("Nhap sai thang!")