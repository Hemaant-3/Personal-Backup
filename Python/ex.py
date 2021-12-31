a = int(input("enter any number"))
for i in range(a):
    for j in range(i):
        print(2*j+j*j+1, end=" ")
    print("\n")