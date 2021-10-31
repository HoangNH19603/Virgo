def BMI(weight,height):
    bmi = weight/height**2
    if bmi < 18.5:return "Slim"
    elif bmi >= 18.5 and bmi < 25:return "Normal"
    elif bmi >= 25 and bmi < 30:return "Fat"
    elif bmi >= 30 and bmi < 35:return "Fat 1"
    elif bmi >= 35 and bmi < 40:return "Fat 2"
    elif bmi >= 40:return "Fat 3"
print(BMI(float(input("weight ")),float(input("height "))))