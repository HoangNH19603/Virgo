# print ("một số cách su dung ham` input()")
# print ("cách 1")
# print ("nhập giá trị của x: ")
# x = int(input())
# print ("giá trị của x = " + str(x))
# print ('-'*60)

# print ("cách 2")
# y = int(input("nhập giá trị của y: "))
# print ("giá trị của y = " + str(y))
# print ('-'*60)

print ("3 loại lỗi cơ bản")
print ('-'*60)
print ('{0:>2} {1:>25} {2:>29}'.format(1, 'lỗi cú pháp', 'Syntax Errors'))
print ('{0:>2} {1:>25} {2:>29}'.format(2, 'lỗi thực thi', 'Run-time Errors'))
print ('{0:>2} {1:>25} {2:>29}'.format(3, 'lỗi nghiệp vụ', 'Logic Errors'))
print ('-'*60)

# lỗi cú pháp
'''là lỗi khiến code không chạy, không thực thi được, không có kết quả'''
# lỗi thực thi
'''là lỗi khiến code chạy được nhưng trong quá trình thực thi phát sinh lỗi, không có kết quả'''
# lỗi nghiệp vụ
'''là lỗi khiến code chạy được, thực thi được, nhưng kết quả sai'''

print ("")

print ("cách bắt lỗi trong python")
try:
    a = int(input("giá trị a: "))
    b = int(input("giá trị b: "))
    c = a / b
except:
    print ("gặp lỗi nếu b = 0")
    print ("lỗi chia cho 0")