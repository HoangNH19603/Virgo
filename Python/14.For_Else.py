print ("tinh trung binh cac so nhap vao!")
input_val = int(input("gia tri nhap vao = "))
sum_ = 0
for x in range (0, input_val):
    value = float(input("nhap gia tri: "))
    if value <= 0:
        print ("sai cong thuc, thoat phan mem")
        break
    sum_ += value
else:
    print ("trung binh = ", sum_/input_val)
# tuong tu nhu vong lap while else,trong vong lap For else, else se duoc thuc thi ngay sau khi dieu kien cua For khong con thoa man