# Go

[TOC]

Strong support for concurrency and uses ‘channels’, which involves synchronized message passing. Also garbage collection is supported. Native language.   

## Features 1.0

-  	Compileable
-  	unterstützt Nebenläufigkeit
-  	Fast and simple compilation
-  	No use of header files
-  	Error handling through multiple return values
-  	Simplified composition
-  	Simplified concurrency
-  	Excellent error messages (runtime messages and compiler error messages)
-  	High-order functions
-  	automatische Speicherbereinigung
-  	Hash maps
-  	flexible Arrays, assoziative Felder und Feldabschnitte

```go
import "image"

var fünfeck [5]image.Point

var linie []image.Point = fünfeck[0:2]
```

-  	Closures
-  	Reflexion
-  	statische Typisierung
-  	starke Typisierung (Typsicherheit)
-  	Objektorientierung durch Interfaces und Mixins
-  	keine Klassen
-  	Modularisierung durch Pakete
-  	Syntax orientiert sich an C
-  	Verwendung von Zeigern erlaubt allerdings keine Zeigerarithmetik
-  	Deklaration ist Pflicht
-  	keine (explizite) Verebung  	

### Entwicklungswerkzeuge

| **Compiler**            |                                     |
| ----------------------- | ----------------------------------- |
| 5g, 6g, 8g              | 5g = ARM, 6g = x64, 8g = x86        |
| 5c, 6c, 8c              | C-Compiler, kompatibel zu 5g,6g, 8g |
| 5a, 6a, 8a              | Assembler                           |
| 5l, 6l, 8l              | Linker                              |
| gopack                  | Archivierer                         |
| gomake                  |                                     |
| goyacc                  |                                     |
| cgo                     |                                     |
| gorun                   |                                     |
| **Paket-Werkzeuge**     |                                     |
| goinstall               |                                     |
| godoc                   |                                     |
| **Quelltext-Werkzeuge** |                                     |
| gofmt                   |                                     |
| gofix                   |                                     |
| gotype                  |                                     |
| govet                   |                                     |
| **Programmanalyse**     |                                     |
| gotest                  |                                     |
| 6prof                   |                                     |
| 6cov                    |                                     |

### Hello World

```go
package main

import “fmt”

func main( )
{
	fmt.PrintLn(“Hallo Welt!”)
}
```

Kompilieren und Linken und Ausführen unter x86.

```go
>> 8g hello.go
>> 8l hello.8
>> ./8.out
```

### Programme

| gofmt | automatische Formatierung des Quelltextes |
| :---: | :---------------------------------------: |
|       |                                           |
|       |                                           |
|       |                                           |
|       |                                           |



### Bezeichner

| Variablen              | *var*   |
| ---------------------- | ------- |
| Funktionsdeklarationen | *func*  |
| Konstante              | *const* |
| eigene Typen           | *type*  |
|                        |         |

Typdeklarationen stehen hinter dem Variablennamen.

```go
var a, b, c int*

func add(x float32, y float32) float32*  
radius := 2.5   // radius ist float64*
radius2 := radius   // radius2 ist ebenfalls float64
```

### Datentypen

| int                           |      |
| ----------------------------- | ---- |
| uint                          |      |
| int8, int16, int32, int64     |      |
| uint8, uint16, uint32, uint64 |      |
| byte                          |      |
| uintptr                       |      |
| float32, float64              |      |
| complex64, complex128         |      |
| bool                          |      |
| string                        |      |

| Eigenschaft        | Vergleichbar mit                                             |
| ------------------ | ------------------------------------------------------------ |
| Assoziative Felder | %hashes in Perl, dict in Python, java.util.Dictionary in Java |

### Konstanten

Konstanten haben keinen bei der Definition festgelegten Datentyp. Erst bei Verwendung wandelt der Compiler die Konstante in den entsprechenden Datentyp. Operationen werden immer mit höchstmöglicher Genauigkeit ausgeführt.  

Datentypen und Methoden lassen sich zur Laufzeit untersuchen: *TypeOf()* oder *Method(i int).* Vgl. dazu die Reflection API von Java.  

### Sichere Felder und Zeiger

Zugriffe auf Felder werden zur Laufzeit geprüft, ob sie innerhalb des definierten Feldes bleiben. Rechnen mit Zeigern ist nicht erlaubt. Zeiger dienen nur dazu, Referenzen darzustellen.  

### Garbage Collection

Go benutzt eine automatische Speicherverwaltung. Man kann zwar Objekte mit *new* anlegen, ein dazu passendes *delete* gibt es aber nicht. Go erkennt automatisch wann ein Objekt nicht mehr benötigt wird und gibt den dahinterliegenden Speicher dann frei.  

### Schleifen

 Alle Schleifenarten werden mit dem Schlüsselwort *for* realisiert.

 Für Schleifen kann man das Schlüsselwort *range* benutzen, welches analog zu *foreach* in z.B. JavaScript, C# über aggregierte Typen iteriert.  

 Man kann einer Schleife einen Namen geben, den man benutzen kann, um mit *break* oder *continue* diesen anzusteuern.  

