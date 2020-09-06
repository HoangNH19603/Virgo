a = float(input("nhap gia tri a: "))
b = float(input("nhap gia tri b: "))
math = input("nhap phep toan ban muon: ")
if math == "+":
    print (a + b)
elif math == "-":
    print (a - b)
elif math == "*":
    print (a * b)
elif math == "/":
    print (a / b)
elif math == "//":
    print (a // b)
elif math == "%":
    print (a % b)
elif math == "**":
    print (a ** b)
else:
    print ("Sai cu phap")