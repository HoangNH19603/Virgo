print ("bài tập tính điểm trung bình")
print ("khối tự nhiên: chọn 1, khối xã hội: chọn 2")
print ("ấn 0 để CÚT!")
try:
    x = int(input("nhập 1 giá trị: "))
    if x == 1:
        print ("Khối tự nhiên")
        math = float(input("nhập điểm toán: "))
        physical = float(input("nhập điểm lý: "))
        chemistry = float(input("nhập điểm hóa: "))
        dtb = (math + physical + chemistry)/3
        print ("điểm trung bình = ", round(dtb,2))
        print ("thằng tiếp theo!!!")
    elif x == 2:
        print ("khối xã hội")
        philology = float(input("nhập điểm văn: "))
        history = float(input("nhập điểm sử: "))
        geography = float(input("nhập điểm địa: "))
        dtb = (philology + history + geography)/3
        print ("điểm trung bình = ", round(dtb,2))
        print ("Hận đàn bà!")
    elif x == 0:
        print ("Thả chó!")
    else:
        print ("ba...baka!")
except:
    print ("nhập số thì nhập x.x đừng có nhập x,x nhé")
    print ("Ngu!")