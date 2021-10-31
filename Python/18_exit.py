from random import *
print ("Chuong trinh tung xuc xac, thoat phan mem neu tung ra 6")
cout = 0
while True:
    val = int(input("ban muon tung may lan?: "))
    for n in range(val):
        tung = randrange(1,7)
        cout += 1
        print ('tung lan {0}: {1}'.format(cout, tung))
        if tung == 6:
            exit()
    ask = input("Tiep hay ko? (c/k): ")
    if ask == "k":
        break
    else:
        continue
print ("Bye bye!")