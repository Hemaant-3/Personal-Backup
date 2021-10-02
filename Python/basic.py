from math import *
def power (x, y):
	return pow(x, y)
	"""This is given power"""
def add(x,y):
        return x+y
def multiply(x,y):
    return x*y
def substract(x,y):
    return x-y
def divide(x,y):
    return x/y
	#take input from the user
print(".Select operation")
print("1.add")
print("2.substract")
print("3.multiply")
print("4.division")
print("5power")
choice = input("Enter the choice (1,2,3,4,5):\n\n")
num1 =int(input ("Enter the first number: \n"))
num2 = int(input("Enter the second number: \n"))
if choice == '1':
		print (num1, "+", num2,"=", add(num1,num2))
elif choice == '2':
		print (num1, "-", num2,"=", substract (num1,num2))
elif choice == '3':
		print (num1, "*", num2,"=", multiply (num1,num2))
elif choice == '4':
		print (num1, "÷", num2,"=", divide(num1,num2))
elif choice == '5':
		print (num1, "^", num2,"=", power(num1,num2))
else:
		print("invalid input")