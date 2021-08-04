input_value = int(input("nhap vao so chieu cao: "))
for y in range (input_value):
    for x in range (input_value):
        if x == 0 or x == y or y == input_value-1: #x == input_value-1:
            print ("*", end='')
        else:
            print (" ", end='')
    print ()