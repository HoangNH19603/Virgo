import time
#time.gmtime() cha khac cai deo gi time.localtime() nhung deo tra ve thoi gian dia phuong :))

today = time.gmtime()
print(today)
print(today.tm_mday, today.tm_mon, today.tm_year)

''' 
Class time.struct_time
một số hàm trong module time chẳng hạn như gmtime(), asctime()... đều có time.struct_time là đối tượng được trả về
tm_year : năm hiện tại
tm_mon : tháng hiện tại
tm_mday : ngày hiện tại
tm_hour : giờ hiện tại
tm_min : phút hiện tại
tm_sec : giây hiện tại
tm_wday : ngày trong tuần (monday tính là 0)
tm_yday : ngày trong năm
tm_isdst : xác định DST: 0, 1 hoặc -1
'''