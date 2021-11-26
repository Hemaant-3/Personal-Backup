from tkinter import *
hem_root = Tk()
# width , height
hem_root.geometry("523x321")
#there is an class in tkinter photoimages
photo = PhotoImage(file = "1.png")
mon = Label(image=photo)
hem = Label(text="Hemant")
hem.pack()
mon.pack()
hem_root.mainloop()