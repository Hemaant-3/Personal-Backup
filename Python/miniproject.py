from tkinter import *

from vsu.Python.encrypt import Tops

windows = Tk() #intilaizing windows main frame
 # geometry hxw
windows.geometry("1080x720")
f1 = Frame(windows, width=900, height=900, relief=SUNKEN,)
f1.pack(side=LEFT)
lblmsg = Label(f1, font=('arial', 16, 'bold'), text='hemtrj', anchor='w')
lblmsg.pack(side=RIGHT)

windows.mainloop() #keep alive windows main windows 