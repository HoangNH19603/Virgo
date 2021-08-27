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
sum_ = 0
for sole in range (1, end_+1, 2):
    if sole == 7 or sole == 13:
        continue #neu lenh cotinue duoc thuc thi se bo qua nhung lenh ben duoi va quay tro ve vong lap
    sum_ += sole
print (sum_)