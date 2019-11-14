# Idioms

[TOC]



## Aggregation

Die Aggregation bezeichnet in der objektorientierten Welt eine Beziehung zwischen (meist) zwei Objekten. 

![](F:\Martin\Projects\Programmieren\UML\Aggregation.png)

## Aspektorientierte Programmierung

## Closure

Closures sind Funktionen, die auf nicht-lokale Variablen auch dann noch zugreifen können, wenn der dazugehörige Gültigkeitsbereich (vgl. *Scope*) nicht mehr existiert. Vereinfacht gesagt merkt sich eine Closure bei der Definition nicht nur den auszuführenden Code, sondern ihre gesamte Umgebung. Siehe auch Closures in Bezug auf Lambda.

## Compiler

<https://en.wikipedia.org/wiki/Compiler>

## Composition

Die Komposition bezeichnet in der objektorientierten Welt einen Spezialfall der Aggregation. Die Komposition beschreibt (wie die Aggregation) die Beziehung zwischen einem Ganzen und seinen Teilen. Ein Objekt kann dabei nur Teil maximals eines Ganzen sein. 

![](F:\Martin\Projects\Programmieren\UML\Komposition.png)

## Concepts

Concepts in C++ sind Prädikate zur Compile-Zeit. Sie werden während der Übersetzung evaluiert und liefern einen Wahrheitswert. 

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

## Daemon

Der Begriff ‚Daemon’ wird hauptsächlich unter UNIX bzw. UNIX-artigen Betriebssystemem benutzt und bezeichnet einen Systemdienst. In anderen Worten: Ein Programm, das im Hintergrund abläuft und bestimmte Dienste zur Verfügung stellt.  

Benutzerinteraktionen finden nur auf indirektem Wege statt, z.B. über Pipes, Signale oder Sockets.  

Viele Daemon-Programme benutzen ein angehängtes ‚d‘, um sich als Daemon zu kennzeichnen, z.B. systemd oder syslogd.  

## Dangling Pointer

Bezeichnet in der Programmierung einen Zeiger, der auf einen nicht-initialisierten Speicher zeigt (nullptr) oder auf einen nicht mehr gültigen Speicher zeigt.  

## Deep/Shallow Copy

## Deklarative Programmierung

## Delegates  

## Delegating and inheriting constructors

*Delegating und inheriting constructors* sind zwei (unterschiedliche) Features, die in C++11 eingeführt wurden. Beide dienen hauptsächlich der Vermeidung von Code-Duplizierung und sind auch z.B. in Java bekannt.  

*Delegating constructors* erlauben es, Teile der Arbeit eines Konstruktors von einem anderen Konstruktor derselben Klasse ausführen zu lassen.  

*Inheriting constructors* erlauben es einer abgeleiteten Klasse, die Konstruktoren seiner Elternklasse zu vererben bzw. direkt zu verwenden anstatt sie nochmals zu deklarieren.  

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

## Bedarfsauswertung (Lazy Evaluation)

Bedarfsauswertung ist auch unter dem Begriff *Lazy Evaluation* bekannt. Imperative Programmiersprachen wie C++ kennen eigentlich nur die strikte Auswertung und eben nicht eine *Lazy Evaluation*.  

Bei der Bedarfsauswertung wird der Ausdruck erst bei Nachfrage evaluiert. Vorteile sind:

-  	Ausdrücke werden nur dann evaluiert, wenn sie benötigt werden. Das spart Zeit und Speicher.  	
-  	Unendliche Datenstrukturen können formuliert werden, von denen zur Laufzeit nur endlich viele Elemente angefordert werden.

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

## Idempotenz

In der Programmierung wird ein Stück Code als idempotent bezeichnet, falls bei mehrfach hintereinander ausgeführten Code-Aufrufen immer das gleiche Ergebnis geliefert wird, als wenn der Code nur einmal aufgerufen wird. 

In der Praxis verwendet man den Begriff bei den REST-HTTP Verben GET, HEAD, PUT und DELETE, die laut REST-HTTP Spezifikation idempotente Methoden sind, d.h. der Client darf sie per Definition ohne negativen Effekt ein zweites Mal aufrufen. 

