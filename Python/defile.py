def swap(a,b):
	temp = a
	a = b
	b = temp
	print("   after wapping: ", a,b)

a = int(input("enter a: "))
b = int(input("enter b: "))
print("   before swapping: ",a, b)
swap(a,b)