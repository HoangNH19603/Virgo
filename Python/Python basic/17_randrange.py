from random import *
cout = 0
n = int(input("tung xuc xac "))
while cout < n:
    val = randrange(1, 7)
    cout += 1
    print ('tung lan {0} ra: {1}'.format(cout, val))