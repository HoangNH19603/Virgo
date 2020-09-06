print ("nhap gia tri tu ban phim:")
a=int(input())
#"input mac dinh la kieu str, dung int de chuyen sang kieu so nguyen!"
print ("gia tri duoc nhap: " + str(a))

print ("nhap 1 chuoi tu ban phim:")
b=input("nhap 1 chuoi bat ky: ")
print (b)

print ("nhap gia tri true/false:")
def strtobool (c):
    return c.lower() in ("ok","true","yes","1","co","y")
d=input("xin moi nhap gia tri true/false: ")
d=strtobool (d)
print (d)

# print ("nhap gia tri complex:")
# x=complex(input("moi nhap 2 gia tri:"))
# print ("phan thuc = ",x.real,"phan ao = ",x.imag)