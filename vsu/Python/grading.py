Maths = int(input("enter Maths number\n"))
Physics = int(input("enter Maths number\n"))
Chem = int(input("enter chemistery Number\n"))

a = int(Maths+Physics+Chem)
if(40<a<55):
    print("Grade D")
elif(55<a<59):
    print("Grade C")
elif(59<a<79):
    print("Grade B")
elif(80<a<100):
    print("Grade A")
elif(a>100):
    print("invalid Grade")
else:
    print("Fail")