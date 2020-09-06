n = int(input("nhap vao so n: "))
for y in range (n):
    for x in range (n):
        if x == 0 or x == y or y == n-1: #x == n-1:
            print ("*", end='')
        else:
            print (" ", end='')
    print ()