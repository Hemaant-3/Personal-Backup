# # n=int(input("Please provide the number to calculate it\'s factorial\n"))
# # print("you entered the number =", n)
# # fact=1
# # for i in range(n):
# #     fact = fact*(n-i)    
	
# # print("Factorial of given number is = ",fact)
# num = int(input("Enter Number :\n"))
# print("You entered ",num)
# print("First ",num," odd numbers in descending order are :")
# for i in range(0, num)[::-1]:
#     odd_num = (2*i)+1
#     print(odd_num)
# num = int(input("Enter Number :\n"))
# print("You entered ",num)
# print("First ",num," odd numbers in descending order are :")
# for i in range(num,0,-1):
#     odd_num = 1
#     odd_num = i*2 - odd_num
#     print(odd_num)
l1=[x for x in range(1,11)]
l2=[x for x in range(2,21) if x%2==0]
l3=[(x,y) for x in l1 for y in l2 if x*x==y
print("List of number is :",l1
print"2's table is :",l2)
print("The original to square pair found in 2's table upto 20 is as :",l3)