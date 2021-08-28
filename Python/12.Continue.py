# value_x = int(input("nhap x: "))
# value_y = 1
# value_z = 0
# while value_y <= value_x:
#     if value_z == 7 or value_z == 13:
#         continue
#     value_z += value_y
#     value_y += 1
# print (value_z)

end_ = int(input("nhap gia tri ket thuc: "))
for item in range (1,end_ + 1):
    if item == 3 or item == 5: continue #neu lenh cotinue duoc thuc thi se bo qua nhung lenh ben duoi va quay tro ve vong lap
    print(item,end='')
print()