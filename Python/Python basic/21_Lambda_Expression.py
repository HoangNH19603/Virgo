
#Lambda is anonymous function
#Syntax: lambda parameter:expression
#Example
f = lambda x:x**2
print (f(int(input())))

#More example
# def fx(a,b,c):
#     '''this function will return ax^2 + bx + c'''
#     return lambda x:a*x**2 + b*x + c
# value = fx(1,2,3)(2)
# print (value)

# def Fx(f,x):
#     '''
#     this function is a lambda expression
#     Syntax: <expression>, <parameter value>
#     or you can using default lambda syntax: lambda <parameter>:<expression>,<parameter value>
#     '''
#     return f(x) #in there value f mean lambda keyword, and x is a parameter
# def nam_nhuan(years):
#     return "nam " + str(years) + " la nam nhuan" if years % 4 == 0 else "nam " + str(years) + " khong phai nam nhuan"
# nam = Fx(nam_nhuan,int(input())) #in here i used Fx() function as a lambda expression. In there nam_nhuan function is a expression
# print (nam)


# for more information i think you should searching for documents about lambda on youtube