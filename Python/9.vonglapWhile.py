print ("nhap 1 so [1...10]")
x = int(input("HI: "))
while x < 1 or x > 10:
    x = int(input("nhap lai di em: "))
print (x**2)

print ("tinh tong cua day so tu 1 ... n")
n = int(input("nhap so: "))
i = 1
s = 0
while i < n:
    s = s + i
    i += 1
print (s)