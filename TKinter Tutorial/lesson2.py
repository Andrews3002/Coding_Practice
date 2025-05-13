#How Grid() works
from tkinter import *

root = Tk()

#creating a label widget
myLabel = Label(root, text="Hello World!")
myLabe2 = Label(root, text="My name is Alex")

#putting the created label onto the root screen
myLabel.grid(row=0,column=0)
myLabe2.grid(row=1,column=5)

# since python is object oriented we can do this instead
# myLabel = Label(root, text="Hello World!").grid(row=0,column=0)
# myLabe2 = Label(root, text="My name is Alex").grid(row=1,column=5)

root.mainloop()