### Syntax-Besonderheiten

if-Schleife: Deklarieren von Variablen im Bedingungsteil. Dadurch kann Zuweisung und Bedingung getrennt werden.  

switch: Deklarieren von Variablen bei der Verwendung. Jede case-Anweisung endet automatisch. Es ist kein *break* mehr vonnöten. Das Schlüsselwort *fallthrough* verändert dieses Verhalten.  

### Fehlerbehandlung

Go unterstützt mehrere parallele Rückgabewerte.  

Mit *panic( )* gibt es auch einen Exception-Mechanismus.  

### Objektsystem

Sichtbarkeit wird über den Namen gesteuert. Namen, die mit Großbuchstaben beginnen, sind öffentlich, alle anderen nicht. Ähnlich der Unterstrich Konvention in Python oder Perl.

Vererbung wird realisiert, indem man Typen in andere Typen einbettet. Der resultierende Typ erhält alle Methoden seiner eingebetteten Typen.  

Go verwendet ausschließlich Schnittstellen, um gemeinsames Verhalten zu abstrahieren. Allerdings muss ein Type nicht gezwungenermaßen auf einer Schnittstelle basieren. Falls der Typ alle Methoden der Schnittstelle implementiert, dann ist er tatsächlich von diesem Schnittstellen-Typ. Dieses Konzept ist als *duck-typing* bekannt.  

### Nebenläufigkeit

Mit sogenannten Goroutinen können parallel ablaufende Funktionen realisiert werden, die über typisierte Nachrichtenkanäle Informationen (Objekte) austauschen können. Dies wird über leichtgewichtige Pseudo-Threads realisiert.  

### Nachrichtenkanäle

Der primäre Synchronisationsmechanismus ist der Nachrichtenkanal (*chan*). Jeder Kanal überträgt Objekte festgelegten Typs und kann synchron oder asynchron arbeiten.  



## Features Go 1.1

### Language

- Integer division by zero is a compile-time error
- Introduce *Terminating statements* (e.g. infinite for-loops) 	that do not explicitely require a ‘*return’* statement.  	

### Implementations/Tools

- int and uint 	are now 64 bits on 64-bit platforms
- There is a new tool *Race Detector* that can detect concurrent 	access of the same variable
- And many more issues

### Performance

- Performance of code compiled with Go 1.1. gc tool suite should be 	noticeably better for most Go programs

### Standard Library

- Many changes including new packages

 For a detailed description see [Go2].

## Features Go 1.2

### Language

- nil-pointers now guarantee to trigger a run-time panic if memory is 	accessed incorrectly
- Ability to specify the capacity and length when using a slicing 	operation on an existing array or slice

###  Implementations/Tools

- Scheduler preemption
- Limit the number of threads
- Increased max. stack size (auf 8 kBytes)

### Performance

- Significant performance improvements

###  Standard Library

- Several changes, mostly minor ones

 For a detailed description see [Go3].

## Features Go 1.3

First Beta Go 1.3 released in April 2014.  

### Sprache

- Wie bisher auch, ändert sich die Sprache selbst nicht

### Implementierung

- Jeder Go-Routine wird nun ein zusammenhängendes Stück Speicher für seinen Stack zugewiesen. Wird mehr Stack benötigt, als verfügbar ist, wird der gesamte Stack einfach in einen größeren Speicherblock transferiert.  
- Stack-Größe liegt jetzt wieder standardmäßig bei 4 kBytes
- Optimierter Garbage-Collector um die Speicherausnutzung zu verbessern

### Performance

- Linker und Compiler wurden komplett überarbeitet. Dies soll die Kompilierung vor allem großer Projekte deutlich beschleunigen.




## Literatur

[Go1] http://golang.org/doc/go1 (abgerufen am 2.12.2013)

[Go2] http://golang.org/doc/go1.1 (abgerufen am 2.12.2013)

[Go3] http://golang.org/doc/go1.2 (abgerufen am 2.12.2013)

[Go4] http://tip.golang.org/doc/go1.3 (abgerufen am 24.4.2014)

[GO112] https://www.heise.de/developer/meldung/Go-1-12-Das-bietet-das-neue-Release-von-Googles-Programmiersprache-4319811.html (abgerufen am 27.2.2019)

[Go5] Daniel Bornkessel, Christoph Iserlohn: Ein Einstieg in die Programmiersprache Go, Teil 1 https://www.heise.de/developer/artikel/Ein-Einstieg-in-die-Programmiersprache-Go-Teil-1-4282998.html (abgerufen am 1.3.2019)

[Go6] Daniel Bornkessel, Christoph Iserlohn: Ein Einstieg in die Programmiersprache Go, Teil 2 https://www.heise.de/developer/artikel/Ein-Einstieg-in-die-Programmiersprache-Go-Teil-2-4317947.html (abgerufen am 1.3.2019)



  