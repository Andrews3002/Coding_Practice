#How Buttons() works
from tkinter import *

root = Tk()

def myClick():
    myLabel = Label(root, text="Look! I clicked a Button!!")
    myLabel.pack()

# myButton = Button(root, text="CLick Me!", state=DISABLE) use state to disable the button
#padx to add padding in the x axis as in left and right
#pady to add padding in the y axis as in top and bottom
#command to add a function that the button would execute when clicked
#fg to change foreground color or in this case the text color
# bg to change the background color

myButton = Button(root, text="CLick Me!", padx=50, pady=50, command=myClick, fg="blue", bg="red")

myButton.pack()

root.mainloop()