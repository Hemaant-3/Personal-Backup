# creating empty list
list1 = []

# asking number of elements to put in list
num = int(input("Enter number of elements in list: "))

# iterating till num to append elements in list
for i in range(num):
   list1.append(int(input()))
    # print maximum element


max_num = 0
for i in list1:
    if(max_num < i):
        max_num = i
print("Largest element is:", max_num)
