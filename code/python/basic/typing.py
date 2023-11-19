#!usr/bin/python

if __name__ == '__main__':
   print("hallo")

   a_number = 123
   print(a_number)

   # geht nicht - TypeError: unsupported operand type(s) for +=: 'int' and 'str'
   #a_number += "4"

   # ABER: das geht - die erneute Zuweisung zur Variablen a_number setzt einfach die Verknüpfung 
   # des Labels a_number von einem Objekt zum nächsten
   a_number = "1234"
   print(a_number)
