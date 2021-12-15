binh_phuong = int(input("Enter a value of 1 to 10: "))
while binh_phuong < 1 or binh_phuong > 10:
    binh_phuong = int(input("nhap lai di em: "))
print (binh_phuong, "binh phuong = ", binh_phuong**2)

print ("tinh tong cua day so tu 1 ... n")
end_ = int(input("nhap so: "))
start_ = 1
sum_ = 0
while start_ <= end_ :
    sum_ = sum_ + start_
    start_ += 1
print (sum_)

while True: #vong lap while True can co dieu kien break de thoat vong lap, neu khong se lap lai mai mai
    ask = input('lap lai hay khong? ')
    if ask == "y" or ask == "co":
        continue
    else:
        break