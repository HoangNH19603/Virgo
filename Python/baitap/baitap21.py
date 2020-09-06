#game doan so ver.1
import random
while True:
    diem = 0
    sai = 0
    for dem in range (1,8):
        val = random.randrange(1,100)
        ask = eval(input("gia tri cua val: "))
        if ask is True:
            diem += 1
            print ("Tra loi dung!!! \nBan duoc +1d")
            if diem == 5:
                print ("Win game!")
                break
        else:
            print ("Sai, val = ", val)
            sai += 1
        if sai == 3:
            print ("GAME OVER")
            break
    ask1 = input("tiep hay khong? (c/k): ")
    if ask1 == "c":
        continue
    else:
        break
print ("Bye bye!")