import time
#time.time() tra ve so giay hien tai tinh tu epoch hay con goi la gia tri timestamp

start = time.time()
print("Hello world!")
text = input("Toi la ")
print("epoch today is ",time.time())
print("Thoi gian chay het: ",round(time.time() - start,2))

''' time functions PYTHON
    more: https://docs.python.org/3/library/time.html
'''