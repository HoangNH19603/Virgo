#game doan so ver.2
import random
while True:
    win = False
    maydoan = random.randrange(1,100) #gia tri cua may tu 1 den 100
    for n in range(1,8):
        nguoidoan = int(input("Ban doan lan " + str(n) +  "\nx = "))
        if maydoan == nguoidoan:
            print ("Chuc mung ban da thang! x = ", maydoan)
            win = True #chien thang troi choi va thoat khoi vong lap
            break
        else: #co 2 gia tri khi sai: maydoan > nguoidoan va maydoan < nguoidoan
            #in ra ban doan sai, so may > so ban neu maydoan > nguoi doan va nguoc lai
            print ("Ban doan sai, so may > so ban" if maydoan > nguoidoan else "Ban doan sai, so may < so ban")
    if win == False:
        print ("GAME OVER!")
    ask = input("Tiep hay khong? (c/k): ")
    if ask == "c":
        continue
    else:
        break
print ("Bye bye!")