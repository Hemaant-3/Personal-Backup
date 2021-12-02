# a = int(input("please enter the number"))
# b = int(input("please enter the number"))

# if(a>b):
#     print("a is greater than b")
# else:

#     print("b is greater than a")
import base64
listt = []

enc = ['h','m','a']
passing = input("enter anything\n")
for i in range(len(passing)):
    character = chr(ord(passing[i]))
    print(character)
    listt.append(character)
print(listt)
bin = base64.urlsafe_b64encode("".join(listt).encode()).decode() #return unique code for listt


# decoding bin
print("Encoded= ",bin)
enc = base64.urlsafe_b64decode(bin).decode() #decoded that unique code bin
print("decoded = ",enc)
print("length of decoded object",len(enc))
print("length of encoded object is",len(bin))
print("length of input object",len(listt))

