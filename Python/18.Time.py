from time import *
''' time functions PYTHON
    *time.time() : trả về số giây tính từ epoch, hay còn gọi là giá trị timestamp
    *time.ctime() : phương thức này chuyển đổi 1 time được biểu diễn bằng số giây tính từ epoch thành biểu diễn dạng chuỗi
    *time.sleep() : tạm dừng thực thi bằng số thời gian truyền vào
    *time.localtime() : lấy số giây được truyền vào làm đối số và trả về struct_time theo giờ địa phương
    *time.gmtime() : lấy số giây được truyền vào làm đối số và trả về struct_time theo giờ UCT
    *time.mktime() : lấy struct_time (hoặc một tuple chứa 9 phần tử tương ứng với struct_time) làm đối số và trả về số giây tính từ epoch  (chuyển từ ngày, tháng, năm sang giây => nghịch đảo của hàm time.localtime())
    *time.asctime() : lấy struct_time (hoặc một tuple chứa 9 phần tử tương ứng với struct_time) làm đối số và trả về một chuỗi đại diện cho thời gian đó
    *time.strftime() : lấy struct_time (hoặc một tuple chứa 9 phần tử tương ứng với struct_time) làm đối số và trả về một chuỗi đại diện cho thời gian đó trêm cpde định dạng được truyền vào
    *time.strptime () : phân tích một chuỗi đại diện cho 1 thời điểm, thời gian và trả về struct_time
    more: https://docs.python.org/3/library/time.html
'''
#------------------------------------------------------------------------------------------------
''' Class time.struct_time
    một số hàm trong module time chẳng hạn như gmtime(), asctime()... đều có time.struct_time là đối tượng được trả về
    *tm_year : năm hiện tại
    *tm_mon : tháng hiện tại
    *tm_mday : ngày hiện tại
    *tm_hour : giờ hiện tại
    *tm_min : phút hiện tại
    *tm_sec : giây hiện tại
    *tm_wday : ngày trong tuần (monday tính là 0)
    *tm_yday : ngày trong năm
    *tm_isdst : xác định DST: 0, 1 hoặc -1
'''
''' Các định dạng của hàm strftime() và strptime()

    %Y: năm [0001,..., 2018, 2019,..., 9999]
    %m: tháng [01, 02, ..., 11, 12]
    %d: ngày [01, 02, ..., 30, 31]
    %H: giờ [00, 01, ..., 22, 23
    %M: tháng [00, 01, ..., 58, 59]
    %S: giây [00, 01, ..., 58, 61]

    https://quantrimang.com/ham-strftime-trong-python-165142
    https://quantrimang.com/ham-strftime-trong-python-165142
'''
#------------------------------------------------------------------------------------------------
#VÍ DỤ:
#time()
seconds = time()
print("so giay tinh tu epoch", seconds)

#ctime()
before = ctime(1562983783) #nếu không truyền đối số (timestamp), ctime sẽ trả về giá trị thời gian hiện tại
now = ctime()
print ("The day i was started learning python: ", before)
print ("Today is: ", now)

#sleep()
print("start")
for item in range(10):
    time.sleep(1)
    print(item)
else: print("stop")

#localtime()
# toDay = localtime(1599194280) #nếu không cung cấp timestamp thì thời gian trả về từ hàm time() sẽ được sử dụng
# print ("Today: ", toDay)
# print ("mounth ", toDay.tm_mon)
# print ("year ", toDay.tm_year)
# print ("Hour ", toDay.tm_hour)

#gmtime()
# toDay = gmtime(1599194316) #nếu không cung cấp timestamp thì thời gian trả về từ hàm time() sẽ được sử dụng
# print ("Today: ", toDay)
# print ("mounth ", toDay.tm_mon)
# print ("year ", toDay.tm_year)
# print ("Hour ", toDay.tm_hour)

#mktime()
# t = (2020, 9, 4, 11, 40, 0, 4, 248, 0) #9 phần tử tương ứng với struct_time
# lc_time = mktime(t)
# print ("local time = ", lc_time) #nghịch đảo của hàm local time
#ví dụ cho thấy mktime() và localtime() liên quan ntn
# seconds = 1562983783
 
# # trả về struct_time
# t = time.localtime(seconds)
# print("t1: ", t)

# # trả về giây từ struct_time
# s = time.mktime(t)
# print("\ns:", seconds)

#asctime()
# t = (2020, 9, 4, 11, 40, 0, 4, 248, 0) #tương ứng struct_time
# result = asctime(t)
# print ("Tra ve: ", result)

#strftime()
# named_tuple = time.localtime() # lấy struct_time
# time_string = time.strftime("%m/%d/%Y, %H:%M:%S", named_tuple)
# print(time_string)

#strptime()
# time_string = "17 July, 2019"
# result = time.strptime(time_string, "%d %B, %Y")
# print(result)
