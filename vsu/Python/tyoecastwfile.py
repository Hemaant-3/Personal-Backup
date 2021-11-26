tuple = (12,13,54,65,55)
dict = {'a':99, 'b':55,'c':90}
#typecast in list
t1  = list(tuple)
print(len(t1))
t1.append(dict)
print(t1)
#typecast in tuple
t1 = tuple(t1)
print(t1)

