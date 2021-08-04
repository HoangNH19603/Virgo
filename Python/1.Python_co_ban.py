# kieu du lieu co ban trong python
import sys # kiểm tra vùng lưu trữ (import thư viện sys)

# kiểu int: kiểu số nguyên (không có chứa dấu chấm thập phân)
int_value = 10
int_value2 = -10
print ("các kiểu số nguyên (int):")
print (int_value)
print (int_value2)
print (type(int_value))
print (sys.int_info)

# kiểu float: kiểu số thực (có chứa dấu chấm thập phân)
print ("các kiểu số thực (float):")
float_value = 9.5 
float_value2 = -9.5
print (float_value)
print (float_value2)
print (type(float_value))
print (sys.float_info)

# kiểu complex: kiểu số phức
print ("kiểu số phức (complex):")
complex_z = 19+6j
print ("phần thực = ",complex_z.real,"phần ảo = ",complex_z.imag)
print (type(complex_z))
complex_x = complex(13,4)
print ("phần thực = ",complex_x.real,"phần ảo = ",complex_x.imag)
print (type(complex_z))

# kiểu str: kiểu chuỗi, để trong nháy đôi hoặc nháy đơn
print ("kiểu chuỗi (str):")
string = ('Hello world')
print (string)
print (type(string))

# kiểu bool: kiểu luận lý (True hoặc False)
print ("kiểu luận lý(bool):")
bool1=True
bool2=False
print (type(bool1))

# xóa biến trong python (del)
# print ("xóa biến string trong python (del)")
# del string
# print (string)

# del complex_z
# print (complex_z.real , complex_z.imag)