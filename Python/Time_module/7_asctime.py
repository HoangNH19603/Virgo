import time
#time.asctime() lấy struct_time (hoặc tuple 9 phần tử tương ứng struct_time) làm đối số, trả về chuỗi đại diện cho thời gian đó
ttime = time.localtime()    #struct_time
result = time.asctime(ttime)
print ("Today is ", result)