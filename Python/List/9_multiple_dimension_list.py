'''col = int(input("Enter number of column: "))
row = int(input("Enter number of row: "))
list2D = []
for row2D in range(row):
	onerow = []
	for col2D in range(col):
		item = int(input("Enter a number: "))
		onerow.append(item)
	list2D.append(onerow)
for item in list2D:
	print(item)'''

col = int(input("Enter number of column: "))
row = int(input("Enter number of row: "))
list2D = [0]*row
for row2D in range(row):
	onerow = [0]*col
	for col2D in range(col):
		onerow[col2D] = int(input("Enter a number: "))
	list2D[row2D] = onerow
for item in list2D:
	print(item)