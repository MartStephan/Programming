#!usr/bin/python

if __name__ == '__main__':
    # Basisdatentypen werden bei einer Zuweisung kopiert
    a = 42 
    b = a
    b = 7

    print(a)
    print(b)

    # Komplexere Datentypen arbeiten mit Referenzen
    mylist = [3, 'Erfurt', 'Zwerg']
    myneuelist = mylist
    # Änderung betriff auch mylist, da Zuweisung eine Referenz hinterlässt
    myneuelist[1] = 3.14

    print(mylist)
