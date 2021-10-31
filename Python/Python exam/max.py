print ("tìm giá trị lớn nhất của các số")
try:
    a = float(input("giá trị a = "))
    b = float(input("giá trị b = "))
    c = float(input("giá trị c = "))
    max = a
    if max < b:
        max = b
        if max < c:
            max = c
        '''
    elif max > b:
        if not max > c:
            max = c
        '''
    else:
        # max = c
        if max > b and max < c:
            max = c
        else:
            pass
    print (max)
except:
    print ("nhập chữ ăn buồi à địt con bà m")