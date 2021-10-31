# print ("tim giai thua cua n")
# while True:
    # val_sum = 1
    # for item in range(1,int(input())):
    #     val_sum *= item+1
    # print(val_sum)
#     ask = input("tiep khong? (c/k)")
#     if ask == "k":
#         break
# print ("ok!")

print ("tim dtb")
while True:
    math = float(input("nhap diem toan: "))
    physical = float(input("nhap diem ly: "))
    chemistry = float(input("nhap diem hoa: "))
    print ("diem trung binh 3 mon = ", (math + physical + chemistry) / 3)
    ask = input("tiep khong? (c/k) ")
    if ask == "k":
        break
print ("ok!")

value_n = int(input("nhap 1 so: "))
sum_ = 0
for x in range(1, value_n+1):
    sum_ += x
    if sum_ >= 15:
        break
print (sum_)