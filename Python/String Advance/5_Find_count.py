#in python, find() function will return the first occurrence of the specified value, and rfind() will return the last occurrence if not found functions return -1
#the find() method is almost the same as the index() method, the only difference is that the index() method raises an exception if the value is not found.
#syntax: object.method("str",start,end)
name = "Nguyen Huy Hoang"
print("Vi tri cua 'Nguyen' tai: ",name.find("Nguyen"))   #without start point and end point
print("Vi tri cua 'Huy' tai: ",name.find("Huy",5,-1))   #with start point and end point, and -1 mean the last character of the string
print("Vi tri cua 'Hoang' tai: ",name.find("Hoang",10))    #with only start point

#if not found
print("Tim thay chuoi" if name.find('str') != -1 else "Khong tim thay")

#compare methods
print("Chu 'H' dau tien xuat hien tai ",name.find("H"))   #find() method
print("Chu 'H' cuoi cung xuat hien tai ",name.rfind("H"))      #rfind() method

#count() method
print("So lan 'H' xuat hien ",name.count('H'))
print("So lan 'H' xuat hien(0-5) ",name.count('H',0,5))