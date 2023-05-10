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
    * [Datentypen](#datentypen)
    * [Slicing](#slicing)
    * [Objektmodell und Namensräume](#objektmodell-und-namensr%C3%A4ume)
    * [Interpreter und Interoperabilität](#interpreter-und-interoperabilit%C3%A4t)
    * [Objektorientierung](#objektorientierung)
    * [Iterationen](#iterationen)
    * [List](#list)
    * [Tuple](#tuple)
    * [Dictionary](#dictionary)
    * [Set](#set)
    * [Mathematische Operatoren](#mathematische-operatoren)
    * [Wertebereiche](#wertebereiche)
    * [Further built\-in functions](#further-built-in-functions)
  * [Python 3](#python-3)
  * [Python 3\.4](#python-34)
  * [Python 3\.5](#python-35)
  * [Python 3\.6](#python-36)
  * [Python 3\.9](#python-39)
  * [Bibliotheken](#bibliotheken)
    * [TKinter](#tkinter)
    * [Python4Delphi](#python4delphi)
    * [NumPy](#numpy)
    * [SciPy](#scipy)
    * [Matplotlib](#matplotlib)
    * [TensorFlow](#tensorflow)
    * [scikit-learn](#scikit-learn)
    * [SymPy](#sympy)
    * [Chainer](#chainer)
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

**Variablen und Typen**

Die Definition von Variablen kann ohne Angabe von Typen erfolgen. Variablen sind natürlich trotzdem typisiert und können erfragt werden.

```python
>>>
>>> age = 42
>>> name = "Martin"
>>> hobbies = ["python", "cycling"]
>>>
>>> type(age)
<class 'int'>
>>> type(name)
<class 'str'>
>>> type(hobbies)
<class 'list'>
>>>
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

### Datentypen

Wie in anderen Sprachen gibt es auch in Python Basis Datentypen für Integer, Floating-Point, Komplexe Zahlen und Strings.

| int  | long            | float    | complex |
| ---- | --------------- | -------- | ------- |
| 10   | 51924361L       | 0.0      | 3.14j   |
| -185 | 0xBABEAFFEL     | 15.20    | .876j   |
| 0x69 | -4721885298529L | -21.9    | 4.5e-7j |
| 0x10 |                 | 33.3+e10 | 2+3j    |

| str              |
| ---------------- |
| "I am a string." |
| 'I am too.'      |
|                  |

Wichtig zu wissen ist, dass es in Python nur einen einzigen *int*-Typ, der Zahlen mit beliebiger Genauigkeit speichern kann. Die Funktion *sys.getsizeof()* hilft Ihnen, herauszufinden, wie viele Bytes an Speicher ihre Python-Objekte verbrauchen. Ein *int* in Python besteht aber mindestens aus 28 Byte und kann um je ein Bit anwachsen. 

**Strings**

Strings können mit einzelnen oder auch doppelten Anführungszeichen definiert werden 

```python
>>>
>>> info = "I'm scared"
>>> help = 'Please "HELP"'
>>> print(info, help)
I'm scared Please "HELP"
>>>
```

Es gibt auch sogenannte Raw Strings, die verwendet werden können, falls man die textuellen Bestandteile so nutzen möchte wie spezifiziert, 

```python
>>>
>>> dir_path = 'c:\\transer\this\new'
>>> print(dir_path)
c:\transer      his
ew
>>> dir_path = r'c:\\transer\this\new'
>>> print(dir_path)
c:\\transer\this\new
>>>
```

### Slicing 

Python besitzt mit dem Slicing eine mächtige Funktion, um auf Bestandteile eines Textes zuzugreifen, Syntax lautet str[start:end] bzw. str[start:end : step].

```python
>>>
>>> print(text[5:10])
piece
>>>
>>> text = "1a2b3c4d5e6f7g"
>>> second = text[::2]
>>> print(second)
1234567
>>>
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

Iterationen werden (wie in vielen anderen Sprachen auch) mit dem Schlüsselwort *for* implementiert. *Range*-basierte for-Schleifen werden unterstützt.  

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

Für indizierte Zugriffe gibt es in Python reichlich syntactic sugar. 

```python
>>>
>>> for ch in name:
...     print(ch)
...
T
I
M
>>> for i, ch in enumerate(name):
...     print(i, ch)
...
0 T
1 I
2 M
>>>
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
    
    # Listen kann man addieren
    odds += [15, 17, 19]
    
    # praktische built-in Funktionen
    min(odds)
    max(odds)
    sum(odds)
    
    # Initialisierung mit Multiplikation
    zeros = [0] * 10
    
```

**Slicing** 

Bei Listen kann man Slicing anwenden. Löschen kann man auch mit der Slicing-Syntax.

```python
>>>
>>> odds = [1, 3, 5, 7, 9, 11, 13]
>>> odds[2:4]
[5, 7]
>>>
>>> odds[2:4] = []
>>> odds
[1, 3, 9, 11, 13]
>>>
```

**List Comprehensions**

Mit List Comprehensions kann man in Python kurz und bündig Listen zu erstellen. Als List Comprehension bezeichnet man einen Ausdruck, der basierend auf einer Sequenz von Werten sowie einer Berechnungsvorschrift seine neue Ergebnisliste erzeugt. Die Syntax erfolgt mit eckigen Klammern: 

```python
[ expression for item in list if conditional ]
```

Ein kleines Beispiel soll das demonstrieren.

```python
#!usr/bin/python

def square_list_loops():
    # You can either use loops
    squares = []

    for x in range(10):
        squares.append(x**2)
 
    print(squares)

def square_list_comprehensions():
    # Or you can use list comprehensions to get the same result:
    squares = [x**2 for x in range(10)]

    print(squares)

if __name__ == '__main__':
    """Example for List Comprehensions"""
    
    # simple list using list comprehension
    x: int = [i for i in range(10)]
    print(x)

    # list of square numbers using loop
    square_list_loops()

    # list of square numbers using comprehensions
    square_list_comprehensions()
    
#> [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
#> [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
#> [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]    
```

**Sortierung und Reihenfolgen**

Für die Sortierung von Listen gibt es ebenfalls built-in Funktionen, die wir nutzen können.

```python
>>>
>>> numbers = [1, 100, 49, 33, 42, 2245, 2, 1]
>>> numbers.sort()
>>> numbers
[1, 1, 2, 33, 42, 49, 100, 2245]
>>>
>>> numbers.reverse()
>>> numbers
[2245, 100, 49, 42, 33, 2, 1, 1]
>>>
>>>
>>> names = ['Tim', 'Peter', 'Mike', 'Sophie']
>>> names
['Tim', 'Peter', 'Mike', 'Sophie']
>>> names.sort()
>>> names
['Mike', 'Peter', 'Sophie', 'Tim']
>>>
```

### Tuple

Python bringt vier effiziente (eingebaute) Datenstrukturen mit: Listen, Tuples, Dictionaries und Sets mit.  

Tuples sind ähnlich den Listen. Nur sind sie nicht veränderlich (*immutable*). Man kann sich Tuples als konstante Liste vorstellen.  

```python
#!/usr/bin/python

def def multi_return():
    # returning multiple values using tuple
    return (404, "Not Found", ["Info1", "Info2"])
    
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
    
    # multi-return tuple
    multi_return()
    
    
```

**Tuple (Un-)Packing**

Beim Tuple (Un-)Packing kann man auf der linken Seite einer Zuweisung einfach mehrere Variablen notieren, denen dann die Werte des  Tupels auf der rechten Seite positionsbasiert zugewiesen werden. 

```python
>>>
>>> info = (42.195, "km", "Marathon")
>>> info
(42.195, 'km', 'Marathon')
>>> distanz, einheit, begriff = info
>>> distanz
42.195
>>> einheit
'km'
>>> begriff
'Marathon'
>>>
```

**Named Tuples** 

Named Tuples bieten sowohl positions- als auch namensbasierte Zugriffe. Allerdings muss man Named Tuple per Import extern einbinden.

```python
>>>
>>> from collections import namedtuple
>>> Person = ('Person', 'name age gender')
>>> martin = Person('Martin', 18, 'male')
>>> martin
Person(name='Martin', age=18, gender='male')
>>>
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
    person = { 'name': 'Arthur Dent', 'gender': 'male', 'occupation': 'sandwich maker', 'home': 'earth' }
    
    print(person)

    #create additional dictionary containing all person (dictionary inside dictionary)
    people = {}

    people['Arthur'] = person
    people['Ford'] = { 'name': 'Ford Prefect', 'gender': 'male', 'occupation': 'researcher', 'home': 'betelgeuse' }

    print(people)
  

# OUTPUT
""" {'name': 'Arthur Dent', 'gender': 'male', 'occupation': 'sandwich maker', 'home': 'earth'}
{'Arthur': {'name': 'Arthur Dent', 'gender': 'male', 'occupation': 'sandwich maker', 'home': 'earth'}, 'Ford': {'name': 'Ford Prefect', 'gender': 'male', 'occupation': 'researcher', 'home': 'betelgeuse'}} """
```

**Set und Dictionary Comprehensions**

```python
>>>
>>> odds = {i for  i in range(10) if i % 2 !=0}
>>> odds
{1, 3, 5, 7, 9}
>>>
```

### Set

Python bringt vier effiziente (eingebaute) Datenstrukturen mit: *Listen*, *Tuples*, *Dictionaries* und *Sets* mit.  

Ein *Set* ist eine Ansammlung unsortierter Objekte. Wobei ein Objekt nie mehrfach vorkommenn darf.  

### zip( ) 

In Python gibt es eine Built-In Funktion zip( ), die es erlaubt, zwei oder mehr Datenbestände zu einer Einheit zu verbinden; z.B. zwei Listen. 

```python
>>>
>>> languages = ["french", "italian", "deutsch", "english"]
>>> know = [True, False, True, True]
>>> print(list(zip(languages, know)))
[('french', True), ('italian', False), ('deutsch', True), ('english', True)]
>>>
```

### Mathematische Operatoren

Gegenüber anderen Sprachen bringt Python einige Besonderheiten bei mathematischen Operatoren mit sich, Die Ganzzahldivision ohne Rest mit // und die Berechnung der Potenz mit **.

```python
>>> thousand = 1000
>>> thousand // 42
23
>>>
>>> thousand / 42
23.80952380952381
>>>
>>> thousand ** 2
1000000
>>> thousand ** 3
1000000000
>>>
```

Nützliche mathematische Funktionen findet man im Modul *math*.

### Wertebereiche

Mit range(startIndex, endIndex) lassen sich Wertebereiche generieren. 

```python
>>>
>>> range(2,8)
range(2, 8)
>>> list(range(2,8))
[2, 3, 4, 5, 6, 7]
>>> for i in range(3):
...     print(i)
...
0
1
2
>>>
```

### Further built-in functions

**range**

Die *range*-Funktion kennt man natürlich aufgrund der *range-based for-loops*. Tatsächlich ist *range* eine generische built-in Funktion in Python. *Range* liefert eine Sequenz von Zahlen. Diese Sequenz beginnt standardmäßig bei 0 und erhöht sich standardmäßig um 1. Der Aufruf ist *range(begin, end, step)*. Wobei *begin* inklusive ist, aber *end* exklusive.

```python
#!usr/bin/python

if __name__ == '__main__':
    """Example for Python built-in functions"""
    
    # range returns a sequence of numbers, from 1 to 10
    odds = filter(lambda i: (i % 2) == 1 , range(1, 10))

    for x in odds:
        print(x)
```

**filter**

Die *filter*-Funktion liefert einen Iterator auf Elemente, wobei die Elemente zuvor via einer Funktion gefiltert werden.

```python
#!usr/bin/python

if __name__ == '__main__':
    """Example for Python built-in functions"""
    
    # filter returns elements that have been filtered by a function beforehand
    odds = filter(lambda i: (i % 2) == 1 , range(1, 10))

    for x in odds:
        print(x)
```

**lambda**

Auch *Lambdas* sind in Python built-in. Verwende das *Lambda*-Pattern, um Funktionen an Ort und Stelle zu definieren.

```python
#!usr/bin/python

if __name__ == '__main__':
    """Example for Python built-in functions"""
    
    # lambda is an anonymous function inside a filter function
    odds = filter(lambda i: (i % 2) == 1 , range(1, 10))

    for x in odds:
        print(x)
```

**map**

Die *map*-Funktion gibt eine Liste zurück, indem zuvor eine Funktion auf jedes Element einer Liste angewendet wird - *map(func, seq)*.

```python
#!usr/bin/python

def get_length(item):
    return len(item)

if __name__ == '__main__':
    """Example for Python built-in functions"""
    
    # map - calculate length of each item in the sequence 
    lengths = map(get_length, ('wake', 'the', 'sleeping', 'dragon'))

    for y in lengths: 
        print(y)
       
#> 4
#> 3
#> 8
#> 6
```

**Name Mangling**

Wenn Sie den Namen einer Methode oder Instanzvariablen in einer Klasse mit zwei führenden Unterstrichen beginnen, wird Python ihren Namen "durch die Mangel drehen" (name mangling), d.h. ihren Implementierungsnamen mit einem Salt versehen, damit er nicht mehr so einfach durch andere Klassen entdeckt werden kann. Siehe auch [15].

## Python 3

Das Wichtigste vorweg: Python 3 ist inkompatibel zu den Python 2.x Entwicklungslinien. Die wichtigsten Neurungen in Python 3 sind:  

-  	Strings (*str*) sind jetzt immer Unicode-basiert, *bytes* für Byte-Ketten
-  	*exec* und *print* sind jetzt Funktionen statt syntaktische Statements
-  	neue Syntax für Exception-Handling
-  	Viele iterierende Methoden von Containern liefern nun *views*, anstatt wie vorher ganze Listen zu erzeugen
-  	Es gibt nur noch einen unifizierten Zahlentyp (*int*)

**print**

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

**Strings**

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

**String Formatierung**

In Python 2.x vewendete man den %-Operator, um Variablen in eine Zeichenkette einzufügen. Ab Version 3 gibt es die Methode *format*.  

```python
#!/usr/bin/python

if __name__ == '__main__':
   var = "boss"
   out_v2 = "hello %s" %(var)
   out_v3 = "hello {0}".format(var)

   print(out_v2)
   print(out_v3)

#> hello boss
#> hello boss
```

**Anderes**

Aus der Funktion *raw_input()* in Python 2.x wurde nun einfach *input()*.

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

**Module**

| Modul      | Beschreibung                                                 |
| ---------- | ------------------------------------------------------------ |
| pathlib    | Das Modul *pathlib* bietet Klassen an, um auf verschiedenen Betriebssystemen Operationen auf Datei- und Verzeichnispfaden durchzuführen. |
| statistics | Das Modul *statistics* bietet Funktionen für mathematische Statistik-Funktionalitäten, z.B. Mittelwert, Median, Standardabweichung, usw. |

**Debugging-Werkzeug für die Ablaufverfolgung von Speicherblöcken (tracemalloc)**

Das Modul *tracemalloc* kann zur Ablaufverfolgung von Speicherblöcken, allokiert aus Python, benutzt werden.  

-  	Traceback von der Stelle, an der ein Objekt allokiert wurde
-  	Statistik von allokierten Blöcken sortiert nach Dateinamen und Zeilennummer: Gesamtgröße, Anzahl und durchschnittliche Größe der allokierten Blöcke
-  	Berechnung des Unterschiedes von zwei ‚Snapshots‘, um Speicherlecks zu entdecken

## Python 3.5

**Operator @ für Matrix Multiplikationen**

Es gibt einen neuen Operator @ für Matrix Multiplikationen. Zu beachten ist, dass aktuell keine builtin Python Typen diesen Operator unterstützen. Dagegen hat numpy die Unterstützung für diesen Operator seit NumPy 1.10. Deswegen hier ein Beispiel im JupyterLab (bzw. JupyterNotebook):

```python
import numpy

# create array of size three filled with ones
x = numpy.ones(3)
x
array([1., 1., 1.])

# create 2D-array with ones on the diagonal and zeros elsewhere
m = numpy.eye(3)
m
array([[1., 0., 0.],
       [0., 1., 0.],
       [0., 0., 1.]])

# matrix multiplication
# 1x1 + 1x0 + 1x0 + 1x0 + 1x1 + 1x0 + 1x0 + 1x0 +1x1 = [1., 1, 1,]
x @ m
array([1., 1., 1.])
```

**Typ Annotationen**

Mit Type Annotationen (oder Type Hints) hat man jetzt auch in Python die Möglichkeit, die erwarteten Typen von Variablen, Funktionsparametern und Funktionsrückgabewerten zu kennzeichnen. Ein kleines Beispiel sollte genügen, um zu sehen, wie Typ-Annotationen in Python aussehen.

```python
#!/usr/bin/python

import string

# none annotations at all
def add_world(message, times):
   """ Add the string 'world' n times """ 
   res = message

   i = 1
   while i <= times:
      res = res + " world"
      i = i + 1

   return res

# function parameter annotation and return value annotation
def add_world_using_annotation(message: str, times: int) -> str:
   """ Add the string 'world' n times """
   # variable definition annotation
   res: str = message

   i = 1
   while i <= times:
      res = res + " world"
      i = i + 1

   return res

if __name__ == '__main__':
   msg = add_world("hello", 2)
   print(msg)

   msg = add_world_using_annotation("hello", 3)
   print(msg)

#> hello world world
#> hello world world world
```

**Unpacking Syntax für Containertypen**

**Coroutinen mit async und await**

```python
#import aiohttp
#>>> async def get_page(url):
#...    response = await aiohttp.request('GET',url)
#...    #usw.
```

**Verschiedenes**

- Die Funktion *os.listdir()* wurde durch *os.scandir()* ersetzt, um den Zugriff auf Dateisysteme beschleunigen zu können.

**Module**

| Modul  | Beschreibung                               |
| ------ | ------------------------------------------ |
| typing | Laufzeitunterstützung für Typ Annotationen |

## Python 3.6

**Formatted String Literals**

Es gibt ein neues Präfix für Zeichenketten. Vor die Zeichenkette schreibt man einfach ein "f" und an die Stelle, an  der der Wert der Variablen erscheinen soll, den Variablennamen in  geschweiften Klammern. 

```python
#!/usr/bin/python

if __name__ == '__main__':
   var = "boss"
   out_v2 = "hello %s" %(var)
   out_v3 = "hello {0}".format(var)
   out_v3_6 = f"hello {var}"

   print(out_v2)
   print(out_v3)
   print(out_v3_6)

#> hello boss
#> hello boss
#> hello boss
```

**Underscores in Numeric Literals**

Literale kann man jetzt mit Unterstrichen strukturieren. 

```python
#!/usr/bin/python

if __name__ == '__main__':
   # underscores for literals
   einnahmen = 10_000_000.00
   address = 0xCAFE_F00D
   flags = 0b_0011_1111_0100_1110

   print(einnahmen)
   print(f'{address:x}')
   print(f'{flags:b}')

#> 10000000.0
#> cafef00d
#> 11111101001110
```

**Syntax for Variable Annotations**

In Python 3.5 wurden Typ-Annotatinen eingeführt. Mit Python 3.6 ist es jetzt auch möglich, Typ-Annotationen bei Variablen anzugeben.

```python
#!/usr/bin/python

from typing import List

if __name__ == '__main__':
   # type annotations for variables
   name: str = "Hallo"
   meine_liste: List[int] = []
   meine_liste = [1, 3, 5, 7, 9, 11, 13]

   print(name)
   print(meine_liste)
   
#> Hallo
#> [1, 3, 5, 7, 9, 11, 13]
```

**File System Path Protocol**

Es gibt eine neue Schnittstelle *os.PathLike*, mit der es einfacher wird, Betriebssystempfade als Zeichenketten zu verarbeiten. 

**Asynchronous Comprehensions**

Mit dem Feature *Asynchronous Comprehensions* kann man jetzt die seit Python 3.5 bekannten Funktionalitäten *async* und *await* auch in *Comprehensions* benutzen.

```python
#>>> ergebnis = [await f() for f in f_liste]
```

**Module** 

| Modul   | Beschreibung                               |
| ------- | ------------------------------------------ |
| secrets | Use this to generate secure random numbers |

```python
#!/usr/bin/python

from secrets import token_bytes

def random_key(length: int) -> int:
   # generate a random number with length 'length'
   random_bytestring: bytes = token_bytes(length)
   return int.from_bytes(random_bytestring, "big")

if __name__ == '__main__':
	rand_int: int = random_key(10)
     
```

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

## Arbeiten mit Dateien

Für die Arbeit mit Dateien bedient man sich des Moduls *os*. Einige Beispiele sollen das veranschaulichen.

### Grundlegendes

```python
#!/usr/bin/python

import os

# make directories
def makedirs():
    if os.path.exists("example-dir") == False:
        os.mkdir("example-dir")
        os.mkdir("example-dir/sub-dir1")
        os.mkdir("example-dir/sub-dir2")

# create new file by opening file using mode x
def createfile():
    if os.path.isfile("example-dir/example-data.csv") == False:
        new_csv_file = open("example-dir/example-data.csv", "x")

# print directory and content 
def contentofdir():
    print(os.getcwd())
    print(os.listdir())

# Automatic Resource Handling - Context Manager mit with (no file.close() necessary)
def readwritefile():
    with open("firstfile.txt", 'w', encoding='utf-8') as textfile:
        textfile.write("First Line\n")
        textfile.write("Second Line ... ends here!\n")

# readline and writeline usage and walross operator
def readwritelines():
    with open("secondfile.txt", 'w', encoding='utf-8') as textfile:
        textfile.writelines(["First Line\n", "Second Line ... ends here!\n"])

# read content as lines
def readlines():
    file = open("secondfile.txt", encoding='utf-8')
    # use readline and use Walross-Operator :=
    count: int = 1
    while line_content := file.readline():
        print("Line", count, ":", line_content, end ="")
        count += 1

    file.close()



if __name__ == '__main__':
    print("hellodir")

    # create directories 
    makedirs()

    # create file
    createfile()

    # change directory
    os.chdir("example-dir")

    # what is our current directory
    contentofdir()

    # read and write file
    readwritefile()

    # readline and writeline 
    readwritelines()

    # readline 
    readlines()
```

### Directory-Baum erstellen

```python
#!/usr/bin/python

import os
import json

if __name__ == '__main__':
    print("json")

    # Data as dictionary 
    data: dict = {"TIM": {"name": "Tim", "age":51, "city": "Kiel"},
                "ANDREA": {"name": "Andrea", "age":24, "city": "Magdeburg"},
                "CHECKSUM": 4711}

    # create dir in case 
    if os.path.exists("example-dir") == False:
        os.mkdir("example-dir")

    os.chdir("example-dir")

    # open and write JSON data 
    with open('data.json', 'w') as jsonfile:
        json.dump(data, jsonfile)

    # read as dictionary and print JSON data
    with open('data.json') as json_file:
        read_data: dict = json.load(json_file)

    print(read_data)


```

## Bibliotheken

### TKinter

TKinter ist eine Bibliothek, die auch Teil von Python ist Damit kann man mit Bordmitteln grafische User-Interfaces erstellen. 

### Python4Delphi

Möglichkeit mit Hilfe von Python und Delphi die Annehmlichkeiten eines GUI-Builders (Delphi) mit einer modernen Programmiersprache (Python) zu kombinieren.

### NumPy

### SciPy

### Matplotlib

[18] Eine Open-Source-Bibliothek, die häufig für die Visualisierung von Daten mit Hilfe von Diagrammen verwendet wird. Mit nur wenigen Codezeilen können Grafiken, Tortendiagramme, Streudiagramme, Histogramme usw. erstellt werden, 

### TensorFlow

[19] Ein beliebtes Open-Source-Deep-Learning-Framework für numerische Berechnungen. Die Bibliothek wird auch für maschinelles Lernen verwendet. TensorFlow wurde von den Forschern des Google-Brain-Teams innerhalb der Google-AI-Organisation entwickelt und wird heute von vielen Wissenschaftlern eingesetzt. 

### scikit-learn

[20] Eine Bibliothek für maschinelles Lernen. Sie kann für eine Vielzahl von Anwendungen verwendet werden, darunter Klassifizierung, Regression, Clustering und Modellauswahl.

### SymPy

[21] Eine Bibliothek, die umfassende Methoden für symbolische Berechnungen bietet und im Sinne eines Computer-Algebra--Systems genutzt werden kann. Symbolisches Rechnen ermöglicht das Lösen von Gleichungen, z.B. die Auflösung nach einer bestimmten Variable. Dabei wird eine exakte Lösung ermittelt und nicht nur ein numerischer Näherungswert bestimmt Symbolisches Rechnen gilt mit Blick auf den Einsatz am Computer als deutlich komplexer als die Verwendung von Näherungsverfahren. Derartige Algorithmen selbst zu entwickeln ist sehr anspruchsvoll 

### Chainer

[22] Eine Bibliothek, um Deep-Learning-Modelle zu erstellen. Die drei Hauptschwerpunkte sind: Transportsysteme (autonomes Fahren), Fertigungsindustrie (Objekterkennung, Optimierung, Robotik) und Gesundheitsvorsorge (Bildanalyse). 

## Literatur  

[1] Python – Das umfassende Handbuch, <http://openbook.galileocomputing.de/python/>, abgerufen am 18. März 2014

[2] Learning Python, 5th edition, Mark Lutz, O’Reilly

[3] Programming Python, 4th edition, Mark Lutz, O’Reilly

[4] Python: Programmiersprache für alle Fälle, Holger Krekel, aus: iX Special, Programmieren heute, 1/2010

[5] heise developer, Neues in Python 3.4, https://www.heise.de/developer/artikel/Neues-in-Python-3-4-2174477.html, abgerufen am 11. März 2019

[6] http://docs.python.org/3.4/whatsnew/3.4.html (abgerufen am 19. März 2014)

[7] heise developer, https://www.heise.de/developer/meldung/Programmiersprache-Python-3-5-erschienen-2811997.html, abgerufen am 22. Oktober 2018

[8] Python - Universalwerkzeug für einfache und komplexe Aufgaben, Frank Müller, iX 11/2016

[9] Parallele Programmierung mit Python, Teil 1: Multitasking, Gerhard Völkl, iX 11/2016

[10] Unicode HowTo, https://docs.python.org/3/howto/unicode.html, abgerufen am 22. Mai 2019

[11] Head First Python, Second Edition, Paul Barry, 2017

[12] Python 3.9 startet in die Beta-Phase, https://www.heise.de/news/Python-3-9-startet-in-die-Beta-Phase-4724615.html, abgerufen am 20.05.2020

[13] Algorithmen in Python, 2020, David Kopec

[14] heise developer, Die wichtigsten neuen Features in Python 3.6, https://www.heise.de/developer/artikel/Die-wichtigsten-neuen-Features-in-Python-3-6-3506992.html, abgerufen am 28.01.2021

[15] Python Naming Conventions, https://peps.python.org/pep-0008/#naming-conventions, abgerufen am 19.04.2022

[16] entwickler magazin 7.2022, The Beauty of Python - Teil 1, Michael Inden

[17] entwickler magazin, 4.2022, Grafische Oberflächen und Systemfeatures für Python-Skripte, Elena Bochkor, Dr. Veikko Krypczyk

[18] https://matplotlib.org

[19] https://www.tensorflow.org

[20] https://scikit-learn.org

[21] https://sympy.org

[22] https://chainer.org

[23] https://github.com/pyscripter/python4delphi

[24] entwickler magazin, 8.2022, The Beauty of Python - Teil 2, Michael Inden







  
