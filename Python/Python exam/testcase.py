value = int(input())
for x in range (1, value+1):
    for y in range (value, 0, -1):
        if  y <= x:
            print (y, end='')
        else:
            print (" ", end='')
    print ()