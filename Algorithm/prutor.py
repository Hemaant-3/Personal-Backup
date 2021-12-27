num = int(input("Enter Number :\n"))
print("You entered ",num)
print("First ",num," odd numbers in descending order are :")
for i in reversed(range(num+1)):
	odd_num = (2*i)+1
	print(odd_num)