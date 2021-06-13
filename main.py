from tkinter import *

from tkinter import ttk

ventana = Tk()
ventana.title('Ejemplo de TreeView')
ventana.geometry('400x300')
ventana['bg']='#fb0'

tv = ttk.Treeview(ventana, columns=("col1","col2"))

tv.column("#0",width=80)
tv.column("col1",width=80, anchor=CENTER)
tv.column("col2",width=80, anchor=CENTER)

tv.heading("#0", text="Producto", anchor=CENTER)
tv.heading("col1", text="Precio", anchor=CENTER)
tv.heading("col2", text="Cantidad", anchor=CENTER)

tv.insert("",END,text="Azucar", values=("28","2"))
tv.insert("",END,text="Refresco", values=("16","3"))
tv.insert("",END,text="AQceite", values=("34","1"))







'''
item1 = tv.insert("",END,text="Dias",open=1 )
tv.insert(item1,END,text="Lunes")
tv.insert(item1,END,text="Martes")
tv.insert(item1,END,text="Miercoles")
tv.insert(item1,END,text="Jueves")
item2 = tv.insert("",END,text="Colores")
tv.insert(item2,END,text="Rojo")
item3 = tv.insert(item2,END,text="Azul")
tv.insert(item2,END,text="Amarillo")
'''

#print(tv.item(item1))
#print(tv.get_children(item2))

#tv.delete(item2)

'''
for x in tv.get_children():
    print(x)
    print(tv.get_children(x))
'''
    


tv.pack()



ventana.mainloop()