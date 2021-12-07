print ("bài tập tính giờ, phút, giây")
time = int(input("nhập số giây bất kỳ"))
hour = (time//3600)%24
minute = (time%3600)//60
second = (time%3600)%60
print (hour,"giờ",minute,"phút",second,"giây")