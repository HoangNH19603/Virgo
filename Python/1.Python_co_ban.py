# các kiểu dữ liệu cơ bản trong python
# kiểu int: kiểu số nguyên (không có chứa dấu chấm thập phân)
a=10
b=-10
print ("các kiểu số nguyên (int):")
print (a)
print (b)
print (type(a))
# kiểu float: kiểu số thực (có chứa dấu chấm thập phân)
print ("các kiểu số thực (float):")
c=9.5
d=-9.5
print (c)
print (d)
print (type(c))
# kiểu complex: kiểu số phức
print ("kiểu số phức (complex):")
z=19+6j 
print ("phần thực = ",z.real,"phần ảo = ",z.imag)
print (type(z))
x=complex(13,4)
print ("phần thực = ",x.real,"phần ảo = ",x.imag)
print (type(x))
# kiểu str: kiểu chuỗi, để trong nháy đôi hoặc nháy đơn
print ("kiểu chuỗi (str):")
a6='xin chào thế giới >_<'
print (a6)
print (type(a6))
# kiểu bool: kiểu luận lý (True hoặc False)
print ("kiểu luận lý(bool):")
b1=True
b2=False
print (type(b1))

# xóa biến trong python (deldel)
# print ("xóa biến a6 trong python (del)")
# del a6
# print (a6)

# kiểm tra vùng lưu trữ (import thư viện sys)
import sys
print ("để kiểm tra vùng lưu trữ phải import thư viện sys")
print ("thông tin của int:")
print (sys.int_info)
print ("thông tin của float:")
print (sys.float_info)