import base64
enc = "Apple"


hem = base64.urlsafe_b64encode(enc.encode()).decode()

print(hem)

dec = base64.urlsafe_b64decode(hem).decode()

print(dec)