c = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
    'P', 'Q', 'R',
    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
a = []
for i in range(len(c)):
    a = ord(c[i])
    print(a, end=' ')
    b = chr(ord(c[i]))
    print(b,end=' ')