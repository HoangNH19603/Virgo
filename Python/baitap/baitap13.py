print ("chuong trinh tim quy theo thang")
month = int(input("nhap vao 1 thang: "))
if month in (1, 2, 3):
    print ("thang ", month, "thuoc quy 1")
elif month in (4, 5, 6):
    print ("thang ", month, "thuoc quy 2")
elif month in (7, 8, 9):
    print ("thang ", month, "thuoc quy 3")
elif month in (10, 11, 12):
    print ("thang ", month, "thuoc quy 4")
else:
    print ("nhap sai thang")