# n=int(input("Please provide the number to calculate it\'s factorial\n"))
# print("you entered the number =", n)
# fact=1
# for i in range(n):
#     fact = fact*(n-i)    
	
# print("Factorial of given number is = ",fact)
num = int(input("Enter Number :\n"))
print("You entered ",num)
print("First "," odd numbers in descending order are :")
for i in range(0, num)[::-1]:
    odd_num = (2*i)+1
    print(odd_num)