#!usr/bin/python

# Meine Klasse
class gibMir:
    # Konstruktor
    def __init__(self, a):
        self.abschnitt = a

    # Klassenmethode
    def calc(self, x):
        return (self.abschnitt + x)

if __name__ == '__main__':
    print("Hallo")

    # Instanziiere meine Klasse
    dummyClass = gibMir(40)

    # Rufe Klassenmethode auf
    ergebnis = dummyClass.calc(2)

    # fini
    print(ergebnis)



