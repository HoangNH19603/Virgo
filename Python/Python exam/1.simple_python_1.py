print ("Các kiểu dữ liệu")
print ('-'*30)
print ('{0:>2} {1:>3} {2:>23}'.format(1,'|','kiểu int (số nguyên)'))
print ('{0:>2} {1:>3} {2:>23}'.format(2,'|','kiểu float (số thực)'))
print ('{0:>2} {1:>3} {2:>23}'.format(3,'|','kiểu bool (True False)'))
print ('{0:>2} {1:>3} {2:>23}'.format(4,'|','kiểu str (Chuỗi)'))
print ('-'*30)
print ("")

print ("có 2 loại ghi chú trong python")
# ghi chú 1 dòng
'''ghi chú nhiều dòng nè
hihi chào ae giang hò nhá!'''
print ("")

print ("ý nghĩa của các toán tử")
print ('-'*60)
print ('{0:>7} {1:>3} {2:>45}'.format('+','|','toán tử cộng'))
print ('{0:>7} {1:>3} {2:>45}'.format('-','|','toán tử trừ'))
print ('{0:>7} {1:>3} {2:>45}'.format('*','|','toán tử nhân'))
print ('{0:>7} {1:>3} {2:>45}'.format('**','|','bình phương'))
print ('{0:>7} {1:>3} {2:>45}'.format('/','|','toán tử chia'))
print ('{0:>7} {1:>3} {2:>45}'.format('//','|','chia lấy số nguyên'))
print ('{0:>7} {1:>3} {2:>45}'.format('%','|','chia lấy số dư'))
print ('{0:>7} {1:>3} {2:>45}'.format('==','|','so sánh bằng'))
print ('{0:>7} {1:>3} {2:>45}'.format('!=','|','so sánh không bằng'))
print ('{0:>7} {1:>3} {2:>45}'.format('<','|','so sánh nhỏ hơn'))
print ('{0:>7} {1:>3} {2:>45}'.format('>','|','so sánh lớn hơn'))
print ('{0:>7} {1:>3} {2:>45}'.format('>=','|','so sánh lớn hơn hoặc bằng'))
print ('{0:>7} {1:>3} {2:>45}'.format('<=','|','so sánh nhỏ hơn hoặc bằng'))
print ('{0:>7} {1:>3} {2:>45}'.format('and','|','toán tử và'))
print ('{0:>7} {1:>3} {2:>45}'.format('or','|','toán tử hoặc'))
print ('{0:>7} {1:>3} {2:>45}'.format('in','|','so sánh với giá trị trong khối'))
print ('{0:>7} {1:>3} {2:>45}'.format('is','|','nghĩa là, bằng'))
print ('{0:>7} {1:>3} {2:>45}'.format('is not','|','không phải, khác'))
print ('{0:>7} {1:>3} {2:>45}'.format('not','|','toán tử phủ định'))
print ('-'*60)
print ("")

print ("ví dụ:")
print ("toán tử \'is\'")
x = 5
y = 5
z = 6
print ("x = 5 \ny = 5")
print (x is y)
print ("")

print ("x = 5 \nz = 6")
print (x is z)
print ("")

print ("toán tử \'is not\'")
print ("x = 5 \ny = 5")
print (x is not y)
print ("")

print ("x = 5 \nz = 6")
print (x is not z)
print ("")

print ("toán tử \'not\'")
# được dùng để đảo ngược trạng thái logic của toán tử
a = int(input("nhap gia tri a: "))
b = 5
if not a >= b:
    print ("Ngu")
else:
    print ("Hi!")