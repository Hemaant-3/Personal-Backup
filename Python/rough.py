import base64
def(a):

   a = input("enter any chr\n")
   enc = []
   print(ord(a))
   print(chr(ord(a)))
   enc_c = chr(ord(a))
   enc.append(enc_c)

     return base64.urlsafe_b64encode("".join(enc).encode()).decode()