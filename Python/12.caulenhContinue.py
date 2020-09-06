# x = int(input("nhap x: "))
# y = 1
# z = 0
# while y <= x:
#     if z == 7 or z == 13:
#         continue
#     z += y
#     y += 1
# print (z)

a = int(input("nhap gia tri a: "))
b = 0
for c in range (1, a+1, 2):
    if c == 7 or c == 13:
        continue
    b += c
print (b)