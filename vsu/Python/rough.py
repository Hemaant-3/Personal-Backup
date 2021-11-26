import base64
st = []
str = input("enter the character")
key = input("input the key")
for i in range(len(str)):
   key = key[i%len(key)]
   code = chr(ord(str[i])+ord(key))
   st.append(code)
print(st)
bin = base64.urlsafe_b64.encode("".join(st).encode())
print(bin)
   