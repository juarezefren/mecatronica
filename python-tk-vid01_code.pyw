from tkinter import *

def miFuncion():
    print("Este mensaje es del boton")


ventana = Tk()
ventana.title("Hola Mundo")
ventana.geometry("400x200")

lbl =Label(ventana,text="Este es un label")
lbl.config(bg = "gray")
lbl.pack()

btn = Button(ventana, text="Presionar", command = miFuncion)
#btn.config(fg="red", bg = "blue")
btn["fg"]="red"
btn["bg"]="yellow"
btn.pack()


ventana.mainloop()