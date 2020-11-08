# Python

[TOC]

Table of Contents
=================

* [Python](#python)
* [Table of Contents](#table-of-contents)
  * [Kernkonzepte](#kernkonzepte)
    * [Features](#features)
    * [Prinzipien](#prinzipien)
    * [Modularisierung](#modularisierung)
    * [Hello World](#hello-world)
    * [Basics](#basics)
    * [Objektmodell und Namensräume](#objektmodell-und-namensr%C3%A4ume)
    * [Interpreter und Interoperabilität](#interpreter-und-interoperabilit%C3%A4t)
    * [Objektorientierung](#objektorientierung)
    * [Iterationen](#iterationen)
    * [List](#list)
    * [Tuple](#tuple)
    * [Dictionary](#dictionary)
    * [Set](#set)
  * [Python 3](#python-3)
    * [print](#print)
    * [Strings](#strings)
  * [Python 3\.4](#python-34)
  * [Python 3\.5](#python-35)
  * [Python 3\.9](#python-39)
  * [Bibliotheken](#bibliotheken)
    * [NumPy](#numpy)
    * [SciPy](#scipy)
    * [Matplotlib](#matplotlib)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Kernkonzepte

### Features

Dynamisch (“*duck typing*”), objektorientiert, automatische Speicherbereinigung (garbage collection), Modulimport

### Prinzipien

 Jede Python-Shell liefert durch Eingabe von *import this* die Eckpunkte der Python-Philosophie.

```
import this

The Zen of Python, by Tim Peters
 
Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
Complex is better than complicated.
Flat is better than nested.
Sparse is better than dense.
Readability counts.
Special cases aren't special enough to break the rules.
Although practicality beats purity.
Errors should never pass silently.
Unless explicitly silenced.
In the face of ambiguity, refuse the temptation to guess.
There should be one-- and preferably only one --obvious way to do it.
Although that way may not be obvious at first unless you're Dutch.
Now is better than never.
Although never is often better than *right* now.
If the implementation is hard to explain, it's a bad idea.
If the implementation is easy to explain, it may be a good idea.
Namespaces are one honking great idea -- let's do more of those!
```

### Modularisierung

Bibliotheken/Module können mit dem Schlüsselwort *import* eingebunden werden.

```python
import math

print math.sin(math.pi)
```

Der Namensraum kann auch durch eine import/as-Anweisung festgelegt werden.

```python
import math as mathematik		

print mathematik.sin(mathematik.pi)
```

Falls alle Elemente der Bibliothek im globalen Namensraum zur Verfügung stehen sollen.

```python
from math import *

print sin(pi)
```

Mehrere Module können zu einem Paket zusammengefasst werden. Dies macht z.B. dann Sinn, falls mehrere Module thematisch zusammenpassen. Um ein Paket zu erstellen, muss ein Unterordner im Verzeichnis erzeugt werden. Der Name des Ordners entspricht dem Namen des Pakets. Zusätzlich muss in diesem Ordner eine Programmdatei namens *init.py* existieren. Diese Datei darf leer, muss aber vorhanden sein und enthält Initialisierungscode, der beim Einbinden des Paketes einmalig ausgeführt wird. Auch Pakete werden mit der *import-*Anweisung eingebunden.  

Einzelne Module innerhalb eines Paketes (oder auch ein Paket innerhalb eines Paketes) können durch folgende Anweisung importiert werden:

from pyradiodns.rdns import RadioDNS

In Python gibt es den Paketmanager *pip.* Damit können vorhandene Pakete (z.B. unter <https://pypi.python.org/pypi>) installiert werden.  

pip install <package>

### Hello World

Die einfachste Lösung des 'Hello World" Programms in Python 3.

```python
#!/usr/bin/python

print("Hallo Welt")
```

Oder mit *main* als Einstiegspunkt.  

```python
#!/usr/bin/python

if __name__ == '__main__':
	print("Hallo Welt")
```

Oder strukturierte Programmierung mit einer Funktion.

```python
#!/usr/bin/python

def hallo():
	print("Hallo Welt")
    
if __name__ == '__main__':
	hallo()
```

Oder objektorientiert.

```python
#!/usr/bin/python

class Hallo:
	def __init__(self):
		self.name = 'Hallo'
	
    def giveittome(self):  
		print("Hallo Welt")
 
if __name__ == '__main__':
	myhallo = Hallo()
	myhallo.giveittome()
```

Oder grafisch mit Qt.  

```python
#!/usr/bin/python

```

Wie in den obigen Beispielen schon zu sehen sind Funktionsobjekte durch das *def*- und Klassenobjekte durch das *class*-Statement zu erzeugen. Klassenmethoden sind Funktionen, die als ersten Parameter eine Referenz auf ihre Instanz erhalten.

```python
class MyClass:
	def __init__(self):
		self.value = 1
	
    def multiply(self, parameter1):
		"""documentation string for the method"""
		return self.value * parameter1
```

Besonderheit: Viele Statements in Python erfordern zwingend eine visuelle Einrückung.  

### Basics

**Kommentare**

Einzeilige Kommentare beginnen mit vorangestelltem # Symbol. Kommentarblöcke beginnen mit """ und enden mit """.  Das ist ein sogenannter *doc String*. Er erlaubt eine kurze Dokumentation, die mithilfe von *help(myfunc)* aufgerufen werden kann. Außerdem wird diese Technik in Zusammenhang mit dem Python-Dokumentations-Generator *pydoc* verwendet. 

```python
def myfunc(optional_params):
   """Comment function purpose here"""
   # This is a single-line comment
   print("Hallo")
   
```

**Funktionen, Parameter und Rückgabe**

Funktionen werden mit *def* markiert. Parameter können einfach innerhalb der *def*-Klammerung übergeben werden. Mit dem Schlüsselwort *return* kann eine Rückgabe erfolgen. Wenn nach return kein Ausdruck steht oder falls *return* gänzlich fehlt, liefert die Funktion *None* zurück.

```python
#!/usr/bin/python

def amountOfFuel(spacecraftWeights):
   """calculate fuel needed for each spacecraft and return the sum"""
   totalFuel = 0

   # calculate fuel for each spacecraft
   for number in spacecraftWeights:
      number = math.floor(number/3)-2
      print(number)
      # calculate total fuel
      totalFuel = totalFuel + number; 
      
   return totalFuel;

if __name__ == '__main__':
   print("Hallo")
   
   adventofcode = [114739, 132732, 123925, 146385, 72590]
   totalFuel = amountOfFuel(adventofcode)
        
    # print total fuel
    print("Total fuel needed is ", totalFuel)
```

**Kopien und Referenzen**

Ganz wichtig und anders als in den meisten anderen Programmiersprachen: Die Basisdatentypen wie z.B. *char, float, complex,* ... werden bei einer Zuweisung *a = b* kopiert. Das ist bei komplexeren Datentypen wie z.B. *Listen, Tupels, Dictionaries,* ... nicht mehr der Fall. Hier sind die Variablennamen lediglich Referenzen auf ein Objekt. 

```python
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
```

**Kontrollstrukturen und Schleifenformen**

Wie in vielen anderen Programmiersprachen so gibt es auch in Python die *if*-Abfrage und die *while*-Schleife. Zusätzlich gibt es natürlich auch die for-Schleife in Python. 

```python
#!usr/bin/python

if __name__ == '__main__':
    foo = 42
    if foo == 42:
        print("This is the answer")
    elif foo == 7:
        print("Not really the answer")
    else:
        print("Whatever the answer is")

    zaehler = 0
    summe = 0
    while foo > zaehler:
        summe += zaehler
        zaehler = zaehler + 1

    print(summe)

    for i in range(1, 11, 2):
        print(i)

```

### Objektmodell und Namensräume

Python-Programmtexte sind grundsätzlich in Module unterteilt, und jedes hat seinen eigenen Namensraum. Alle in ihm definierten Funktionen sowie Klassen können auf den modulspezifischen globalen Namensraum zugreifen.  

Pythons Funktionen sind immer generisch (da Python eine dynamisch deklarierte Sprache ist) und haben zur Laufzeit vollen Zugriff auf die Meta-Informationen.  

Python verfügt über ein strenges Typsystem. Ob Namen in Modulen, Methoden in Klassen, Attribute in Klasseninstanzen oder Operationen zwischen Objekten erlaubt sind, entscheidet Python immer erst zur Laufzeit eines Programms (dynamische Programmiersprache).  

### Interpreter und Interoperabilität

Die Python-Hauptimplementierung ist in C geschrieben.  

Es gibt viele Projekte, die die Interoperabilität mit anderen Sprachen sicherstellen. Verwiesen sei hier nur kurz auf IronPython (Python-Implementierung für C#) und Jython (Python-Implementierung für die Java Virtual Machine).

Dadurch lässt sich Python auch in Eclipse, Visual Studio und andere populären IDEs als Sprache „erster Klasse“ integrieren.  

### Objektorientierung

Wie in eigentlich allen objektorientierten Sprachen gibt es auch in Python entsprechende Schlüsselwörter und generierte Methoden für Konstruktoren und Destruktoren.

```python
class meineKlasse(Basisklasse):
	def __init__(self, args):
    	pass
    
    def __del__(self):
        pass
    
    def funktionsname(self, args):
        pass
```

Vererbung ist möglich (siehe oben - Basisklasse). Falls keine Basisklasse angegeben ist, erbt die Klasse nichts. *init* ist der Konstruktor und *del* der Destruktor. Python bietet dir eine Garbage Collection. Dadurch ist ein eigener Destruktor quasi nie notwendig.

Funktionen bekommen als ersten Parameter immer ein Referenz auf das Objekt, von dem sie aufgerufen wird. 

```python
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

```

### Iterationen

Iterationen werden (wie in vielen anderen Sprachen auch) mit dem Schlüsselwort *for*  implementiert. Range-basierte for-Schleifen werden unterstützt.  

```python
#!/usr/bin/python
 
if __name__ == '__main__':
    for item in ["a", "b", "c"]:
        print(item)

    for i in range(4):     # 0 to 3
        print(i)

    for j in range(4, 8):  # 4 to 7
        print(j)

    for k in range(31,-1,-1):	# 31 to 0 step -1
        print(k)

    ingredients = {'spam': 1, 'egg': 2, 'ham': 3}
    for key, val in ingredients.items():
        print(key)
        
#>a
#>b
#>c
#>0
#>1
#>2
#>3
#>4
#>5
#>6
#>7
#>31
#>30
#>29
#........
#>2
#>1
#>0
#>spam
#>egg
#>ham
```

### List

Python bringt vier effiziente (eingebaute) Datenstrukturen mit: Listen, Tuples, Dictionaries und Sets mit.  

Listen sind ähnlich den Arrays in anderen Sprachen. Listen sind veränderlich (*mutable*).

```python
#!/usr/bin/python
 
if __name__ == '__main__':
    mylist = []
    mylist.append(10)
    mylist.append(30)

	 odds = [1, 3, 5, 7, 9, 11, 13]
    words = ['hello', 'world']
    car = ['Toyota', 'Civic', 100, 2452345]
    literalsLiterals = [ [1, 2, 3], ['a', 'b', 'c'], ['first', 'second', 'third'] ]

    # Suche alle Vokale  
    vowels = ['a', 'e', 'i', 'o', 'u']
    word = 'centipede'
    shrinked = []

    for letter in word:
        if letter in vowels:
            shrinked.append(letter)

    print(mylist)

    print(odds)
	
    print(words)

    print(car)

    print(literalsLiterals)

    print(shrinked)

    # negative Indizes
    print(vowels[-1])
```


### Tuple

Python bringt vier effiziente (eingebaute) Datenstrukturen mit: Listen, Tuples, Dictionaries und Sets mit.  

Tuples sind ähnlich den Listen. Nur sind sie nicht veränderlich (*immutable*). Man kann sich Tuples als konstante Liste vorstellen.  

```python
#!/usr/bin/python

if __name__ == '__main__':
    # define empty tuple
    t = tuple()

    # assign some data
    t = (1, 2, 3)
    print(t)

    # tuples are surrounded by parenthesis
    vowels2 = ( 'a', 'e', 'i', 'o', 'u' )
    print(type(vowels2))

    # take care when using the parenthesis
    # t is a string
    t = ('Python')
    print(type(t))

    # t2 is a tuple
    t2 = ('Python',)
    print(type(t2))
    
```

### Dictionary

Python bringt vier effiziente (eingebaute) Datenstrukturen mit: Listen, Tuples, Dictionaries und Sets mit.  

Ein *Dictionary* in Python ist eine Art *key-value map*. *Dictionaries* sind unsortiert und veränderbar (*immutable*).  

```python
#!/usr/bin/python

if __name__ == '__main__':
    #empty dictionary
    person = {}

    #define dictionary Per Anhalter durch die Galaxis
    person = { 'name': 'Arthur Dent', 'gender': 'male', 'occupation': 'sandwich maker',                  'home': 'earth' }
    
    print(person)

    #create additional dictionary containing all person (dictionary inside dictionary)
    people = {}

    people['Arthur'] = person
    people['Ford'] = { 'name': 'Ford Prefect', 'gender': 'male', 'occupation': 	                               'researcher', 'home': 'betelgeuse' }

    print(people)
  

# OUTPUT
""" {'name': 'Arthur Dent', 'gender': 'male', 'occupation': 'sandwich maker', 'home': 'earth'}
{'Arthur': {'name': 'Arthur Dent', 'gender': 'male', 'occupation': 'sandwich maker', 'home': 'earth'}, 'Ford': {'name': 'Ford Prefect', 'gender': 'male', 'occupation': 'researcher', 'home': 'betelgeuse'}} """
```

### Set

Python bringt vier effiziente (eingebaute) Datenstrukturen mit: Listen, Tuples, Dictionaries und Sets mit.  

Ein Set ist eine Ansammlung unsortierter Objekte. Wobei ein Objekt nie mehrfach vorkommenn darf.  

## Python 3

Das Wichtigste vorweg: Python 3 ist inkompatibel zu den Python 2.x Entwicklungslinien. Die wichtigsten Neurungen in Python 3 sind:  

-  	Strings (*str*) sind jetzt immer Unicode-basiert, *bytes* für Byte-Ketten
-  	*exec* und *print* sind jetzt Funktionen statt syntaktische Statements
-  	neue Syntax für Exception-Handling
-  	Viele iterierende Methoden von Containern liefern nun *views*, anstatt wie vorher ganze Listen zu erzeugen
-  	Es gibt nur noch einen unifizierten Zahlentyp (*int*)

### print

print ist mit Python 3.x eine Funktion. 

```python
#!/usr/bin/python

class Hallo:
   def __init__(self):
      self.name = 'Hallo'

   def giveittome(self): 
      print("Hallo Welt")
   
if __name__ == '__main__':
   myhallo = Hallo()
   myhallo.giveittome()

   # Zeilenumbruch
   print()

   # kein Leerzeichen als Separator 
   print(1, 2, 3, 4, 5, sep = "") 
```

### Strings

Strings bestehen in Python 3.x automatisch aus Unicode-Zeichen. Details zu Unicode in Python können in https://docs.python.org/3/howto/unicode.html nachgelesen werden.

Der Datentyp String gehört in Python zu den Basisdatentypen oder Built-in Types.

```python
#!usr/bin/python

if __name__ == '__main__':
   a = "Hallo"
   b = "Welt"

   c = a + ' ' + b

   print(c)
```

## Python 3.4

Neue Features in Python 3.4. umfassen:  

-  	Aufzählungstypen
-  	Asynchrone Werkzeuge
-  	Bootstrapping-Mechanismus für Paketmanager pip

**Aufzählungstypen**

Um Aufzählungstypen zu benutzen, muss der Typ *Enum* aus dem Modul *enum* importiert werden. Die Benutzung erfolgt dann mithilfe der Klassensyntax.  

\>> from enum import Enum

 \>> class Color(Enum)

 …	red = 1

 …	blue = 2

 …	green = 3

 \>> print(Color.red)

 Color.red

 \>> type(Color.red)

 <Enum ‘Color’>

 \>> isinstance(Color.green, Color)

 True

 **Asynchrone Werkzeuge**

 Für asynchrones I/O gibt es jetzt ein neues Modul *asyncio.* Es ist vor allem für den Netzwerkeinsatz gedacht. Es bietet die Infrastruktur für z.B.  

-  	Single-Threaded Applikationen nebenläufig ablaufen zu lassen mit Hilfe von Koroutinen
-  	Multiplexing I/O Zugriff über Sockets und ähnliche Resourcen
-  	Das Laufenlassen von Netzwerk-Clients und Servers
-  	u.a.  	

**Bootstrapping Mechanismus für pip**

Es gibt jetzt ein neues Modul *ensurepip,* mit welchem das Bootstrapping der *pip* Installation in laufende Python Installationen möglich wird. *pip* ist ein Werkzeug, um Python-Pakete zu installieren und zu verwalten.

**Modul zur besseren Darstellung und Manipulierung von Datei- und Verzeichnispfaden (*****pathlib)***

Das Modul *pathlib* bietet Klassen an, um auf verschiedenen Betriebssystemen Operationen auf Datei- und Verzeichnispfaden durchzuführen.

**Modul für statistische Funktionen (*****statistics*****)**

Das Modul *statistics* bietet Funktionen für mathematische Statistik-Funktionalitäten  

-  	Mittelwert
-  	Median
-  	Standardabweichung
-  	usw.

**Debugging-Werkzeug für die Ablaufverfolgung von Speicherblöcken (tracemalloc)**

Das Modul *tracemalloc* kann zur Ablaufverfolgung von Speicherblöcken, allokiert aus Python, benutzt werden.  

-  	Traceback von der Stelle, an der ein Objekt allokiert wurde
-  	Statistik von allokierten Blöcken sortiert nach Dateinamen und Zeilennummer: Gesamtgröße, Anzahl und durchschnittliche Größe der allokierten Blöcke
-  	Berechnung des Unterschiedes von zwei ‚Snapshots‘, um Speicherlecks zu entdecken



## Python 3.5

## Python 3.9

**Dictionaries verbinden**

Es gibt nun einen eleganten Weg, um zwei Dictionaries miteinander zu verbinden. 

```python
#!usr/bin/python

if __name__ == '__main__':
    
    ingredients = {'spam': 1, 'egg': 2, 'ham': 3}
    print(ingredients)

    junk = {'egg': 'brown', 'e405': 'lecker'}
    print(junk)

    # new in python 3.9 - combine the two dictionaries
    recipe = ingredients | junk
    print(recipe)

```

Doppelte Elemente werden entfernt und das zuletzt deklarierte übernommen.

**Flexible Funktionen und variable Anmerkungen**

Erweiterung der Type Annotations aus Python 3.5. Der Typ *annotated* wird neu hinzugefügt, um bestehende Typen mit kontextspezifischen Metadaten auszustatten.

## Bibliotheken

### NumPy

### SciPy

### Matplotlib

## Literatur  

[1] Python – Das umfassende Handbuch, <http://openbook.galileocomputing.de/python/> (abgerufen 	am 18. März 2014)

[2] Learning Python, 5th edition, Mark Lutz, O’Reilly

[3] Programming Python, 4th edition, Mark Lutz, O’Reilly

[4] Python: Programmiersprache für alle Fälle, Holger Krekel, aus: iX Special, Programmieren heute, 	1/2010

[5] Neues in Python 3.4, https://www.heise.de/developer/artikel/Neues-in-Python-3-4-2174477.html 	(abgerufen am 11. März 2019)

[6] http://docs.python.org/3.4/whatsnew/3.4.html (abgerufen am 19. März 2014)

[7] https://www.heise.de/developer/meldung/Programmiersprache-Python-3-5-erschienen-2811997.html (abgerufen am 22. Oktober 2018)

[8] Python - Universalwerkzeug für einfache und komplexe Aufgaben, Frank Müller, iX 11/2016

[9] Parallele Programmierung mit Python, Teil 1: Multitasking, Gerhard Völkl, iX 11/2016

[10] Unicode HowTo, https://docs.python.org/3/howto/unicode.html, abgerufen am 22. Mai 2019

[11] Head First Python, Second Edition, Paul Barry, 2017

[12] Python 3.9 startet in die Beta-Phase, https://www.heise.de/news/Python-3-9-startet-in-die-Beta-Phase-4724615.html, abgerufen am 20.05.2020



  
