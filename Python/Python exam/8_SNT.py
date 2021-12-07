print ("chuong trinh tinh so nguyen to")
# while True:
#     x = int(input("nhap mot so bat ky: "))
#     if x % 2 != 0 and x % 3 != 0 and x % 5 != 0 and x % 7 != 0:
#         print (x, " la so nguyen to!")
#     elif x <= 7:
#         if x == 4 or x == 6:
#             print (x, " khong phai la so nguyen to!")
#         else:
#             print (x, " la so nguyen to!")
#     else:
#         print (x, " khong phai la so nguyen to!")
#     print ("co muon tiep tuc khong? (c/k)")
#     val = input()
#     if val == "k":
#         break
#     elif val == "c":
#         continue
#     else:
#         print ("sai cu phap, thoat phan mem!")
#         break
# print ("bye bye!")

while True:
    n = int(input("nhập 1 số nguyên: "))
    dem = 0
    for i in range (1, n+1):
        if n % i == 0:
            dem += 1
    if dem == 2:
        print (n, " la so nguyen to!")
    else:
        print (n, " khong phai so nguyen to")
    val = input("tiep hay khong? c/k: ")
    if val == "k":
        break
    elif val == "c":
        continue
    else:
        print ("sai cu phap thoat phan mem!")
        break
print("bye bye!")