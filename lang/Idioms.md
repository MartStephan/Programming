# Idioms

[TOC]

Table of Contents
=================

* [Idioms](#idioms)
* [Table of Contents](#table-of-contents)
  * [Argument\-Dependent\-Lookup (ADL)](#argument-dependent-lookup-adl)
  * [Aggregation](#aggregation)
  * [Aspektorientierte Programmierung](#aspektorientierte-programmierung)
  * [Bedarfsauswertung (Lazy Evaluation)](#bedarfsauswertung-lazy-evaluation)
  * [Clean Code](#clean-code)
  * [Closure](#closure)
  * [Compiler](#compiler)
  * [Composition](#composition)
  * [Comprehensions](#comprehensions)
  * [Concepts](#concepts)
  * [Concurrency](#concurrency)
  * [Container](#container)
    * [Sequentielle Container](#sequentielle-container)
    * [Assoziative Container](#assoziative-container)
  * [Conway's Law](#conway-s-law)
  * [Curiously Recurring Template Pattern (CRTP)](#curiously-recurring-template-pattern-crtp)
  * [Daemon](#daemon)
  * [Dangling Pointer](#dangling-pointer)
  * [Deep/Shallow Copy](#deepshallow-copy)
  * [Deklarative Programmierung](#deklarative-programmierung)
  * [Delegates](#delegates)
  * [Delegating and inheriting constructors](#delegating-and-inheriting-constructors)
  * [Dependency Injection (DI)](#dependency-injection-di)
  * [Dependent and non\-dependent names](#dependent-and-non-dependent-names)
  * [Dispatching](#dispatching)
  * [Duck Typing](#duck-typing)
  * [Domain\-Specific\-Languages](#domain-specific-languages)
  * [Dynamische Programmiersprache](#dynamische-programmiersprache)
  * [Erstellungsprozess C/C\+\+](#erstellungsprozess-cc)
    * [Präprozessor](#pr%C3%A4prozessor)
    * [Compiler](#compiler-1)
    * [Linker](#linker)
  * [Favour Composition over Inheritance](#favour-composition-over-inheritance)
  * [Functors](#functors)
  * [Funktionale Programmierung](#funktionale-programmierung)
    * [First\-class functions](#first-class-functions)
    * [Funktionen höherer Ordnung](#funktionen-h%C3%B6herer-ordnung)
    * [Reine Funktionen](#reine-funktionen)
    * [Rekursion](#rekursion)
    * [Verarbeitung von Listen](#verarbeitung-von-listen)
  * [Garbage Collection](#garbage-collection)
  * [Generische Programmierung](#generische-programmierung)
    * [Templates](#templates)
    * [Generics](#generics)
  * [Graduell Typisierte Sprache](#graduell-typisierte-sprache)
  * [Idempotenz](#idempotenz)
  * [Information Hiding Principle](#information-hiding-principle)
  * [Inheritance, Multiple Inheritance, Protected Inheritance, Virtual Inheritance](#inheritance-multiple-inheritance-protected-inheritance-virtual-inheritance)
  * [Inkrement Operatoren](#inkrement-operatoren)
  * [Integral Promotion](#integral-promotion)
  * [Interpreter](#interpreter)
  * [Invariante](#invariante)
  * [Inversion of Control (IoC)](#inversion-of-control-ioc)
  * [Kernel](#kernel)
    * [Microkernel](#microkernel)
    * [Monolithischer Kernel](#monolithischer-kernel)
  * [KISS](#kiss)
  * [Kopplung und Kohäsion](#kopplung-und-koh%C3%A4sion)
  * [Koroutine](#koroutine)
  * [Lambda](#lambda)
  * [Literal](#literal)
  * [L\-Value/R\-Value](#l-valuer-value)
  * [Memoisation](#memoisation)
  * [Microservices](#microservices)
  * [Mixins](#mixins)
  * [Monomorphisation](#monomorphisation)
  * [Move\-Semantik](#move-semantik)
  * [Monaden](#monaden)
  * [Mutable/Immutable](#mutableimmutable)
  * [Myths and Facts](#myths-and-facts)
  * [Narrowing Conversion](#narrowing-conversion)
  * [Nebenläufigkeit](#nebenl%C3%A4ufigkeit)
  * [Nullhypothese](#nullhypothese)
  * [Objektorientierte Programmierung](#objektorientierte-programmierung)
  * [O\-Notation](#o-notation)
  * [Opcode](#opcode)
  * [Package](#package)
  * [Pointers to Functions](#pointers-to-functions)
  * [Polymorphismus](#polymorphismus)
  * [Predicates](#predicates)
  * [Principle of Least Astonishment](#principle-of-least-astonishment)
  * [Programming Model](#programming-model)
  * [Promotion Trait](#promotion-trait)
  * [Qualified and Non\-Qualified Bezeichner](#qualified-and-non-qualified-bezeichner)
  * [Race Conditions](#race-conditions)
  * [Reaktive Programmierung](#reaktive-programmierung)
  * [Referenzielle Transparenz](#referenzielle-transparenz)
  * [Regular und SemiRegular Datentypen](#regular-und-semiregular-datentypen)
  * [Reine Funktionen](#reine-funktionen-1)
  * [Resource acquisition is initialization (RAAI)](#resource-acquisition-is-initialization-raai)
  * [Rule of three](#rule-of-three)
  * [Rule of five](#rule-of-five)
  * [Rule of six](#rule-of-six)
  * [Scout Rule](#scout-rule)
  * [Scope](#scope)
  * [SFINAE](#sfinae)
  * [Smart Pointer](#smart-pointer)
  * [SOLID](#solid)
    * [Single Responsibility Principle](#single-responsibility-principle)
    * [Open/Close Principle](#openclose-principle)
    * [Liskov Substitution Principle](#liskov-substitution-principle)
    * [Interface Segregation Principle](#interface-segregation-principle)
    * [Dependency Inversion Principle](#dependency-inversion-principle)
  * [Static Methods](#static-methods)
  * [Statische Programmiersprachen](#statische-programmiersprachen)
  * [Strong Types (Starke Datentypen)](#strong-types-starke-datentypen)
  * [Syntactic Sugar](#syntactic-sugar)
  * [Template Spezialisierung](#template-spezialisierung)
  * [Traits](#traits)
  * [Tuples](#tuples)
  * [Turing\-Vollständigkeit](#turing-vollst%C3%A4ndigkeit)
  * [Type Checking](#type-checking)
  * [Type Deduction](#type-deduction)
  * [Type Erasure](#type-erasure)
  * [Type Inference](#type-inference)
  * [Typing Model](#typing-model)
  * [Type Safe](#type-safe)
  * [Type Template Parameter vs Non\-Type Template Parameter](#type-template-parameter-vs-non-type-template-parameter)
  * [Variadische Funktion](#variadische-funktion)
  * [Verschattung (Shadowing)](#verschattung-shadowing)
  * [YAGNI](#yagni)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)



## Argument-Dependent-Lookup (ADL)



## Aggregation

Die Aggregation bezeichnet in der objektorientierten Welt eine Beziehung zwischen (meist) zwei Objekten. 

![](F:\Martin\Projects\Programmieren\UML\Aggregation.png)

## Aspektorientierte Programmierung

## Bedarfsauswertung (Lazy Evaluation)

Bedarfsauswertung ist auch unter dem Begriff *Lazy Evaluation* bekannt. Imperative Programmiersprachen wie C++ kennen eigentlich nur die strikte Auswertung und eben nicht eine *Lazy Evaluation*.  

Bei der Bedarfsauswertung wird der Ausdruck erst bei Nachfrage evaluiert. Vorteile sind:

-  	Ausdrücke werden nur dann evaluiert, wenn sie benötigt werden. Das spart Zeit und Speicher.  	
-  	Unendliche Datenstrukturen können formuliert werden, von denen zur Laufzeit nur endlich viele Elemente angefordert werden.

Tatsächlich benutzen moderne C++ Compiler *Lazy Evaluation* bei der Template-Instanziierung (wobei es keine Pflicht für Compiler ist). Dabei werden Funktionen eines Klassen-Templates, die niemals aufgerufen werden, auch nicht generiert. 

```c++
// Example of lazy evaluation in C++
#include <iostream>
#include <cstdlib>

template<typename T> class Harman
{
public:
   Harman() = default;
  
   // both methods are not called thus the (modern) compiler 
   // does not create any method bodies in resulting binary
   bool isBest() const { return true; }
   bool isWorst() const { return false; }
};

int main()
{
   Harman<int> harman;
  
}
```

Tatsächlich gibt es noch mehr Arten von Bedarfsauswertungen: Eager Evaluation (Strict Evaluation), Partial Evaluation, Remote Evaluation, Short-circuit Evaluation. Die Rechereche überlasse ich (vorerst) dem interessierten Leser. 

Nur soviel: Die 'gewöhnliche' Bedarfsauswertung von vielen Programmiersprachen ist die *Eager Evaluation* (oder auch *Strict Evaluation*). Ein Ausdruck wird dabei sofort ausgewertet, sobald der Ausdruck einer Variablen zugeordnet wird, z.B. in C oder Java. 

## Clean Code

Der Begriff Clean Code wurde von Robert C. Martin, auch bekannt als Uncle Bob, und seinem gleichnamigen Standardwerk [37] bekannt gemacht. Clean Code bezeichnet Code, der einfach und direkt geschrieben ist und problemlos von anderen Entwickler(innen) gelesen, verstanden und verändert werden kann. Clean Code enthält keine Duplizierungen, verschleiert nicht die Absichten der Autoren und ist gründlich durch automatisierte Tests abgedeckt. 

Um Clean Code umzusetzen, bedient man sich bewährter Lösungen und Prinzipien aus der Softwareentwicklung, u.a.

- Design Prinzipien
  - DRY  (don't repeat yourself)
  - KISS (keep it stupid and simple)
  - YAGNI (you ain't gonna need it)
  - SOLID
  - Scout Rule
  - Favour Composition over Inheritance
  - Information Hiding Principle
  - Principle of Least Astonishment
- Design Patterns 
  - Creational Patterns (Erzeugungsmuster)
  - Structural Patterns (Strukturmuster)
  - Behavioral Patterns (Verhaltensmuster)
- Code Reviews
- Coding Styles
- Coding Guidelines
- Tools
- Codemetriken
- Softwaretests
- Automatisierung

## Closure

Closures sind Funktionen, die auf nicht-lokale Variablen auch dann noch zugreifen können, wenn der dazugehörige Gültigkeitsbereich (vgl. *Scope*) nicht mehr existiert. Vereinfacht gesagt merkt sich eine Closure bei der Definition nicht nur den auszuführenden Code, sondern ihre gesamte Umgebung. Siehe auch Closures in Bezug auf Lambda.

## Compiler

<https://en.wikipedia.org/wiki/Compiler>

## Composition

Die Komposition bezeichnet in der objektorientierten Welt einen Spezialfall der Aggregation. Die Komposition beschreibt (wie die Aggregation) die Beziehung zwischen einem Ganzen und seinen Teilen. Ein Objekt kann dabei nur Teil maximals eines Ganzen sein. 

![](F:\Martin\Projects\Programmieren\UML\Komposition.png)

## Comprehensions

Comprehensions (oder List Comprehensions) ist ein Begriff, der in Python eine Methode beschreibt, um kurz und bündig Listen zu erstellen. Ein kleines Beispiel.

```python
#!usr/bin/python

if __name__ == '__main__':
    """Example for List Comprehensions"""
    
	# simple list using loops 
    numbers = []
    for item in range(10):
        numbers.append(item)
    print(numbers)
    # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

    # simple list using list comprehensions
    x: int = [i for i in range(10)]
    print(x)
    # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
```

## Concepts

*Concepts* in C++ sind Prädikate zur Compile-Zeit. Sie werden während der Übersetzung evaluiert und liefern einen Wahrheitswert. 

Damit ist es möglich, Anforderungen an die Templates als Teil des Interfaces zu formulieren. 

In Haskell gibt es Typklassen, die ähnlich funktionieren. 

Im folgenden ein kleines Beispiel in C++20.

```c++
template<typename T>
requires Integral<T>()
T ggt(T a, T b)
{
  if (b == 0)
  {
      return a; 
  }
  else
  {
  	return ggt(b, a % b);
  }
}
```

Der Template-Parameter T muß ein Integral sein. Man kann das Ganze noch abkürzen. 

```c++
template<Integral T>
T ggt(T a, T b)
{
  if (b == 0)
  { 
      return a; 
  }
  else
  {
  	return ggt(b, a % b);
  }
}
```

Und man kann es tatsächlich nochmals abkürzen. 

```c++
Integral ggt(Integral& a, Integral& b)
{
	if (b == 0)
  	{ 
    	return a; 
  	}	
  	else
  	{
  		return ggt(b, a % b);
  	}
}
```

## Concurrency

## Container

Als Container bezeichnet man in der Programmierung üblicherweise eine Sammlung von generischen Klassen, Objekten und/oder Algorithmen. Diese beinhalten allgemeinübliche Datenstrukturen wie *stacks, queues, arrays* u.ä. 

In C++ unterscheidet man zwischen sequentiellen Containern und assoziativen Containern. 

### Sequentielle Container

Als Sequentielle Container bezeichnet man Strukturen, auf die sequentiell zugegriffen werden kann. In C++:

| C++ Sequentieller Container | Eigenschaft                           |
| --------------------------- | ------------------------------------- |
| array                       | statisch; wird auf dem Stack angelegt |
| vector                      | dynamisch; wird auf dem Heap angelegt |
| dequeue                     |                                       |
| forward_list                |                                       |
| list                        |                                       |

### Assoziative Container

Als Assoziative Container bezeichnet man Strukturen, die *key-value* Paare beinhalten und die sich durch schnelle Zugriffszeiten auszeichnen. In C++ gibt es sowohl sortierte als auch unsortierte Varianten der Assoziativen Container. Wichtig zu wissen: Sortierte Container bieten logarithmische Zugriffszeit, während unsortierte Container dir konstante Zugriffszeit bieten. 

| C++ Assoziative Container | Eigenschaft                                    |
| ------------------------- | ---------------------------------------------- |
| set                       | *Key* und *Value* sind identisch;              |
| map                       | Jeder *Key* besitzt einen assoziierten *Value* |
| multiset                  |                                                |
| multimap                  |                                                |

## Conway's Law
In den späten 60er Jahren des letzten Jahrhunderts formulierte Melvin Conway das nach ihm benannte Conway's Law. Organisationen können nur Systeme entwerfen, die die Kommunikationsstrukturen dieser Organisationen abbilden. Die Organisationsstruktur beeinflusst oder determiniert somit die Softwarearchitektur. 

## Curiously Recurring Template Pattern (CRTP)

CRTP in C++ ist ein Idiom, bei dem eine Klasse *Derived* sich von einer Template-Klasse *Base* ableitet und diese *Base*-Klasse hat *Derived* als Template-Argument. Es kann dazu verwendet werden, auf elegante Art und Weise Objektzähler zu realisieren.

```c++
// CRTP simple example
#include <iostream>
#include <string>

template<class T>
struct Base
{
    static inline int created = 0;
    static inline int alive = 0;
    
    Base() 
    { 
        ++created;
        ++alive;
        std::cout << "Base constructor\n"; 
    }
    
    ~Base()
    {
        --alive;
        std::cout << "Base destructor\n"; 
    }
};  

class Derived_1 : Base<Derived_1>
{
};

class Derived_2 : Base<Derived_2>
{
};

int main()
{
   std::cout << "hallo\n";
    
   Derived_1 A; 
   
   return 0;
}

//> hallo
//> Base constructor
//> Base destructor
```

## Daemon

Der Begriff *Daemon* wird hauptsächlich unter UNIX bzw. UNIX-artigen Betriebssystemem benutzt und bezeichnet einen Systemdienst. In anderen Worten: Ein Programm, das im Hintergrund abläuft und bestimmte Dienste zur Verfügung stellt.  

Benutzerinteraktionen finden nur auf indirektem Wege statt, z.B. über Pipes, Signale oder Sockets.  

Viele Daemon-Programme benutzen ein angehängtes ‚d‘, um sich als *Daemon* zu kennzeichnen, z.B. *systemd* oder *syslogd*.  

## Dangling Pointer

Bezeichnet in der Programmierung einen Zeiger, der auf einen nicht-initialisierten Speicher zeigt (nullptr) oder auf einen nicht mehr gültigen Speicher zeigt.  

Ab und an trifft man auch auf den Begriff Dangling References. 

## Deep/Shallow Copy

## Deklarative Programmierung

## Delegates  

## Delegating and inheriting constructors

*Delegating und inheriting constructors* sind zwei (unterschiedliche) Features, die in C++11 eingeführt wurden. Beide dienen hauptsächlich der Vermeidung von Code-Duplizierung und sind auch z.B. in Java bekannt.  

*Delegating constructors* erlauben es, Teile der Arbeit eines Konstruktors von einem anderen Konstruktor derselben Klasse ausführen zu lassen.  

*Inheriting constructors* erlauben es einer abgeleiteten Klasse, die Konstruktoren seiner Elternklasse zu vererben bzw. direkt zu verwenden anstatt sie nochmals zu deklarieren.  

## Dependency Injection (DI)

## Dependent and non-dependent names

 Ein ‘Dependent Name’ ist ein Bezeichner, der von einem Template-Parameter abhängt. Während ein ‘Non-Dependent Name’ nicht von einem Template-Parameter abhängt.   

```c++
template<typename T> class MeineKlasse
{
	int i;
	vector<int> vi;  
	vector<int>::iterator vitr;  

	T t;  
	vector<T> vt;  
	vector<T>::iterator viter;  
};
```

Die ersten drei Deklarationen im obigen Beispiel sind während der Template-Deklaration bekannt. Sie bezeichnet man als ‘Non-Dependent Names’. Während die unteren drei Deklarationen nicht während der Deklaration bekannt sind, sondern erst bei der Instanziierung. Sie bezeichnet man als ‘Dependent Names’.

## Dispatching

## Duck Typing

Duck Typing ist ein Konzept der Objektorientierten Programmierung. Der Typ des Objekts wird dabei nicht durch eine formale Schnittstelle beschrieben, sondern durch das Verhalten des Objekts. Der Begriff geht auf ein Gedicht von James Whitcomb Rileys zurück: 

“When I see a bird that walks like a duck and swims like a duck and quacks like a duck, I call that bird a duck.”

Duck Typing findet seine Anwendung vor allem in dynamisch typisierten Sprachen wie Python, in denen gegen ein Verhalten programmiert wird (und eben nicht gegen ein formales Interface).

## Domain-Specific-Languages

## Dynamische Programmiersprache

Dynamische Sprachen prüfen erst zur Laufzeit, ob eine Operation auf einem Objekt möglich ist oder nicht. Daraus folgt z.B. dass eine Sprache dynamisch sein muss, damit man einer Klasse oder einem Objekt zur Laufzeit Methoden hinzufügen kann – schließlich kann ein Compiler die Methoden beim Übersetzen noch nicht kennen.

Dynamische Sprachen haben also grundsätzlich zur Laufzeit vollen Zugriff auf die Meta-Informationen.   

Im Gegensatz zu dynamischen Programmiersprachen nimmt bei statischen Programmiersprachen schon der Compiler Typüberprüfungen vor.  

Beispiele für dynamische Programmiersprachen: Ruby, Python.

## Erstellungsprozess C/C++

Der klassische Erstellungsprozess für C/C++ Programme gliedert sich auf in: Präprozessor, Compiler und Linker. 

### Präprozessor 

Der Präprozessor kümmert sich um Präprozessor-Direktiven wie #include und #define und weitere Direktiven wie z.B. #ifdef und #endif. Der Präprozessor erzeugt eine Textdatei, die üblicherweise richtig groß ist. Man kann das schön mit dem Compiler-Flag -E sehen.

```
#> g++ -E helloWorld.cpp
```

Die Ausgabe des Präprozessor stellt die Eingabe des Compilers dar. 

### Compiler 

Die Kompilierung findet auf allen Dateien statt, die der Präprozessor erzeugt. Der Compiler erzeugt Assemblercode in sogenannten Objektdateien. Die Objektdateien stellen die Eingabe für den Linker dar. 

### Linker

Der Linker kann eine ausführbare Datei, eine statische oder eine geteilte Bibliothek (shared library) erzeugen. Er hat die Aufgabe, die Referenzen zu undefinierten Symbolen aufzulösen.

## Favour Composition over Inheritance

Durch Komposition von Klassen anstelle von Vererbung fördern wir die lose Kopplung eines Systems. 

## Functors

Functors ist ein Begriff aus der Mathematik bzw. aus der Algebra und bezeichnet eine Abbildung zwischen (Merkmals-)Klassen. 

Seien D und M Merkmalsklassen und f ein Functor. Ein Functor f (oder Abbildung) von einer Menge D in eine Menge M ist eine Vorschrift, bei der jedes Element aus D genau auf ein Element in M verweist. 
$$
f: D -> M, x -> f(x)
$$
Mit dem in C++17 neu eingeführten *std:visitor* Datentyp kann solch eine Abbildung einfach umgesetzt werden.

```c++
// This file shows examples for std::visitor
#include <iostream>
#include <variant>

struct MyVisitor
{
    void operator() (int i) const { std::cout << "Mein Visitor " << i << std::endl; }
    void operator() (std::string s) const { std::cout << "Mein Visitor " << s << std::endl; }
}; 

int main()
{        
    // Gebe die Varianten an und initialisiere mit einem von beiden Typen
    std::variant<int, std::string> variant(42);
    
    // Mein Visitor Pattern
    std::visit(MyVisitor(), variant); 
    
    // Andere Typen können jederzeit zugewiesen werden
    variant = "Hey Hoh"; 
    
    // Mein Visitor Pattern
    std::visit(MyVisitor(), variant); 
       
    return 0;
}

```

```tex
Ausgabe
Mein Visitor 42
Mein Visitor Hey Hoh
```

## Funktionale Programmierung

Die Funktionale Programmierung ist ein Programmierparadigma, bei dem Programme ausschließlich aus Funktionen bestehen (vgl. [Wikipedia](http://de.wikipedia.org/wiki/Funktionale_Programmierung)).  

Es werden Sprachelemente zur Kombination und Transformation von Funktionen benutzt. Kurz und bündig:  

Funktionale Programmierung ist das Programmieren mit mathematischen Funktionen.

"Ein wichtiges Prinzip der funktionalen Programmierung ist es, Funktionen und Daten gleichberechtigt zu behandeln. Das heißt, dass eine Funktion einer Variablen zugewiesen werden kann, sie einer anderen Funktion als Parameter übergeben oder von ihr als Ergebnis zurückgegeben werden kann." (vgl. [23]).    

Beispiele für funktionale Programmiersprachen: Lisp, Haskell.  

Neuerdings kann man Sprachen oft nicht mehr in rein funktionale oder rein objektorientierte Sprachen unterteilen. Ursprünglich objektorientierte Sprachen, z.B. C++, übernehmen dann auch mal  funktionale Programmierparadigmas.

Insbesondere ab C++11 übernimmt C++ mehr und mehr Charakteristika aus der funktionalen Programmierung.   

Im folgenden werden die Charakteristika der funktionalen Programmierung erläutert.  

### First-class functions

First-class Funkionen sind Funktionen, die zur Laufzeit erzeugt werden können, in Variablen gespeichert werden können oder als Eingabe- oder Rückgabewert einer Funktion verwendet werden können.  

```c++
#include <iostream>
#include <functional>
#include <map>
#include <cmath>
  
int main()
{
	std::map<const char, std::function<double(double, double)>> dispatchTable;  

	dispatchTable.insert(std::make_pair('+', [](double a, double b) {return a+b;}));
	dispatchTable.insert(std::make_pair('-', [](double a, double b) {return a-b;}));
	dispatchTable.insert(std::make_pair('*', [](double a, double b) {return a*b;}));
	dispatchTable.insert(std::make_pair('/', [](double a, double b) {return a/b;}));
     
	std::cout << "3.5 + 4.5 = " << dispatchTable['+'](3.5, 4.5) << std::endl;
	std::cout << "3.5 - 1.0 = " << dispatchTable['-'](3.5, 1.0) << std::endl;
	std::cout << "3.5 * 4.0 = " << dispatchTable['*'](3.5, 4.0) << std::endl;
	std::cout << "4.0 / 2.0 = " << dispatchTable['/'](4.0, 2.0) << std::endl;
  
	// add new operation
	dispatchTable.insert(std::make_pair('^', [](double a, double b) {return std::pow(a, b);}));
   
	std::cout << "5 pow 2 = " << dispatchTable['^'](5.0, 2.0) << std::endl;
}
```

### Funktionen höherer Ordnung

Funktionen, die entweder Funktionen als Argument annehmen oder als Ergebnis zurückgeben können, werden Funktionen höherer Ordnung genannt. Die Klassiker aus der funktionalen Programmierung sind:  

-  	**map**: Wende eine Funktion auf jedes Element einer Liste an.
-  	**filter**: Filtere Elemente aus einer Liste heraus.
-  	**fold**: Reduziere sukzessive eine Liste auf einen Ausgabewert, indem eine binäre Operation auf ein Element der Liste und das vorherige Ergebnis der Operation auf der Liste angewandt wird.  	

(Anmerkung: In Python map, filter, reduce. Siehe auch map-reduce-Algorithmus).

 

```c++
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
 
int main()
{
	std::vector<int> myVec(20);     
	std::iota(myVec.begin(), myVec.end(), 10);
   	std::cout << "myVec: ";
    for (auto i: myVec) std::cout << i << " ";
	std::cout << std::endl;

	// Funktion höherer Ordnung: map. In C++: std::transform i -> i*i
	std::transform(myVec.begin(), myVec.end(), myVec.begin(), [](int i){return i*i;});
	std::cout << "transform myVec: ";
	for (auto i: myVec) std::cout << i << " ";
	std::cout << std::endl;    

	// Funktion höherer Ordnung: filter. In C++: std::remove_if, std::remove_copy_if
	auto it = std::remove_if(myVec.begin(), myVec.end(), [](int i){return (i<200) or (i>500);});
	// Rückgabewert 'it' ist das neue logische Ende von myVec
	myVec.erase(it, myVec.end());
	std::cout << "remove_if myVec: ";
	for (auto i: myVec) std::cout << i << " ";
	std::cout << std::endl;
   
	// Funktion höherer Ordnung: fold. In C++: std::accumulate
	double sum = static_cast<double>(std::accumulate(myVec.begin(), myVec.end(), 0, [](int a, int b)	{return a+b;}));
	std::cout << "accumulate myVec: " << sum << std::endl;
}

```

### Reine Funktionen

Reine Funktionen erklärt man am besten mit einem Vergleich gegenüber unreinen Funktionen.

| Reine Funktionen                                             | Unreine Funktionen                                           |
| :----------------------------------------------------------- | ------------------------------------------------------------ |
| Erzeugen bei gleichen Argumenten immer das gleiche Ergebnis. | Können verschiedene Ergebnisse bei gleichen Argumenten erzeugen. |
| Besitzen keine Seiteneffekte.                                | Können Seiteneffekte besitzen.                               |
| Können den Zustand des Programms nicht verändern.            | Können den Zustand des Programms verändern.                  |

Der Vorteil von reinen Funktionen ist das deutlich transparentere und vorhersagbare Programmverhalten. Rein funktionale Sprachen wie Haskell setzen dieses Idiom in die Tat um.  

### Rekursion

Die Rekursion ist die Kontrollstruktur in der funktionalen Programmierung. Rein funktionale Sprachen kennen keine Variablen.  

```c++
#include <iostream>
 
  
template<int N> struct FactorialRec
{
	static int const value = N * FactorialRec<N-1>::value;
};  


template<> struct FactorialRec<1>
{
	static int const value = 1;
};
 
 
template<> struct FactorialRec<0>
{
	static int const value = 0;
};
 
 
int main()
{
	std::cout << "FactorialRec<5> = " << FactorialRec<5>::value << std::endl;
}

 
```

### Verarbeitung von Listen

Ein weiteres wichtiges Kriterium für funktionale Programmiersprachen ist die Verarbeitung von Listen (Notiz: List Processing, abgekürzt Lisp).  

Darunter versteht man z.B. das Transformieren einer Liste in eine neue Liste oder die Komposition von Listenoperationen.  

## Garbage Collection

## Generische Programmierung

Der Begriff Generische Programmierung wurde ursprünglich von David Musser und Alexander Stepanov eingeführt. Eine gute Definition liefert 

[Wikipedia]: https://en.wikipedia.org/wiki/Generic_programming

"**Generic programming** is a style of computer programming in which algorithms are written in terms of types *to-be-specified-later* that are then *instantiated* when needed for specific types provided as parameters."

In C++ werden gibt es dafür das Konzept der Templates. In anderen Sprachen wird oft der Begriff Generics verwendet, z.B. in Java oder C#.

### Templates

Bespiel für Generische Programmierung in C++ mit Hilfe von Templates.

```c++
// This file shows examples for Generic Programming (here: Template in C++)
#include <iostream>
#include <string>

template<typename T> void swap(T& a, T& b)
{
   T temp = b;
   b = a;
   a = temp;
}

int main()
{
    std::string hello = "World!";
    std::string world = "Hello, ";
    swap(world, hello);
    
    std::cout << hello << world << std::endl; //Output is "Hello, World!"
    
    int first = 2;
    int second = 1;
    swap(first, second);
    
    std::cout << first << " " << second << std::endl; // Output is "1 2!  
}
```

### Generics

In den Sprachen Java, C# gibt es das Konzept der Generics.

## Graduell Typisierte Sprache

Eine graduell typsisierte Sprache ist eine Programmiersprache, bei der man Typ-Annotationen verwenden kann, diese aber nicht benötigt werden. Zum Beispiel ist Python seit Version 3.5 eine graduell typisierte Sprache durch die Möglichkeit, Typ-Annotationen anzugeben. Wohingegen sie zuvor eine rein dynamisch typisierte Sprache war. 

## Idempotenz

In der Programmierung wird ein Stück Code als idempotent bezeichnet, falls bei mehrfach hintereinander ausgeführten Code-Aufrufen immer das gleiche Ergebnis geliefert wird, als wenn der Code nur einmal aufgerufen wird. 

In der Praxis verwendet man den Begriff bei den REST-HTTP Verben GET, HEAD, PUT und DELETE, die laut REST-HTTP Spezifikation idempotente Methoden sind, d.h. der Client darf sie per Definition ohne negativen Effekt ein zweites Mal aufrufen. 

## Information Hiding Principle

Eine Schnittstelle sollte nur die absolut notwendigen Details nach außen sichtbar machen. Mache also nur jene Methoden oder Attribute öffentlich, die absolut notwendig sind. 

## Inheritance, Multiple Inheritance, Protected Inheritance, Virtual Inheritance

Vererbung ist ein Begriff aus der Objektorientierung. Wie der Name schon sagt, dient die Vererbung dazu, aus schon bestehenden Klassen neue zu schaffen. Dabei 'erbt' die abgeleitete Klassen (üblicherweise) die Methoden und Attribute der Basisklasse. 

## Inkrement Operatoren

Bei den Inkrement-Operatoren unterscheiden wir zwischen Prä-Inkrement-Operatoren und Post-Inkrement-Operatoren.

```c++
int solution = 41;

// increment solution by one using the Pre-Increment-Operator
++solution;

// increment solution by one using the Post-Increment-Operator
solution++;
```

Üblicherweise verwendet man in C++ den Prä-Inkrement-Operator. Aber wieso? Das zeigt (zugegebenermaßen sehr künstliches) folgendes Beispiel. Man sieht hier, dass falls C++-Überladungen für den Inkrement-Operator existieren, der Post-Inkrement-Operator immer auf einer Kopie arbeitet, da er sich den alten Wert ja merken muß. Während der Prä-Inkrement-Operator ohne Kopie performanter arbeiten kann. Um sich keine Gedanken über die Überladung machen zu müssen, nimmt man in C++ einfach immer den Prä-Inkrement-Operator.

```c++
#include <iostream>

class My_Int
{
public:
   // constructor
   My_Int(int v) : val(v) {}

   int get_val() { return val; }

   // pre-increment operator
   My_Int& operator++()
   {
      ++val;
      return *this;
   }

   // post-increment operator
   My_Int operator++(int)
   {
      My_Int cpy(*this);
      ++val;
      return cpy;
   }

private:
   int val;
};

int main()
{
   My_Int cut(41); 

   std::cout << "now is " << cut.get_val() << "\n";

   // pre-increment
   My_Int pre_cut = ++cut;
   std::cout << "pre-increment is " << pre_cut.get_val() << "\n";

   // post-increment
   My_Int post_cut = cut++;
   std::cout << "post-increment is " << post_cut.get_val() << "\n";
}

///> now is 41
///> pre-increment is 42
///> post-increment is 42
```

## Integral Promotion

Integral Promotion ist in C/C++ quasi das Gegenteil von *Narrowing Conversion*. Falls ein *int* alle Werte des Original-Typs repräsentieren kann, dann wird der Originaltyp nach *int* konvertiert. Ansonsten wird der Originaltyp nach unsigned int konvertiert. Dieser Prozess wird *Integral Promotion* genannt. 

*Integral Promotion* ist eine implizite Konvertierung, d.h. der Übersetzer führt diese Konvertierung implizit durch, falls esvom Entwickler nicht explizit verhindert wird. 

```c++
#include <iostream>
#include <typeinfo>

template <typename T> auto integralPromotionFunc(T first, T second)
{
   // Bool-Parameter werden nach int konvertiert und Rückgabe ist ebenfalls int. 
   return first + second;
}

int main()
{
   // Die beiden bool-Werte werden implizit nach int konvertiert. 
   auto ret = integralPromotionFunc(true, false);
   
   std::cout << "Wert: " << ret << std::endl;
   std::cout << "Typ: " << typeid(ret).name() << std::endl;
   
   return 0;
}

//> Wert: 1
//> Typ: i
```

Der Grund dahinter ist oft die Verwendung einer arithmetischen Operation (wie z.B. die Addition in obigem Beispiel). Arithmetische Operationen akzeptieren keine Typen kleiner als *int*. Für eine Auflistung von arithmetischen Operationen siehe [36].

## Interpreter

<https://en.wikipedia.org/wiki/Interpreter_%28computing%29>  

## Invariante

In der Informatik eine Bedingung, die zu gegebener Zeit als ‘wahr’ angenommen werden kann. Eine Schleifen-Invariante ist z.B. immer wahr am Anfang und Ende einer Schleife.   

## Inversion of Control (IoC)

## Kernel

Als Kernel bezeichnet man üblicherweise den Teil der Software/des Betriebssystems, welcher zwischen Software und Hardware liegt und damit quasi die Vermittlerrolle zwischen Software und Hardware übernimmt. Es übermittelt die (Applikations-) Aufrufe an die Hardware und agiert als Low-Level Treiber, um die (HW-)Geräte zu adressieren. Es gibt (hauptsächlich) zwei Paradigmen, nach denen Kernel eines Betriebssystems organisiert sind. 

### Microkernel

Bekannte Implementierungen eines Microkernel sind QNX und Fuchsia. Nur die wichtigsten und elementaren Funktionen eines Betriebssystems sind im Microkernel implementiert, z.B. Timer und Messaging. Alle anderen Funktionen sind eigenständige und autonome Prozesse, die direkt mit dem Microkernel über eine klar definierte Schnittstelle kommunizieren. Beispiele dafür sind Dateisysteme oder Speichermanagement. 

### Monolithischer Kernel

Bekannte Implementierungen eines Monolithischen Kernel sind Windows und LInux. Der ganze Code inkl. aller Subsysteme wie Dateisysteme oder Speichermanagement laufen in einer Komponente. Jede Funktionalität hat Zugriff auf jede andere Funktion im Kernel. 

## KISS

KISS seht für *Keep it simple,* *stupid* und besagt, dass eine Implementierung so einfach wie möglich gehalten werden soll. Man erhofft sich dadurch Vorteile in der Lesbarkeit, Nachvollziehbarkeit oder auch in der Anzahl der Fehler (je einfacher etwas umgesetzt wird, desto weniger Fehler sollten gemacht werden).  

## Kopplung und Kohäsion
Auf Englisch: Coupling and Cohesion.
Zentrale Prinzipien der Softwarearchitektur sind Kopplung und Kohäsion. In Komponenten möchte man starke Kohäsion ("Dinge, die sich zusammen ändern, sind am selben Ort") und zwischen Komponenten nur eine lockere Kopplung ("Änderungen in einer Komponente haben wenig oder keine Auswirkungen auf andere Komponenten").

## Koroutine


## Lambda

Das Sprachmittel ‚Lambda‘ ermöglicht die Definition von Funktionen ohne Namen (‚Anonyme Funktionen‘). So kann die Definition und der Aufruf kleiner Funktionen vermieden werden, indem Code dort angegeben und ausgeführt wird, wo andernfalls die Funktion aufgerufen werden müsste.

Weitere Eigenschaften:  

-  	Zugriff auf Variablen im umschließenden Gültigkeitsbereich (s. Closure)
-  	Kann einer Funktion übergeben werden
-  	Kann von einer Funktion zurückgegeben werden
-  	Leitet den Rückgabewert selbständig her

## Literal

Das Wort ‚Literal‘ kommt aus dem Lateinischen und bedeutet ‚Buchstabe‘ (lateinisch littera). Als Literal bezeichnet man eine Zeichenfolge, die zur direkten Darstellung der Werte von Basistypen definiert bzw. zulässig ist.  

Beispiele in C++:  

char * p = „string“;

int zeilen = 60;  

Literale sind in den Beispielen ‚string‘ und ‚60‘.  

Literale dürfen in Zuweisungsoperatoren nur rechtsseitig stehen (s. *R-Value*), als Argument einer Funktion oder als Wert einer Konstanten codiert werden.  

Weiterführend: Funktionen als Literale, s. *Lambda-Funktionen*.  

## L-Value/R-Value

In der Programmiersprache C/C++ gibt es die Begriffe *lvalue* und *rvalue*. Für ein tieferes Verständnis der Programmiersprache ist die Bedeutung und die Anwendung dieser Begriffe unerläßlich.

Jeder Ausdruck in C++ ist entweder ein *lvalue* oder ein *rvalue*. Ein lvalue verweist auf ein Objekt, das über einen einzelnen Ausdruck hinaus beibehalten wird. Sie können sich einen lvalue als ein Objekt vorstellen, das über einen Namen verfügt. Alle Variablen, einschließlich nicht veränderbarer (const) Variablen, sind *lvalues*. Ein *rvalue* ist ein temporärer Wert, der nicht über den Ausdruck hinaus beibehalten wird, der diesen nutzt.

```c++
int main()
{
	int x = 42; // x ist lvalue; 42 ist rvalue*

	const int ci = 7;  // ci ist lvalue; 7 ist rvalue*

	int y = x;  // y ist lvalue; x ist weiterhin lvalue
}
```

Siehe dazu auch https://en.cppreference.com/w/cpp/language/value_category und https://blog.knatten.org/2018/03/09/lvalues-rvalues-glvalues-prvalues-xvalues-help/. 

## Memoisation

Memoisation ist ein Verfahren, bei dem die Ergebnisse von Berechnungen gespeichert werden, um sie später wiederzuverwenden. Ohne dass man später die Ergebnisse erneut berechnen müsste. Oft ist damit eine effizientere Software möglich. Hier gezeigt am Beispiel der Berechnung der Fibonacci-Folge. 

```python
#!/usr/bin/python

# see https://gertingold.github.io/pythonnawi/profiling.html on how to measure runtime

import time
from typing import Dict

# returns the n-th-fibonacci number whereas n is the parameter starting with 0 
def fib(n: int) -> int:
    if n < 2:
        # Abbruchbedingung
        return n

    # Rekursion
    return fib(n-2) + fib(n-1)

# this is our Memoisation dictionary already containg Fibonacci numbers for 0 and 1 
memo: Dict[int, int] = {0: 0, 1: 1}
def fibmemo(n: int) -> int:
    if n not in memo:
        memo[n] = fibmemo(n-2) + fibmemo(n-1)
    return memo[n]

if __name__ == '__main__':
    print("Hello World")

    start = time.time()
    print(fib(0))
    print(fib(25))
    end = time.time()
    print('{:5.4f}s'.format(end-start))

    start = time.time()
    print(fibmemo(0))
    print(fibmemo(25))
    end = time.time()
    print('{:5.4f}s'.format(end-start))

#> 0
#> 75025
#> 0.0299s - without memoisation
#> 0
#> 75025
#> 0.0010s - using memoisation
```

## Microservices

Microservices sind ein Architekturmuster. Microservices zeichnen sich durch folgende Eigenschaften aus (kein Anspruch auf Vollständigkeit): 

- Individuell ausrollbar
- Microservices bilden eine klar begrenzte Geschäftsfunktion ab.
- Ein in sich abgeschlossenes Stück Software, dass für alle Aspekte seiner Funktionalität selbsttätig verantwortlich ist. 
- Ein Microservice sollte eine REST-Schnittstelle anbieten.
- Ein Microservice ist in seinem Umfang an Code klein und überschaubar.

## Mixins

## Monomorphisation

*Monomorphisation* in der Informatik bedeutet die Übersetzung einer polymorphen Funktion in eine monomorphe Funktion, indem für jeden möglichen Datentyp eine spezialisierte Funktion erzeugt wird. 

*Monomorphisation* wird in vielen Sprachen umgesetzt. Zu nennen sind hier z.B. C++, Rust, C#.

```c++
// Beispiel für Monomorphisation in C++
#include <iostream>

// generic function template which is a generic 
// and polymorphic function. The compiler automatically
// creates two functions getMax(...) in our example as
// therre are two appearances of T: int and float
template <class T> T getMax(T& a, T& b)
{
   return (a > b ? a : b);
}

int main()
{
   int iFirst = 5; 
   int iSecond = 6;
   int iResult = getMax<int>(iFirst, iSecond);

   std::cout << "The greatest int " << iResult << "\n";

   float fFirst = 5.1;
   float fSecond = 6.1;
   float fResult = getMax<float>(fFirst, fSecond);

   std::cout << "The greatest float " << fResult << "\n";
}
```

Der resultierende, übersetzte Code sieht dann entsprechend so aus.

```c++
#include <iostream>

template <class T> T getMax(T& a, T& b)
{
   return (a > b ? a : b);
}

/* First instantiated from: insights.cpp:12 */
#ifdef INSIGHTS_USE_TEMPLATE
template<>
int getMax<int>(int & a, int & b)
{
  return (a > b ? a : b);
}
#endif


/* First instantiated from: insights.cpp:18 */
#ifdef INSIGHTS_USE_TEMPLATE
template<>
float getMax<float>(float & a, float & b)
{
  return (a > b ? a : b);
}
#endif


int main()
{
  int iFirst = 5;
  int iSecond = 6;
  int iResult = getMax<int>(iFirst, iSecond);
  std::operator<<(std::operator<<(std::cout, "The greatest int ").operator<<(iResult), "\n");
  float fFirst = static_cast<float>(5.0999999999999996);
  float fSecond = static_cast<float>(6.0999999999999996);
  float fResult = getMax<float>(fFirst, fSecond);
  std::operator<<(std::operator<<(std::cout, "The greatest float ").operator<<(fResult), "\n");
}

```



## Move-Semantik

Eine *move*-Operation unterscheidet sich deutlich von einer *copy*-Operation. Eine *copy*-Operation kopiert die Elemente (bzw. den Inhalt) einer Datenstruktur von einer Quelle zu einem Ziel und belässt die Quelle in ihrem Originalzustand. Dies ist kein Problem bei z.B:  

```c++
int main()
{
	vector<int> src;  
	vector<int> dest;  

	dest = src;  

	// Was aber tun bei:  
	Ifstream src(file);  

	Ifstream dest = src ;
}

```

Eine Definition der *move*-Operation kann lauten:  

*Eine ‚move‘ Operation ist dann gegeben, falls ein Kopieren eines Objektes so realisiert wird, dass das Original nicht wieder benötigt wird. Das Original wird dann automatisch gelöscht und kann nicht mehr verwendet wird. Der Inhalt ist quasi von der Quelle zum Ziel bewegt worden, wobei die Quelle danach nicht mehr existiert.*  

Diese *Move*-Semantik ist in der Programmiersprache C++ zum erstenmal in C++11 spezifiziert. Modernere Sprachen wie Rust haben die *Move*-Semantik von Anfang an eingebaut. 

## Monaden 

Werden in der funktionalen Programmierung verwendet, um aus kleinen Bauteilen bequem größere Module zu komponieren.  

## Mutable/Immutable

In Sprachen wie Java, Python oder Rust stolpert man zwangsläufig über die Begriffe *mutable* und *immutable*. In Rust gibt es sogar das Schlüsselwort *mut*. 

In kurzen Worten: *Mutable* Objekte können verändert werden. Während *immutable* Objekte nicht verändert werden können. 

```rust
/// Example of mutable/immutable
fn main() 
{
   // let a = 0; --> this won't compile as 'a' is immutable
   // error[E0384]: cannot assign twice to immutable variable 'a'
   let mut a = 0; // ok, 'a' is mutable and can be changed 
   let r = loop 
   {
      a = a + 1;  // here 'a' changes
      if a == 10 
      {
         break a
      }
   };
}
```

## Myths and Facts

Often there are a lot of myths by people concerning C++ in embedded world. As an introduction about myths and (as the opposite) facts I recommend to have a look at [39] and [40].

## Narrowing Conversion

Eine *Narrowing Conversion* ist eine implizite Konvertierung in C/C++ mit Verlust der Datengenauigkeit. Die Konvertierung erfolgt von einem Integer-Typ oder einem *unscoped enum* in einen Integer Typ. Dies kann zu bösen Überraschungen führen und sollte nach Möglichkeit verhindert werden. 

```c++
#include <iostream>

void narrowingConversion(int i)
{
   std::cout << "int: " << i << std::endl;
}

int main()
{ 
   std::cout << std::boolalpha << std::endl;
    
   double d(1.234);
   std::cout << "double: " << d << '\n';
   // 1) narrowing conversion from double to int
   narrowingConversion(d);  
    
   std::cout << std::endl;
    
   bool b(true);
   std::cout << "bool: " << b << '\n';
   // 2) narrowing conversion from bool to int
   narrowingConversion(b); 
    
   return 0;
}

//> double: 1.234
//> int: 1

//> bool: true
//> int: 1
```

## Nebenläufigkeit

## Nullhypothese

In der Statistik bezeichnet man eine Aussage bzw. einen Standpunkt, dass es keinen Zusammenhang zwischen zwei gemessenen Phänomenen gibt bzw. ein bestimmter Zusammenhang nicht besteht, als *Nullhypothese*.

## Objektorientierte Programmierung

Mit Hilfe der *objektorientierten Programmierung* wird versucht, Objekte aus der realen Welt und ihre Interaktion „originalgetreu“ abzubilden.  

Man erschafft sogenannte Klassen, in denen diese Eigenschaften von Objekten und die Funktionen, die auf diese Objekte angewendet werden können (sogenannte Methoden), festgelegt werden. Man hat nun die Möglichkeit, viele verschiedene Objekte dieser Klassen zu erzeugen, den Eigenschaften unterschiedliche Werte zuzuweisen und die Methoden anzuwenden. Objekte werden auch Instanzen (einer Klasse) genannt.  

Klassen können ihre Eigenschaften und Methoden zudem vererben. Sie dienen in diesem Zusammenhang als Basisklasse, ihre Erben nennt man abgeleitete Klassen.  

Ein weiteres Prinzip von objektorientierten Sprachen ist die Kapselung. Die Sichtbarkeit von Eigenschaften und Methoden lässt sich über Schlüsselwörter festlegen. Dabei unterscheidet man oft zwischen öffentlich („public“), geschützt („protected“) und privat („private“). Man nennt private Eigenschaften oder Methoden auch gekapselt.  

## O-Notation

<https://de.wikipedia.org/wiki/Landau-Symbole>

## Opcode

<https://en.wikipedia.org/wiki/Opcode>  

## Package

## Pointers to Functions

## Polymorphismus

*Polymorphismus* ist eigentlich ein Begriff aus der Biologie/Genetik und bedeutet das Auftreten mehrere Genvarianten innerhalb einer Population. Übersetzt bedeutet *Polymorphismus* 'Vielgestaltigkeit'.

In der Informatik wird *Polymorphismus* für die generische Programmierung verwendet, z.B in C++ mit Hilfe von Templates oder in Rust mit Hilfe von Generics. *Polymorphismus* ist ein wichtiges Feature in objektorientierten Sprachen.

In C++ gibt es mehrere Arten von *Polymorphismus*. 

- Methoden überschreiben
- Operatoren und/oder Funktionen überladen
- Virtuelle Funktionen

Ein kleines Beispiel zum Überladen von Funktionen in C++.

```c++
// Beispiel für Polymorphismus in C++
#include <iostream>

// function overloading
// functions can be overloaded by 
// - change in number of arguments
// - change in type of arguments
void foo(int x) { std::cout << "value of x is " << x << "\n"; }
void foo(float x) { std::cout << "value of x is " << x << "\n"; }
void foo(char x) { std::cout << "value of x is " << x << std::endl; }

int main()
{
   // usage of polymorphism idiom
   foo(5);
   foo(4.5f);
   foo('c');
}

// value of x is 5
// value of x is 4.5
// value of x is c
```

## Predicates

## Principle of Least Astonishment

Software sollte die Nutzenden nicht vor Überraschungen stellen. 

## Programming Model

Various languages have various programming models: **object-oriented**, **functional**, **procedural**. There are even more but these are the most-used ones. Object-oriented means the language supports encapsulation (data and behaviour are packaged together), inheritance through classes (object types are organized in a class tree), and polymorphism (object can take many forms).  

## Promotion Trait

Die Idee eines Promotion Trait ist folgende:Bestimme den Rückgabetyp des Funktions-Template abhängig von seinen Eingabeargumenten dadurch, dass für jede Typkombination ein Rückgabetyp hinterlegt ist.  

Die Idee lässt sich einfach in C++ an einer generischen Funktion darstellen.  

??? add(T1 first, T2 second) 
{
	return first + second; 

}

Der Rückgabetyp muß von den Argumenten abhängig sein, um generisch zu sein.
**Lösung mit Promotion Trait.**

```c++

#include <iostream>

template<typename T1, typename T2> class PromotionTrait  
{

};  

template<typename T> class PromotionTrait<T, T>
{
	typedef T Result;
};

template<> class PromotionTrait<int, double>
{
	typedef double Result;  
};

template<> class PromotionTrait<double, int>
{
	typedef double Result;
};
 
template<typename T1, typename T2> inline typename PromotionTrait<T1, T2>::Result add(T1 first, T2 second)
{
	return first + second;  
}

  
int main()
{
	std::cout << "add(1, 1)= " << add(1, 1) << std::endl;
	std::cout << "add(2.1, 1.5)= " << add(2.1, 1.5) << std::endl;
	std::cout << "add(1, 2.1)= " << add(1, 2.1) << std::endl;
	std::cout << "add(3.1, 2)= " << add(3.1, 2) << std::endl;
}
```

Es gibt allerdings zwei entscheidende Nachteile:  

-  	Die Kombinationsmöglichkeiten steigen in der Größenordnung n*n, wenn n die Anzahl der Datentypen ist.  	
-  	Für jeden neuen Datentyp müssen alle Spezialisierungen zweimal implementiert werden.  	

Das geht deutlich einfacher mit dem in C++11 eingeführten Schlüsselwort *decltype.*  

## Qualified and Non-Qualified Bezeichner

Ein ‚Qualified Name‘ ist ein Bezeichner, welcher den Gültigkeitsbereich spezifiziert. Ohne Gültigkeitsbereich bezeichnet man einen Bezeichner als ‚Non-Qualified Name‘.

```c++
#include <iostream>

int main()
{
	std::cout << „Hallo Welt“ << std::endl;  
}
```

Im obigen Beispiel benutze ich die ‚Qualified‘ Bezeichner ‚std::cout‘ und ‚std::endl‘. Würde ich einfach ‚cout‘ bzw. ‚endl‘ benutzen, dann spricht man von ‚Non-Qualified‘ Bezeichner.  

## Race Conditions

Eine Konstellation, in dem das Ergebnis einer Operation von der zeitlich verschränkten Ausführung von bestimmten anderen Operationen abhängt.  

## Reaktive Programmierung

Reaktive Programmierung besagt, dass eine Anwendung jederzeit auf Stimuli reaktionsfähig sein soll. Dazu gehört Interaktivität, Fehlertoleranz und Skalierbarkeit und, ganz wichtig, die Anwendung soll ereignisgesteuert („event-driven“) sein.  

Eine Anwendung muss also jederzeit auf Ereignisse reagieren und diese bearbeiten können. In der Praxis realisiert man dies durch eine asynchrone, nicht-blockierende API. Das Gegenteil davon wäre eine synchrone, blockierende API.  

Ein Ansatz für eine asynchrone, nicht-blockierende API ist die Verwendung von Futures in Kombination mit Callbacks [2].    

 [1]	<http://www.reactivemanifesto.org/> (aufgerufen am 5.12.13)

 [2]	<http://www.heise.de/developer/artikel/Reactive-Programming-vom-Hype-zum-Praxiseinsatz-2059533.html> (aufgerufen am 5.12.13)

## Referenzielle Transparenz

In der Programmierung bezeichnet die *referenzielle Transparenz,* daß ein Ausdruck (eine Funktion) immer den gleichen Wert zurückgibt. Dies macht man sich bei Reinen Funktionen zunutze. *Reine Funktionen* sind Funktionen, die immer den gleichen Wert zurückgeben, wenn sie mit den gleichen Argumenten aufgerufen werden. 

## Regular und SemiRegular Datentypen

In C++ bezeichnet man einen Datentyp, der sich wie ein *int* verhält ("*behaves like an int*"), als *Regular*. Er kann kopiert werden und das Ergebnis des Kopierens ist unabhängig vom Original. 

Ein *Semi-Regular* Datentyp muss die Sechser-Regel umsetzen (*rule-of-six*) und zusätzlich eine *swap*-Methode unterstützen.

## Reine Funktionen

Wie in *Referenzielle Transparenz* schon erwähnt: Reine Funktionen zeichnen sich aus durch: 

- Erzeugen immer dasselbe Ergebnis, wenn sie die gleichen Argumente erhalten.
- Besitzen keine Seiteneffekte.
- Verändern nie den globalen Zustand des Programms. 

```c++
// This file shows examples for Reine Funktionen
#include <iostream>

 // Classical recursive function 
int powFunc(int m, int n)
{ 
    if (n == 0) return 1; 
	return m * powFunc(m, n-1); 
}

// Meta-Programming executed at compile-time
template<int m, int n> struct PowMeta
{
	static int const value = m * PowMeta<m,n-1>::value;
};

template<int m> struct PowMeta<m,0>
{
	static int const value = 1;
};

// constexpr function can run at compile time or run time
constexpr int powConst(int m, int n)
{ 
	int r = 1;
	for (int k=1; k<=n; ++k) 
    {
        r*= m;
    }
	return r;
}

int main()
{
	std::cout << powFunc(2,10) << std::endl;              
	std::cout << PowMeta<2,10>::value << std::endl;        
	std::cout << powConst(2,10) << std::endl;
}
```

## Resource acquisition is initialization (RAAI)

*RAII* steht für *Resource acquisition is initialization* oder auf Deutsch *Ressourcenbelegung ist Initialisierung.* Es bezeichnet ein Programmiermittel, um die Steuerung der Belegung und Freigabe von Betriebsmitteln an den Gültigkeitsbereich von Variablen zu koppeln. Ein Beispiel in C++ sind z.B. Smart Pointer, welche automatisch ein Ihnen zugewiesenes dynamisches Objekt beim Aufruf des Destruktors wieder freigeben.  

Die zentrale Idee dahinter: Wenn du auf eine Resource aufpassen sollst, verpacke diese in eine Klasse. Benutze den Konstruktor, um die Resource zu intialisieren. Benutze den Destruktor, um die Resource aufzuräumen.  

## Rule of three

Die *rule-of-three* ist innerhalb der Sprache C++ eine Regel, die besagt, falls mindestens eine der folgenden Operationen (explizit vom Programmierer) implementiert wird, alle der folgenden Operationen implementiert werden sollten.

-  	Destruktor (destructor)
-  	Kopier-Konstruktor (copy constructor)
-  	Zuweisungsoperator-Konstruktor (copy assignment operator)

## Rule of five

Die *Rule of three* kann aufgrund der neu hinzugekommenen *move-Operation* in C++11 auf die *Rule of five* erweitert werden. Bei der *rule-of-five* sollten folgende Operationen explizit implementiert werden. 

-  	Destruktor (destructor)
-  	Kopier-Konstruktor (copy constructor)
-  	Move-Konstruktor (move construtor)
-  	Kopier-Zuweisungsoperator Konstruktor (copy assignment operator)
-  	Move-Zuweisungsoperator Konstruktor (move assignment operator)

## Rule of six

Bei der *rule-of-six* sollten folgende Operatoren explizit implementiert werden.

- ein Default-Konstruktor
- ein Copy-Konstruktor
- ein Copy-Zuweisungsoperator
- ein Move-Konstruktor
- ein Move-Zuweisungsoperator
- ein Destruktor

```c++
/// Sample class implementing the rule-of-six
class Vertigo
{
public:
   // Default Konstruktor
   Vertigo() {}                  
   // Copy-Konstruktor
   Vertigo(const Vertigo&) {}
   // Copy-Zuweisungsoperator
   Vertigo& operator=(const Vertigo&) {return *this;}
   // Move-Konstruktor
   Vertigo(const Vertigo&&) {}
   // Move-Zuweisungsoperator
   Vertigo& operator=(const Vertigo&&) {return *this;}
   // Destruktor
   ~Vertigo() {}
};
```

## Scout Rule

Alte Pfadfinderregel: Hinterlasse den Zeltplatz (hier: Codebase) sauberer als du ihn vorgefunden hast. Wenn man also sowieso an einer Klasse arbeitet, dann versuche sie gleich mit aufzuräumen, also z.B. veraltete Kommentare löschen oder eine zu lange Methode in mehrere kurze aufzuteilen. 

## Scope

Scopes sind Sichtbarkeitsbereiche (oder Gültigkeitsbereiche) für Bezeichner.

## SFINAE

SFINAE steht für Substitution Failure Is Not An Error und ist eine Programmiertechnik in C++. Wenn bei der Ersetzung von Template-Parameters ein Fehler auftritt, so wird dies nicht als Kompilierfehler gewertet, solange es eine Ersetzung gibt, die gültig ist. Alle fehlerhaften Instanziierungen aufgrund von fehlerhaften Template-Parametern werden einfach aus der Menge aller Ersetzungen einfach entfernt. 

## Smart Pointer

Ein Smart Pointer verhält sich grundsätzlich wie ein normaler Zeiger. Er speichert eine Adresse, über die auf ein dynamisches reserviertes Objekt zugegriffen werden kann. Er wird jedoch als intelligent bzw. smart bezeichnet, weil er automatisch im Destruktor das Objekt mit ‚delete‘ freigibt. Das setzt natürlich voraus, dass das Objekt zuvor mit ‚new‘ erzeugt wurde. Der große Vorteil ist, dass man die Speicherfreigabe nicht vergessen kann, da diese automatisch stattfindet. In C++ gibt es den Smart Pointer std::auto_ptr.  

## SOLID  

Der Begriff SOLID steht für:  

-  	**S** Single Responsibility Principle
-  	**O** Open/Closed Principle
-  	**L** Liskov Substitution Principle
-  	**I** Interface Segregation Principle
-  	**D** Dependency Inversion Principle

Dieses Programmierparadigma soll die Software sowohl benutzbarer machen als auch einfacher zu erweitern und sollte im Schnittstellen-Design (Interface-Design) berücksichtigt werden.

### Single Responsibility Principle

Das SRP besagt, dass es für ein Modul (z.B. eine Klasse) nur einen einzigen Grund für Änderungen gebenn soll. Damit ist gemeint, dass das Modul nur einem einzigen Akteur gegenüber verantwortlich sein soll. 

### Open/Close Principle

Das Verhalten einer Klasse sollte erweiterbar sein, ohne sie dafür modifizieren zu müssen. Dies können wir z.B. durch Verwendung von Polymorphie erreichen oder auch durch die Anwendung von Design Patterns (z.B. Behavioral Pattern - Verhaltensmuster).

### Liskov Substitution Principle

Das Liskovsche Substitutionsprinzip oder Ersetzbarkeitsprinzip ist ein Idiom aus der Objektorientierten Programmierung und besagt, dass ein Programm, das Objekte der Basisklasse B verwendet, auch mit Objekten der von B abgeleiteten Klasse C korrekt funktionieren muß.

Oder anders ausgedrückt: Subtypen müssen sich so wie ihr Basistyp verhalten. Sie dürfen also die Funktionalität des Basistyps nur erweitern, aber nicht verändern. 

```c++
// This file shows examples for Liskovsches Substitutionsprinzip (Type Erasure) in C++ 
#include <iostream>
#include <string>

class Base
{
public:
    virtual void printName() = 0;
}; 

class Child : public Base
{
public:
    void printName() { std::cout << "Child" << std::endl; }
}; 

void whois(Base* type)
{ 
    if (type)
    {
        type->printName();
    }
}

int main()
{
    Child child; 
    
    whois(&child);
}
```

### Interface Segregation Principle

Das Interface Segregation Principle besagt, dass ein Client nur von den Details eines Service abhängig sein sollte, die er auch benötigt. Beispielsweise sollte eine Klasse, die ein Interface implementiert, nur jene Methoden davon implementieren, die für den Anwendungsfall auch wirklich nötig sind.

### Dependency Inversion Principle

Um ein gut wartbares und widerstandsfähiges System zu entwickeln, sollten wir uns überlegen, welche Codeteile besonders von Änderungen betroffen sein könnten. Eine Persistenz ist hier ein anschauliches Beispiel: Anstatt sich darauf zu verlassen, dass wir immer auf ein lokales Dateisystem schreiben, sollten wir diesen Teil extrahieren und in eine Low-Level-Klasse verlagern. Wenn wir z.B. unsere Persistenz irgendwann in einem Cloud-Bucket speichern wollen, dann miüssen wir die Low-Level-Klasse nur austauschen, ohne die High-Level-Klasse anpassen zu müssen. 

Damit die High-Level-Klasse sich nicht der Implementationsdetails der Abhängigkeit (Dependency) gewahr sein muss, implementieren wir ein Interface für die Persistenz und kehren so die Abhängigkeit um (Inversion). Wichtig: Die Abhängigkeit geht immer in Richtung High zu Low - eine Low-Level-Klasse ist niemals von einer High-Level-Klasse abhängig. 

## Static Methods

Beispiele: C++, Java 8

## Statische Programmiersprachen

Bei statischen Programmiersprachen nimmt schon der Compiler Typüberprüfungen vor, zum Beispiel kann man eine Adresse nicht mit 7 multiplizieren.  

In anderen Worten: Jedem Namen wird ein fester Typ zugewiesen und der Compiler löst die Namen auf, wenn er ein lauffähiges Programm erzeugt. Zur Laufzeit liegen keine Meta-Informationen mehr vor, sodass ein generisches Arbeiten aufwendig neu einzuführen ist (C++ Templates, Generics bei Java/C#).  

Während dynamische Programmiersprachen erst zur Laufzeit prüfen, ob eine Operation auf einem Objekt möglich ist oder nicht.  

Beispiele für statische Programmiersprachen: C++, Java

## Strong Types (Starke Datentypen)

Der Vorteil von starken Typen ist, dass sie implizite Konvertierungen ausschalten. Vor allem in C/C++ sind implizite Konvertierungen oft von Nachteil (wobei viele Entwickler es eher als Vorteil sehen; vor allem C-Entwickler). Leider hat C++ implizite Konvertierungen von C geerbt. Es gibt allerdings inzwischen verschiedene Strong-Types-Bibliotheken, bei denen sich ein Blick lohnt: Björn Fahllers *strong_type*, Jonathan Müllers *type_safe* oder auch Jonathan Boccaras *NamedType*.

## Syntactic Sugar

Syntactic Sugar ist ein Idiom aus der Programmierwelt und besagt, dass mithilfe ebendiesem Syntactic Sugar Dinge einfacher gelesen oder ausgedrückt werden können. Es macht ein Programm 'süßer' (ich würde sagen: abstrakter) und für das menschliche Gehirn besser verarbeitbar. 

## Template Spezialisierung

In C++ unterscheidet man zwischen allgemeinen Templates und spezialisierten Templates. Und zwar bei Klassen-Templates als auch bei Funktions-Templates. 

Ein Beispiel für die verschiedenen Möglichkeiten der Template-Klassenspezialisierung.

```c++
// Example of template specialisation
#include <iostream>
#include <cstdlib>

/// primäres oder allgemeines Template
/// NxM Matrix
template <typename T, int Line, int Column>     
class Matrix{};

/// teilweise Spezialisierung
/// hier: 3x3 Matrix
template <typename T>                           
class Matrix<T, 3, 3>{};

/// vollständige Spezialisierung
/// hier: 3x3 Matrix bestehend aus int-Werten
template <>                                     
class Matrix<int, 3, 3>{};

int main()
{
   std::cout << "Hallo" << std::endl;
   
   /// benutzt die vollständige Spezialisierung - class Matrix<int, 3, 3>{};
   Matrix<int, 3, 3> m1;         

   /// benutzt die teilweise Spezialisierung - class Matrix<T, 3, 3> 
   Matrix<double, 3, 3> m2;       

   /// benutzt das primäre Template - class Matrix<T, Line, Column>
   Matrix<std::string, 4, 3> m3;  
}
```

Welche Variante wählt nun der Compiler jeweils aus? Grundsätzlich gilt: der Compiler verwendet die am meisten spezialisierte Variante. Ansonsten das primäre Template.

Dito für Funktions-Template. Mit einem Unterschied: eine teilweise Spezialisierung gibt es nicht. 

```c++
// Example of template specialisation
#include <iostream>
#include <cstdlib>
#include <string>

/// primäres oder allgemeines Template
template <typename T> std::string getTypeName(T)
{
   return "unknown type";
}

/// vollständige Spezialisierung mit int
template <> std::string getTypeName<int>(int)
{
   return "int";
}

/// vollständige Spezialisierung mit double
std::string getTypeName(double)
{ 
   return "double";
}

int main()
{ 
   /// allgemeines Template, da keine Spezialisierung für bool vorhanden
   std::cout << "getTypeName(true): " << getTypeName(true) << std::endl;
   
   /// vollständige Spezialisierung mit int
   std::cout << "getTypeName(4711): " << getTypeName(4711) << std::endl;
   
   /// vollständige Spezialisierung mit double
   std::cout << "getTypeName(3.14): " << getTypeName(3.14) << std::endl;
    
   std::cout << std::endl;
   
   return 0;
}
 
///> getTypeName(true): unknown type
///> getTypeName(4711): int
///> getTypeName(3.14): double
```

## Traits

*Traits* in C++ sind Klassen-Templates, die Eigenschaften von generischen Datentypen ermitteln. In C++11 wurde dafür der *<type_traits>* Header eingeführt. 

```c++
//Type Traits Beispiel 
#include <iostream>
#include <type_traits>

using namespace std;

template <typename T> void getGenericType()
{
    cout << "is_void<T>::value: " << is_void<T>::value << endl;
    cout << "is_array<T>::value: " << is_array<T>::value << endl;
    cout << "is_pointer<T>::value: " << is_pointer<T>::value << endl;
    cout << "is_null_pointer<T>::value: " << is_null_pointer<T>::value << endl;
    cout << "is_enum<T>::value: " << is_enum<T>::value << endl;
    cout << "is_class<T>::value: " << is_class<T>::value << endl;
    cout << "is_lvalue_reference<T>::value: " << is_lvalue_reference<T>::value << endl;
    cout << "is_rvalue_reference<T>::value: " << is_rvalue_reference<T>::value << endl;
  
    cout << endl;
}

int main()
{
    getGenericType<void>();              
    getGenericType<int []>();
    getGenericType<int*>();
    getGenericType<std::nullptr_t>();
    class A{int a;};
    getGenericType<A>();
    enum E{e= 1,};
    getGenericType<E>();
    getGenericType<int&>();             
    getGenericType<int&&>();            
   
    return 0;
}

```

In Rust ähneln Traits Interfaces (Schnittstellen) in anderen Sprachen. In Rust benutzen wir Traits, um gemeinsames Verhalten in abstrakter Art und Weise zu definieren. Dafür gibt es das Schlüsselwort *trait*. 

```rust
// define a trait called Summary and a method called summarize
// of course you can define many methods
// think of an abstract (pure) interface in other languages
pub trait Summary 
{
    fn summarize(&self) -> String;
}

// define a struct called News Article
pub struct NewsArticle 
{
    pub headline: String,
    pub location: String,
    pub author: String,
    pub content: String,
}

// and let it implement our Trait Summary
impl Summary for NewsArticle 
{
    fn summarize(&self) -> String
    {
        format!("{}, by {} ({})", self.headline, self.author, self.location)
    }
}

fn main() 
{
    // implement NewsArticle
    let news = NewsArticle
    {
        headline: String::from("Now hotter than ever"),
        location: String::from("Panama"),
        author: String::from("Erich"),
        content: String::from("too much literacy"),
    };

    // use Trait definition to output the news
    println!("My first news: {}", news.summarize());
}
```

## Tuples

Ein Tupel besteht aus einer Liste von Elementen. Die Elemente können sich auch voneinander unterscheiden. Tuples sind z.B. in Python Teil der Sprache. Im Gegensatz zu Listen sind Tupels in Python nicht veränderbar (modal).  

## Turing-Vollständigkeit

## Type Checking

## Type Deduction

Falls Typen nicht explizit deklariert werden, muß der Compiler für eine entsprechende Typ-Ableitung (*Type Deduction*) sorgen. In C++ gab es *Type Deduction* bis zum C++11 Standard nur über Funktions-Schablonen (*Function Templates*).

In C++11 gibt es zwei neue Möglichkeiten der *Type Deduction*:  

-  	*auto*
-  	*decltype*

Das Gefährliche bei *Type Deduction* ist, dass u.U. nicht offensichtlich ist, welcher Typ implizit benutzt wird. Deshalb sollte man sich als Entwickler über die Arten von *Type Deduction* in seiner Sprache bewusst werden und Bescheid wissen.  

## Type Erasure

*Type Erasure* erlaubt es dir, verschiedene Datentypen mit einem generischen Interface zu verwenden. Wörtlich genommen bedeutet *Type Erasure*, dass die Typinformation reduziert wird. In C z.B. mit Hilfe von *void*. Gut zu sehen in der *std::qsort* Definition. 

```c
void qsort( void *ptr, std::size_t count, std::size_t size, /*c-compare-pred*/* comp );
extern "C" using /*c-compare-pred*/ = int(const void*, const void*); // exposition-only
// see https://en.cppreference.com/w/cpp/algorithm/qsort
```

In C++ besser gelöst mit Sprachunterstützung z.B. mit Hilfe der Objektorientierung und des *Liskovschen Substitutionsprinzip*. Im folgenden Beispiel implementiert die Klasse *Child* das Interface *Base*. Dadurch kann Child als Parameter für die Funktion whois(...) verwendet werden. Dieses Prinzip wird *Liskovsches Substitutionsprinzip* genannt und stell *Type Erasure* mit Objektorientierung dar. 

```c++
// This file shows examples for Liskovsches Substitutionsprinzip (Type Erasure) in C++ 
#include <iostream>
#include <string>

class Base
{
public:
    virtual void printName() = 0;
}; 

class Child : public Base
{
public:
    void printName() { std::cout << "Child" << std::endl; }
}; 

void whois(Base* type)
{ 
    if (type)
    {
        type->printName();
    }
}

int main()
{
    Child child; 
    
    whois(&child);
}
```

Oder mit Hilfe von Templates. Mit Hilfe von *std::function* kann man *Type Erasure* (und *Duck Typing*) auch seit C++11 nachbauen. *std::function* nimmt dabei im unteren Beispiel ein Funktionsobjekt, welches zwei double als Parameter und ein double als Rückgabewert implementiert. Was genau dieses Funktionsobjekt ist, darum kümmert sich *std::function* nicht. Am Ende akzeptiert *std::function* verschiedene Funktionsobjekte und reduziert (Type Erasure) ihre Typinformation. 

```c++
// This file shows examples for Type Erasure using Template Programming 
// aus https://www.heise.de/developer/artikel/C-Core-Guidelines-Type-Erasure-4158206.html
#include <cmath>
#include <functional>
#include <iostream>
#include <map>

double add(double a, double b)
{
    return a + b;
}

struct Sub
{
    double operator()(double a, double b)
    {
        return a - b;
    }
};

double multThree(double a, double b, double c)
{
    return a * b * c;
}

int main()
{ 
    using namespace std::placeholders;                       

    std::cout << std::endl;

    std::map<const char , std::function<double(double, double)>> dispTable
    {  
        {'+', add },                                 
        {'-', Sub() },                               
        {'*', std::bind(multThree, 1, _1, _2) },     
        {'/',[](double a, double b){ return a / b; }}
    }; 

    std::cout << "3.5 + 4.5 = " << dispTable['+'](3.5, 4.5) << std::endl;
    std::cout << "3.5 - 4.5 = " << dispTable['-'](3.5, 4.5) << std::endl;
    std::cout << "3.5 * 4.5 = " << dispTable['*'](3.5, 4.5) << std::endl;
    std::cout << "3.5 / 4.5 = " << dispTable['/'](3.5, 4.5) << std::endl;

    std::cout << std::endl;

}
```

## Type Inference

Type inference bezieht sich auf die automatische Typableitung (*type deduction*) bei Programmiersprachen. In C++ wurde Type Inference mit dem Standard C++11 eingeführt. Dafür wurden die Schlüsselwörter *auto* und *decltype* neu mit aufgenommen. Auch andere Sprachen, z.B. Kotlin, bieten Type Inference an. 

Sprachen, die Type Inference anbieten, sind weiterhin statisch typisiert, d.h. der Compiler muss zur Compilezeit den zu verwendenden Typ kennen. 

```c++
// C++ program to demonstrate working of auto and type inference 

using namespace std; 

int main() 
{ 
   auto x = 4; 
   auto y = 3.37; 
   auto ptr = &x; 
   cout << typeid(x).name() << '\n' 
        << typeid(y).name() << '\n' 
        << typeid(ptr).name() << '\n'; 

   return 0; 
} 

// out
// >> i
// >> d
// >> Pi
```

Im obigen Beispiel liefert *typeid* den Typ der Variablen. i steht für *Integer*, d für *Double* und Pi für einen *Pointer to Integer*. 

## Typing Model

Either **dynamic** or **static**. Dynamically typed means that types are bound at execution time rather than compile time.  

## Type Safe

## Type Template Parameter vs Non-Type Template Parameter

Ein *Non-Type Template Parameter* muss ein integraler Wert sein, der zur Compile-Zeit bekannt ist. Während der *Type Template Parameter* eine Typen-Variable ist.  

```c++
template<typename T, int N> Stack  
{
	T data[N];
	// ...
}
 
Stack<int, 100> meinStack;
```

Im obigen Beispiel muß man bei der Instantiierung von *‘Stack’* einen konstanten Wert für ‘N’ bereitstellen. Während ‘N’ ein Non-Type Template Parameter darstellt, ist ‘T’ ein Type Template Parameter.

## Variadische Funktion

In der Programmierung bezeichnet man Funktionen, die nicht bereits in ihrer Deklaration die Anzahl ihrer Parameter festgelegt haben, als *variadische Funktionen*. 

So wurden z.B. in C++11 variadische Templates in die Sprache eingeführt. Noch weiter vereinfacht wurde dieses Konzept in C++17 mit der Einführung von *Fold Expressions*.

```c++
// Example of C++11 variadic template
#include <iostream>
#include <cstdlib>

template<typename ... Args> bool istWahr(Args ... args)
{
   bool ergebnis = true; 
   const int size = sizeof...(args) + 2;
   int res[size] = {1,args...,2};

   for (int i=1; i<size-1; i++)
   {
      if (res[i] == false)
      {
         ergebnis = false;
      }
   }

   return ergebnis;
}
int main()
{
   std::cout << std::boolalpha;
   std::cout << "istWahr(true) " << istWahr(true) << std::endl;
   std::cout << "istWahr(true, false) " << istWahr(true, false) << std::endl;
}
```

## Verschattung (Shadowing)

Schaue ‚Verschattung‘ in Swift

## YAGNI

YAGNI steht für *You aren't* *gonna need it*. Es soll dem Entwickler sagen, dass nur umgesetzt werden soll, was tatsächlich nötig ist und gefordert wurde. Oft wird etwas implementiert/umgesetzt, was für das aktuelle Problem/für die aktuelle Anforderung nicht nötig ist. Die Idee dahinter ist oft, dass es ja irgendwann (vielleicht) doch von Nutzen sein kann bzw. später evtl. doch gefordert wird. Es wird also mehr umgesetzt, als dass tatsächlich gefordert ist. Das führt oft zu Problemen/Fehlern, da ohne Anforderung diese zusätzliche Implementierung nicht getestet wird und damit of Fehler in der Implementierung nicht erkannt werden (können). Siehe auch KISS.

## Literatur

[1]  Seven Languages in Seven Weeks, Bruce A. Tate, Pragmatic Programmers

[2] <http://www.stroustrup.com/C++11FAQ.html>

[3] <http://www.open-std.org/JTC1/SC22/WG14/www/docs/n1516.pdf>

[4] <http://gcc.gnu.org/projects/cxx0x.html>

[5] <http://msdn.microsoft.com/en-us/library/dd465215.aspx>

[6] <http://blogs.msdn.com/b/vcblog/archive/2010/04/06/c-0x-core-language-features-in-vc10-the-table.aspx>

[7] http://clang.llvm.org/cxx_status.html

[8] C++11, Rainer Grimm, Addison-Wesley

[9] <http://www.boost.org/doc/libs/1_50_0/libs/smart_ptr/shared_ptr.htm>, (abgerufen am 29.Juni 2012)

[10]  <https://wiki.apache.org/stdcxx/C++0xCompilerSupport>

[11] C++11 – auch ein Stimmungsbild, heise developer

[12] Simpler Multithreading in C++0x, <http://www.devx.com/SpecialReports/Article/38883/0/page/1>

[13] Anthony Williams: An Introduction to Variadic Templates in C++0x,  <http://www.devx.com/cplus/Article/41533>

[14] Weniger ist mehr, Einführung in Googles Programmiersprache Go, Jörg Walter, c’t 2011, Heft 18

[15] An introduction to programming in Go, Caleb Doxsey, 2012, <http://www.golang-book.com/>

[16] Peter Kaiser, Johannes Ernesti: Python, <http://openbook.galileocomputing.de/python/index.htm#_top>

[17] Visual Studio 2013 Available Now!, <http://blogs.msdn.com/b/vcblog/archive/2013/10/17/visual-studio-2013-available-now.aspx>, (abgerufen am 18. Oktober 2013)

[18] The future of C++, Herb Sutter, <http://channel9.msdn.com/Events/Build/2013/2-306> (abgerufen am 18. Oktober 2013)

[19] C++ Truths Blog, Sumant Tambe, <http://cpptruths.blogspot.de/> (abgerufen am 14. März 2014)  

[20] More C++ Idioms, Wikibook, <http://en.wikibooks.org/wiki/More_C++_Idioms> (abgerufen am 14. März 2014)

[21] google-styleguide, <https://code.google.com/p/google-styleguide/> (abgerufen am 16. Mai 2014)

[22] C++ Core Guidelines, <https://github.com/isocpp/CppCoreGuidelines> (abgerufen am 2. Februar 2016)  

[23] () -> Unit = {}, Die neue Programmiersprache für Java und mehr, Teil 3: Funktionale Programmierung, c't 23/2017, Christian Helmbold  

[24] Musser, David R.; Stepanov, Alexander A., Generic Programming, 1989

[25] Value categories, https://en.cppreference.com/w/cpp/language/value_category (abgerufen am 13. November 2019)

[26] lvalues, rvalues, glvalues, prvalues, xvalues, help!, https://blog.knatten.org/2018/03/09/lvalues-rvalues-glvalues-prvalues-xvalues-help/ (abgerufen am 13. November 2019)

[27] Type Inference in C++ (auto and decltype), https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/, abgerufen am 18. Dezember 2019

[28] How not to be wrong, Jordan Ellenberg, 2014

[29] Gödel, Escher, Bach - ein endloses geflochtenes Band, Douglas R. Hofstadter, 2006

[30] https://cppinsights.io/, abgerufen am 20.04.2020

[31] CPP Reference, https://cppreference.com

[32] Björn Fahller, strong_type, https://github.com/rollbear/strong_type

[33] Jonathan Müller, type_safe, https://github.com/foonathan/type_safe

[34] Jonathan Boccara, NamedType, https://github.com/joboccara/NamedType

[35] Cooperative vs. Preemptive: a quest to maximize concurrency power, Bobby Priambodo, https://medium.com/traveloka-engineering/cooperative-vs-preemptive-a-quest-to-maximize-concurrency-power-3b10c5a920fe, abgerufen am 05. März 2021

[36] Arithmetische Operationen in C++, https://en.cppreference.com/w/cpp/language/operator_arithmetic, abgerufen am 21. Mai 2021

[37] Robert C. Martin, Clean Code. Refactoring, Patterns, Testen und Techniken für sauberen Code. mitp, 2009. 

[38] https://carstenwindler.de/software-quality, abgerufen am 24.02.2023

[39] C++ Myths, Rainer Grimm, https://www.modernescpp.com/index.php/myths, abgerufen am 09. Mai 2023

[40] C++ Facts, Rainer Grimm, https://www.modernescpp.com/index.php/facts, abgerufen am 09. Mai 2023

[41] Technical Report on C++ Performance https://www.open-std.org/jtc1/sc22/wg21/docs/TR18015.pdf

[42] C++ Core Guidelines, https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines, abgerufen am 09. Mai 2023









  



  



  



  
