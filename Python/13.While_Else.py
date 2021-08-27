# print ("chuong trinh tinh trung binh cac so nhap vao")
# count = sum = 0
# number_ = int(input("gia tri can nhap: "))
# while count < number_ :
#     value = float(input("nhap gia tri: "))
#     if value <= 0:
#         print ("sai quy tac, thoat phan mem")
#         break
#     sum += value
#     count += 1
# else:
#     print ("trung binh = ", sum/count) #so trung binh = tong so nhap vao/so lan nhap

# vong lap while else: else se duoc thuc thi sau khi dieu kien cua while while bi sai, else se khong bao gio duoc thuc thi neu su dung while True.

sum_ = count_ = 0
print ("Hit any to Exit")
while True: 
    try:
        input_value = float(input("input a value: "))
        sum_ += input_value
        count_ += 1
    except:
        if sum_ == 0: print ("Error")
        else: print ('Average = ', sum_/count_)
        break