## Inheritance, Multiple Inheritance, Protected Inheritance, Virtual Inheritance

Vererbung ist ein Begriff aus der Objektorientierung. Wie der Name schon sagt, dient die Vererbung dazu, aus schon bestehenden Klassen neue zu schaffen. Dabei 'erbt' die abgeleitete Klassen (üblicherweise) die Methoden und Attribute der Basisklasse. 

## Interpreter

<https://en.wikipedia.org/wiki/Interpreter_%28computing%29>  

## Invariante

In der Informatik eine Bedingung, die zu gegebener Zeit als ‘wahr’ angenommen werden kann. Eine Schleifen-Invariante ist z.B. immer wahr am Anfang und Ende einer Schleife.   

## Kernel

Als Kernel bezeichnet man üblicherweise den Teil der Software/des Betriebssystems, welcher zwischen Software und Hardware liegt und damit quasi die Vermittlerrolle zwischen Software und Hardware übernimmt. Es übermittelt die (Applikations-) Aufrufe an die Hardware und agiert als Low-Level Treiber, um die (HW-)Geräte zu adressieren. Es gibt (hauptsächlich) zwei Paradigmen, nach denen Kernel eines Betriebssystems organisiert sind. 

### Microkernel

Bekannte Implementierungen eines Microkernel sind QNX und Fuchsia. Nur die wichtigsten und elementaren Funktionen eines Betriebssystems sind im Microkernel implementiert, z.B. Timer und Messaging. Alle anderen Funktionen sind eigenständige und autonome Prozesse, die direkt mit dem Microkernel über eine klar definierte Schnittstelle kommunizieren. Beispiele dafür sind Dateisysteme oder Speichermanagement. 

### Monolithischer Kernel

Bekannte Implementierungen eines Monolithischen Kernel sind Windows und LInux. Der ganze Code inkl. aller Subsysteme wie Dateisysteme oder Speichermanagement laufen in einer Komponente. Jede Funktionalität hat Zugriff auf jede andere Funktion im Kernel. 

## KISS

KISS seht für *Keep it simple,* *stupid* und besagt, dass eine Implementierung so einfach wie möglich gehalten werden soll. Man erhofft sich dadurch Vorteile in der Lesbarkeit, Nachvollziehbarkeit oder auch in der Anzahl der Fehler (je einfacher etwas umgesetzt wird, desto weniger Fehler sollten gemacht werden).  

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

## Microservices

Microservices sind ein Architekturmuster. Microservices zeichnen sich durch folgende Eigenschaften aus (kein Anspruch auf Vollständigkeit): 

- Individuell ausrollbar
- Microservices bilden eine klar begrenzte Geschäftsfunktion ab.
- Ein in sich abgeschlossenes Stück Software, dass für alle Aspekte seiner Funktionalität selbsttätig verantwortlich ist. 
- Ein Microservice sollte eine REST-Schnittstelle anbieten.
- Ein Microservice ist in seinem Umfang an Code klein und überschaubar.

## Mixins

## Monaden 

Werden in der funktionalen Programmierung verwendet, um aus kleinen Bauteilen bequem größere Module zu komponieren.  

## Mutable/Immutable

## Nebenläufigkeit

## Objektorientierte Programmierung

Mit Hilfe der objektorientierten Programmierung wird versucht, Objekte aus der realen Welt und ihre Interaktion „originalgetreu“ abzubilden.  

Man erschafft sogenannte Klassen, in denen diese Eigenschaften von Objekten und die Funktionen, die auf diese Objekte angewendet werden können (sogenannte Methoden), festgelegt werden. Man hat nun die Möglichkeit, viele verschiedene Objekte dieser Klassen zu erzeugen, den Eigenschaften unterschiedliche Werte zuzuweisen und die Methoden anzuwenden. Objekte werden auch Instanzen (einer Klasse) genannt.  

Klassen können ihre Eigenschaften und Methoden zudem vererben. Sie dienen in diesem Zusammenhang als Basisklasse, ihre Erben nennt man abgeleitete Klassen.  

