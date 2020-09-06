print ("tinh trung binh cac so nhap vao!")
n = int(input("gia tri nhap vao = "))
sum = 0
for x in range (0, n):
    value = float(input("nhap gia tri: "))
    if value <= 0:
        print ("sai cong thuc, thoat phan mem")
        break
    sum += value
else:
    print ("trung binh = ", sum/n)