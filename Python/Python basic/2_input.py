'''
print ("nhap gia tri tu ban phim:")
int_a = int(input())  #"input mac dinh la kieu str, dung int de ep kieu du lieu sang kieu so nguyen!"
print ("gia tri duoc nhap: " , str(int_a))

print ("nhap 1 chuoi tu ban phim:")
string_b = input("nhap 1 chuoi bat ky: ")
print (string_b)
'''

print ("nhap gia tri true/false:")
def strtobool (yes):
    return yes.lower() in ("ok","true","yes","1","co","y")
check1 = input("xin moi nhap gia tri true/false: ")
check1 = strtobool (check1)
print (check1)

print ("nhap gia tri complex:")
complex_1 = float(input("real: "))
complex_2 = float(input('imagine: '))
complex_x = complex(complex_1, complex_2) #cu phap cua ham complex(phan thuc, phan ao)
print ("phan thuc = ",complex_x.real,"phan ao = ",complex_x.imag)