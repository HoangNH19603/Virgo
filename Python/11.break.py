# print ("tim giai thua cua n")
# while True:
#     n = int(input("nhap n: "))
#     i = 1
#     x = 1
#     while i <= n:
#         x *= i
#         i += 1
#     print (x)
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
    ask = input("tiep khong? (c/k)")
    if ask == "k":
        break
print ("ok!")

n = int(input("nhap 1 so: "))
s = 0
for x in range(1, n+1):
    s += x
    if s >= 15:
        break
print (s)