Ein weiteres Prinzip von objektorientierten Sprachen ist die Kapselung. Die Sichtbarkeit von Eigenschaften und Methoden lässt sich über Schlüsselwörter festlgen. Dabei unterscheidet man oft zwischen öffentlich („public“), geschützt („protected“) und privat („private“). Man nennt private Eigenschaften oder Methoden auch gekapselt.  

## O-Notation

<https://de.wikipedia.org/wiki/Landau-Symbole>

## Opcode

<https://en.wikipedia.org/wiki/Opcode>  

## Package

## Pointers to Functions

## Predicates

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

## Reaktive Programmierung

Reaktive Programmierung besagt, dass eine Anwendung jederzeit auf Stimuli reaktionsfähig sein soll. Dazu gehört Interaktivität, Fehlertoleranz und Skalierbarkeit und, ganz wichtig, die Anwendung soll ereignisgesteuert („event-driven“) sein.  

Eine Anwendung muss also jederzeit auf Ereignisse reagieren und diese bearbeiten können. In der Praxis realisiert man dies durch eine asynchrone, nicht-blockierende API. Das Gegenteil davon wäre eine synchrone, blockierende API.  

Ein Ansatz für eine asynchrone, nicht-blockierende API ist die Verwendung von Futures in Kombination mit Callbacks [2].    

 [1]	<http://www.reactivemanifesto.org/> (aufgerufen am 5.12.13)

 [2]	<http://www.heise.de/developer/artikel/Reactive-Programming-vom-Hype-zum-Praxiseinsatz-2059533.html> (aufgerufen am 5.12.13)

## Referenzielle Transparenz

In der Programmierung bezeichnet die referenzielle Transparenz, daß ein Ausdruck (eine Funktion) immer den gleichen Wert zurückgibt. Dies macht man sich bei Reinen Funktionen zunutze. Reine Funktionen sind Funktionen, die immer den gleichen Wert zurückgeben, wenn sie mit den gleichen Funktionen aufgerufen werden. 

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

## Scope

Scopes sind Sichtbarkeitsbereiche (oder Gültigkeitsbereiche) für Bezeichner.

## Smart Pointer

Ein Smart Pointer verhält sich grundsätzlich wie ein normaler Zeiger. Er speichert eine Adresse, über die auf ein dynamisches reserviertes Objekt zugegriffen werden kann. Er wird jedoch als intelligent bzw. smart bezeichnet, weil er automatisch im Destruktor das Objekt mit ‚delete‘ freigibt. Das setzt natürlich voraus, dass das Objekt zuvor mit ‚new‘ erzeugt wurde. Der große Vorteil ist, dass man die Speicherfreigabe nicht vergessen kann, da diese automatisch stattfindet. In C++ gibt es den Smart Pointer std::auto_ptr.  

## Static Methods

Beispiele: C++, Java 8

## Statische Programmiersprachen

Bei statischen Programmiersprachen nimmt schon der Compiler Typüberprüfungen vor, zum Beispiel kann man eine Adresse nicht mit 7 multiplizieren.  

