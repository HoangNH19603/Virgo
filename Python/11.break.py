# print ("tim giai thua cua n")
# while True:
#     value_n = int(input("nhap n: "))
#     value_i = 1
#     value_x = 1
#     while i <= value_n:
#         value_x *= i
#         value_i += 1
#     print (value_x)
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