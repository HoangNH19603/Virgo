import time
#time.mktime() lấy struct time (tuple 9 phần tử tương ứng struct_time) làm đối số trả về số giây epoch (==> la ham nghich dao cua time.localtime())

ttime = (2021, 10, 31, 17, 0, 0, 6, 304, 0)     #sao m k dung ham localtime() ma lay struct_time?   Tai bo deo thich :)
to_s = time.mktime(ttime)   #chuyen tuple 9 phan tu ve so giay epoch
print(to_s)     #xuat ra man hinh epoch
print(time.localtime(to_s))     #xuat ra man hinh struct_time tu epoch