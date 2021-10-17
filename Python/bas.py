import base64
# a = ['A', 'B', 'C']
a = "HEmant"
b = input("enter nZumber")
for i in range(len(a)):
    b = b[i % len(b)]
    print(ord(a[i]))
    enc_c = chr((ord(a[i]) +
                     ord(b)) % 256)
print(enc_c)