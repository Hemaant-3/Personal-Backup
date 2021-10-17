# n = input("enter any number")
# for i in range(n):
import base64
# n = ["A","B","c"]
n = input("enter anything\n")
a = [1]
#to encode
for i in range(len(n)):
    # print(ord(n[i]))
    a[i] = ord(n[i])
    a.append(a[i])
    print(a[i])

# decode 
for i in range(len(n)):
    print(chr(a[i]),end='')
    