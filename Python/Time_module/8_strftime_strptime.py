import time

#time.strftime() lấy struct_time (hoặc tuple 9 phần tử tương ứng struct_time) làm đối số, trả về một chuỗi đại diện cho thời gian đó trêm cpde định dạng được truyền vào
named_tuple = time.localtime()      #struct_time
time_string = time.strftime("%m/%d/%Y, %H:%M:%S", named_tuple)
print(time_string)

#time.strptime () phân tích một chuỗi đại diện cho 1 thời điểm, thời gian và trả về struct_time (==> ham nghich dao cua time.strftime())
time_string = "17 July, 2019"
result = time.strptime(time_string, "%d %B, %Y")
print(result)

'''
Các định dạng của hàm strftime() và strptime()
%Y: năm [0001,..., 2018, 2019,..., 9999]
%m: tháng [01, 02, ..., 11, 12]
%d: ngày [01, 02, ..., 30, 31]
%H: giờ [00, 01, ..., 22, 23
%M: tháng [00, 01, ..., 58, 59]
%S: giây [00, 01, ..., 58, 60]
'''