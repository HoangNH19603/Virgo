# For sử dụng range để định nghĩa vùng dữ liệu lặp và bước lặp
# cú pháp hàm range:
# begin: giá trị đầu (0)
# end: giá trị cuối (gần cuối: n - 1)
# step: bước nhảy (mặc định là 1)
# vd: for n in range (begin, end, step) hoặc for n in range (begin) hay for n in range (end)

# for n in range (1, 11, 2):
#     print (n, end='')

n = int(input("nhap n: "))
s = 0
if n % 2 == 0:
    for x in range (2, n + 1, 2):
        s += x
else:
    for x in range (1, n + 1, 2):
        s += x
print (s)