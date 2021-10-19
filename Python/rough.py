import base64
# def(a):

#    a = input("enter any chr\n")
#    enc = []
#    print(ord(a))
#    print(chr(ord(a)))
#    enc_c = chr(ord(a))
#    enc.append(enc_c)

#      return base64.urlsafe_b64encode("".join(enc).encode()).decode()

def encode(key, clear):
  enc = []
  for i in range(len(clear)):
        key_c = key[i % len(key)]
        enc_c = chr((ord(clear[i]) +
                     ord(key_c))%256)

        enc.append(enc_c)
        print(ord(enc[i]),end=" ")
        # print(enc[i],end=" ")
key = input("enter key\n")
clear = input("message\n")
encode(key, clear)

  