# For sử dụng range để định nghĩa vùng dữ liệu lặp và bước lặp
# co the thay ham range = 1 bien hoac 1 list co san
# cú pháp range(start, stop, step)
# begin: giá trị đầu (0)
# end: giá trị cuối (gần cuối: n - 1)
# step: bước nhảy (mặc định là 1)
# vd: for n in range (begin, end, step) hoặc for n in range (begin) hay for n in range (end)

# for n in range (1, 11, 2):
#     print (n, end='')

value_ = int(input("nhap n: "))
sum_ = 0
if value_ % 2 == 0: #neu gia tri nhap vao chia het cho 2
    for number in range (2, value_ + 1, 2):
        sum_ += number
else:
    for number in range (1, value_ + 1, 2):
        sum_ += number
print (sum_)