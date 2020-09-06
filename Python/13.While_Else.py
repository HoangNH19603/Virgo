print ("chuong trinh tinh trung binh cac so nhap vao")
count = sum = 0
n = int(input("so trung binh: "))
while count < n and count >= 0:
    value = float(input("nhap gia tri: "))
    if value <= 0:
        print ("sai quy tac, thoat phan mem")
        break
    sum += value
    count += 1
else:
    print ("trung binh = ", sum/count)