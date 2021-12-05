while True:
    string = input("Nhap vao 1 chuoi: ")
    if string == string[::-1]:
        print("Symmetric chain")
        break
    else:
        print("is not symmetric chain")