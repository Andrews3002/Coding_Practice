#How Pack() works
from tkinter import *

root = Tk()

#creating a label widget
myLabel = Label(root, text="Hello World!")
#putting the created label onto the root screen
myLabel.pack()


root.mainloop()