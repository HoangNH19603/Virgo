print ('{0:>80}'.format("Bảng cửu chương"))
for x in range (1, 11):
    for y in range (2,10):
        print ('{0:>10}*{1:>2}={2:>3}'.format(y, x, y*x),end='')
    print ()