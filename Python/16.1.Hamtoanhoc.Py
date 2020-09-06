from math import *

print ("Bai hoc nay trinh bay cach su dung cac ham luong giac trong Python \n - Tu mot goc ta dua ve Radian sau do day vao cac ham luong giac: \n")

# Sin 
# Cos 
# tan

goc = float(input("Moi ban nhap vao 1 goc: \n"))
sinx = sin(radians(goc))
cosx = cos(radians(goc))
tanx = tan(radians(goc))
cotanx = 1/tanx
print ('>>Sinx ({0}) = {1}'.format(goc, sinx))
print ('>>Cosx ({0}) = {1}'.format(goc, cosx))
print ('>>tanx ({0}) = {1}'.format(goc, tanx))
print ('>>cotanx ({0}) = {1}'.format(goc, cotanx))