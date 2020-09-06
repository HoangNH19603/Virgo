print ("Tính S (x, n)")

x = int(input("Nhập x: "))
n = int(input("Nhập n: "))
s = 0
for i in range (1, n+1, 2):
    tu = x**i
    mau = 1
    for j in range (1, i+1, 2):
        mau *= j
    s = s + tu/mau
print ("S (x, n) = ", s)