so1 = 1.11
saiso1 = so1 - 1.10
so2 = 2.11
saiso2 = so2 - 2.10

print (saiso1)
print (saiso2)
diff = saiso1 - saiso2

if diff < 0:
    diff = -diff #bieu thuc nay de chuyen diff ve gia tri duong

if diff < 0.0001: #khoang sai so duoc chap nhan
    print ("sai so1 = sai so2") #neu saiso1 ~ saiso2 thi duoc coi la bang nhau
# vi luon co sai so rat nho khien so1 va saiso1 != so2 va saiso2
else:
    print ("sai so1 != sai so2")