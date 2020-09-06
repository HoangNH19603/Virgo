a = int(input("nhap a: "))
b = int(input("nhap b: "))

'''
if a + b >= 10:
    c = 10
else:
    c = 5
'''
c = 10 if a + b >= 10 else 5

print ("c = " + str(c))