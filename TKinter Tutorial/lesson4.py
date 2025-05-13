#How Input Fields works
from tkinter import *

root = Tk()

# Create and add an input field into the root window
e = Entry(root)
e.pack()

#add default text inside of the textbox
e.insert(0,"Enter Your Name: ")

#get() this function gets the input entered into the input field

def myClick():
    hello = "Hello " + e.get()
    myLabel = Label(root, text=hello)
    myLabel.pack()

myButton = Button(root, text="Enter Your Name", command=myClick)

myButton.pack()

root.mainloop()