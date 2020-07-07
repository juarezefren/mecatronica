import mysql.connector

cnn = mysql.connector.connect(host="localhost", user="root", 
passwd="admin", database="world")

cur = cnn.cursor()
cur.execute("SELECT * FROM city WHERE CountryCode = 'AGO' ")
datos = cur.fetchall()

for fila in datos:
    print(fila)


#print(cnn)