# dict = {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}
# x = '5'
# if x in dict.keys():
#     print('Key ='+str(x)+', is present in the dictionary')
# else:
#     print('Key ='+str(x)+', is not present in the dictionary')
l1 = [x for x in range(1, 11)]
l2 = [x for x in range(2, 21) if x % 2 == 0]
l3 = [(x, y) for x in l1 for y in l2 if x*x == y]
print("List of numbers is:", l1)
print(x, "'s table upto 20 is as: ", l2)
print("TypeError: argument of type 'builtin_function_or_method' is not iterable: ", l3)
