# a = 20
# assert a<=10, "Hemant"



# class Human:
#     def __init__(self,n,o):
#         self.occupation = o
#         self.name = n
#         # print(self.name,self.occupation)
#     def speak(self):
#         print("HEllo",self.name)
#     def do(self):
#         print(self.name,'is a',self.occupation)

# class Student(Human):
#     def fill(ob,name):
#         ob.name = name
#         print("Name is",ob.name)
# h = Student('Hemant')
# h.do()
# h.speak()
# # m = Human("monu","Engineer")
from itertools import count
from traceback import print_tb


# def counter(c):
#     if c<=0:
#         return c
#     else:
#         return c+counter(c-1)

# print(counter(15))
# Tower of Hanoi
def Toh(number,start,aux,end):
    if number == 1:
        print("Moving disc {} to {} ".format(start,end))
        return
    Toh(number-1,start,end,aux)
    print("Moving disk no.{} from {} to {}".format(number,start,end))
    Toh(number-1,aux,start,end)

disc = 3
Toh(disc,"start","Mid","end")