In anderen Worten: Jedem Namen wird ein fester Typ zugewiesen und der Compiler löst die Namen auf, wenn er ein lauffähiges Programm erzeugt. Zur Laufzeit liegen keine Meta-Informationen mehr vor, sodass ein generisches Arbeiten aufwendig neu einzuführen ist (C++ Templates, Generics bei Java/C#).  

Während dynamische Programmiersprachen erst zur Laufzeit prüfen, ob eine Operation auf einem Objekt möglich ist oder nicht.  

Beispiele für statische Programmiersprachen: C++, Java

## Traits

Traits sind Klassen-Templates, die Eigenschaften von generischen Datentypen ermitteln. In C++11 wurde dafür der *<type_traits>* Header eingeführt. 

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

## Turing-Vollständigkeit

## Type Checking

## Type Erasure

Type Erasure erlaubt es dir, verschiedene Datentypen mit einem generischen Interface zu verwenden. Wörtlich genommen bedeutet Type Erasure, dass die Typinformation reduziert wird. In C z.B. mit Hilfe von void. Gut zu sehen in der *std::qsort* Definition. 

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

## Typing Model

Either **dynamic** or **static**. Dynamically typed means that types are bound at execution time rather than compile time.  

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

## Type Safe

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

## Move-Semantik

Eine ‘move’ Operation unterscheidet sich deutlich von einer ‘copy’ Operation. Eine ‚copy‘ Operation kopiert die Elemente (bzw. den Inhalt) einer Datenstruktur von einer Quelle zu einem Ziel und belässt die Quelle in ihrem Originalzustand. Dies ist kein Problem bei z.B:  

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

Eine Definition der ‚move‘ Operation kann lauten:  

*Eine ‚move‘ Operation ist dann gegeben, falls ein Kopieren eines Objektes so realisiert wird, dass das Original nicht wieder benötigt wird. Das Original wird dann automatisch gelöscht und kann nicht mehr verwendet wird. Der Inhalt ist quasi von der Quelle zum Ziel bewegt worden, wobei die Quelle danach nicht mehr existiert.*  

Diese Move-Semantik ist in der Programmiersprache C++ zum erstenmal in C++11 spezifiziert.  

## Dependency Injection (DI)

## Inversion of Control (IoC)

## Race Conditions

Eine Konstellation, in dem das Ergebnis einer Operation von der zeitlich verschränkten Ausführung von bestimmten anderen Operationen abhängt.  

## Rule of three (C++)

Die ‚Rule of three‘ ist innerhalb der Sprache C++ eine Regel, die besagt, falls mindestens eine der folgenden Operationen (explizit vom Programmierer) implementiert wird, alle der folgenden Operationen implementiert werden sollten:  

-  	Destruktor (destructor)
-  	Kopier-Konstruktor (copy constructor)
-  	Zuweisungsoperator-Konstruktor (copy assignment operator)

## Rule of five (C++11)

 Die *Rule of three* kann aufgrund der neu hinzugekommenen *move-Operation* in C++11 auf die *Rule of five* erweitert werden. Bei der *rule-of-five* sollten folgende Operationen explizit implementiert warden:  

-  	Destruktor (destructor)
-  	Kopier-Konstruktor (copy constructor)
-  	Move-Konstruktor (move construtor)
-  	Kopier-Zuweisungsoperator Konstruktor (copy assignment operator)
-  	Move-Zuweisungsoperator Konstruktor (move assignment operator)

## SOLID  

Der Begriff SOLID steht für:  

-  	**S** Single Responsibility Principle
-  	**O** Open/Closed Principle
-  	**L** Liskov Substitution Principle
-  	**I** Interface Segregation Principle
-  	**D** Dependency Inversion Principle

Dieses Programmierparadigma soll die Software sowohl benutzbarer machen als auch einfacher zu erweitern und sollte im Schnittstellen-Design (Interface-Design) berücksichtigt werden.

### Single Responsibility Principle

### Open/Close Principle

### Liskov Substitution Principle

Das Liskovsche Substitutionsprinzip oder Ersetzbarkeitsprinzip ist ein Idiom aus der Objektorientierten Programmierung und besagt, dass ein Programm, das Objekte der Basisklasse B verwendet, auch mit Objekten der von B abgeleiteten Klasse C korrekt funktionieren muß.

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

### Dependency Inversion Principle

## Tuples

 Ein Tupel besteht aus einer Liste von Elementen. Die Elemente können sich auch voneinander unterscheiden. Tuples sind z.B. in Python Teil der Sprache. Im Gegensatz zu Listen sind Tupels in Python nicht veränderbar (modal).  

## Traits

## Type Deduction

Falls Typen nicht explizit deklariert werden, muß der Compiler für eine entsprechende Typ-Ableitung (Type Deduction) sorgen. In C++ gab es Type Deduction (bis zum C++11 Standard) nur über Funktions-Schablonen (Function Templates).

In C++11 gibt es zwei neue Möglichkeiten der Type Deduction:  

-  	auto
-  	decltype

Das Gefährliche bei Type Deduction ist, dass u.U. nicht offensichtlich ist, welcher Typ implizit benutzt wird. Deshalb sollte man sich als Entwickler über die Arten von Type Deduction in seiner Sprache bewusst werden und Bescheid wissen.  

## Type Inference

## Verschattung (Shadowing)

Schaue ‚Verschattung‘ in Swift

## YAGNI

 YAGNI steht für *You aren't* *gonna need it*. Es soll dem Entwickler sagen, dass nur umgesetzt werden soll, was tatsächlich nötig ist und gefordert wurde. Oft wird etwas implementiert/umgesetzt, was für das aktuelle Problem/für die aktuelle Anforderung nicht nötig ist. Die Idee dahinter ist oft, dass es ja irgendwann (vielleicht) doch von Nutzen sein kann bzw. später evtl. doch gefordert wird. Es wird also mehr umgesetzt, als dass tatsächlich gefordert ist. Das führt oft zu Problemen/Fehlern, da ohne Anforderung diese zusätzliche Implementierung nicht getestet wird und damit of Fehler in der Implementierung nicht erkannt werden (können). Siehe auch KISS.

## Literatur

[1] 	Seven Languages in Seven Weeks, Bruce A. Tate, Pragmatic Programmers

[2]	<http://www.stroustrup.com/C++11FAQ.html>

[3]	<http://www.open-std.org/JTC1/SC22/WG14/www/docs/n1516.pdf>

[4]	<http://gcc.gnu.org/projects/cxx0x.html>

[5]	<http://msdn.microsoft.com/en-us/library/dd465215.aspx>

[6] 	<http://blogs.msdn.com/b/vcblog/archive/2010/04/06/c-0x-core-language-features-in-vc10-the-table.aspx>

[7] 	<http://clang.llvm.org/cxx_status.html

[8]	C++11, Rainer Grimm, Addison-Wesley

[9]	<http://www.boost.org/doc/libs/1_50_0/libs/smart_ptr/shared_ptr.htm>, (abgerufen am 29.Juni 2012)

[10] 	<https://wiki.apache.org/stdcxx/C++0xCompilerSupport>

[11]	C++11 – auch ein Stimmungsbild, heise developer

[12]	Simpler Multithreading in C++0x, <http://www.devx.com/SpecialReports/Article/38883/0/page/1>

[13]	Anthony Williams: An Introduction to Variadic Templates in C++0x,  <http://www.devx.com/cplus/Article/41533>

[14]	Weniger ist mehr, Einführung in Googles Programmiersprache Go, Jörg Walter, c’t 2011, Heft 18

[15]	An introduction to programming in Go, Caleb Doxsey, 2012, <http://www.golang-book.com/>

[16]	Peter Kaiser, Johannes Ernesti: Python, <http://openbook.galileocomputing.de/python/index.htm#_top>

[17]	Visual Studio 2013 Available Now!, <http://blogs.msdn.com/b/vcblog/archive/2013/10/17/visual-studio-2013-available-now.aspx>, (abgerufen am 18. Oktober 2013)

[18]	The future of C++, Herb Sutter, <http://channel9.msdn.com/Events/Build/2013/2-306> (abgerufen am 18. Oktober 2013)

[19]	C++ Truths Blog, Sumant Tambe, <http://cpptruths.blogspot.de/> (abgerufen am 14. März 2014)  

[20]	More C++ Idioms, Wikibook, <http://en.wikibooks.org/wiki/More_C++_Idioms> (abgerufen am 14. März 2014)

[21]	google-styleguide, <https://code.google.com/p/google-styleguide/> (abgerufen am 16. Mai 2014)

[22]	C++ Core Guidelines, <https://github.com/isocpp/CppCoreGuidelines> (abgerufen am 2. Februar 2016)  

[23]	() -> Unit = {}, Die neue Programmiersprache für Java und mehr, Teil 3: Funktionale Programmierung, c't 23/2017, Christian Helmbold  

[24]	Musser, David R.; Stepanov, Alexander A., Generic Programming, 1989

[25] Value categories, https://en.cppreference.com/w/cpp/language/value_category (abgerufen am 13. November 2019)

[26] lvalues, rvalues, glvalues, prvalues, xvalues, help!, https://blog.knatten.org/2018/03/09/lvalues-rvalues-glvalues-prvalues-xvalues-help/ (abgerufen am 13. November 2019)





  



  



  



  