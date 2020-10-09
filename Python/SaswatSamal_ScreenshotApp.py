## It is a GUI Project which will take screenshot.

import time
import pyautogui 
import tkinter as tk #Tkinter Module is added for GUI

def Screenshot():
    name = int(round(time.time()*1000)) 
    name = '{}.png'.format(name) 
    # time.sleep(5) 
    img = pyautogui.screenshot(name) 
    img.show() 

#GUI
root = tk.Tk()
frame = tk.Frame(root)
frame.pack()

# Button to take the screenshot
button= tk.Button(   
    frame,
    text = "Take Screenshot!",
    command = Screenshot)

button.pack(side = tk.LEFT)

# Button to Quit the GUI
close = tk.Button(
    frame,
    text = "Quit",
    command = quit)

close.pack(side = tk.LEFT)

root.mainloop() #calling the root loop