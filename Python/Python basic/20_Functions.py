def user_data():
    '''
    Ham nhap thong tin ca nhan
    '''
    name=input("Enter your name: ")
    age=int(input("Age: "))
    phone_number=input("Phone Number: ")
    email=input("Email: ")
    company=input("Company: ")
    address=input("Address: ")
    list=[name, age, phone_number, email, company, address]
    return list

def read_data_user(data):
    '''Ham doc thong tin'''
    lts=["Name: ","Age: ","Phone Number: ","Email: ","Company: ","Address: "]
    count = 0
    while count < len(data): #ham len() de dem so phan tu nam trong 1 chuoi, list
        print(lts[count],data[count])
        count += 1

user1=user_data()
read_data_user(user1)