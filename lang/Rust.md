# Rust

Sprache wird gepflegt von Mozilla.

**Version 1.0**  

Veröffentlicht am 15.5.2015.  

**Version 1.1**

Freigegeben am 25.6.2015.

**Version 1.2**

Freigegeben am 6.8.2015.

**Allgemein**

It is designed specifically for writing large systems that run on Internet-based servers. It contains strong support for parallelism including immutability and actor-based messaging. It introduces a concept called “boxes”. Boxes, which can be owned by only one owner, contain the data. So, actors simply transfer ownership of the box to pass the data along.

Ziel von Rust ist es, sicher zu sein und Speicherfehler (segfaults) zu vermeiden ohne die Performance zu verschlechtern. Dazu garantiert sie auch Thread-Sicherheit (thread safety). Daraus ergeben sich die drei Hauptziele der Sprache: Sicherheit, Geschwindigkeit, Gleichzeitigkeit (concurrency).  

Rust orientiert sich syntaktisch an C und C++.

**Eigenschaften**

-  	statisch typisiert mit Typ-Inferenz, d.h. explizites Annotieren des Typs entfällt oft
-  	Rust bevorzugt Stack-Allocation gegenüber Heap-Allocation
-  	Lässt dem Programmierer die Möglichkeit zu wählen, wie Speicher allokiert wird
-  	Ein Hauptkonzept von Rust ist das der 'Ownership'
-  	Speicher-(De-)Allokation wird vom Rust-Compiler getätigt, d.h. es gibt keine 'malloc' oder 'free' Aufrufe
-  	'move'-Semantik eingebaut

 **Einstieg**

Mit der Sprache wird der Paketmanager [**Cargo**](https://crates.io/) ausgeliefert. Damit lässt sich ein Beispielprojekt schnell aufbauen:

*$ cargo new --bin example*	

Es wird dabei ein Verzeichnisbaum erstellt mit zwei Dateien: main.rs ist die Hauptdatei für ausführbare Programme. Cargo.toml beschreibt alle Abhängigkeiten und konfiguriert die Build-Schritte. In main.rs wurde sogar ein Hello, World generiert:

*fn main() {*

​    *println!(„Hello World!“)*

*}*

Zum Kompilieren benutzt man den Befehl *build*:

*$ cargo build*

und zum Ausführen *run*:

*$ cargo run*

*Hello World!*

oder ruft das erstellte Binary direkt auf.

Zum Kompilieren mit Optimierungen:

*$ cargo --release build*

**Version 1.2**

-  	Verbesserungen in der Performance
-  	‚Dynamically-sized Types‘ stehen dem Entwickler jetzt zur Verfügung

Das Feature ‚Dynamically-sized Types‘ erlaubt, dass intelligente Zeigertypen nun auch Typen ohne vorher festgelegte Größe, Arrays und Trait-Objekte umfassen können.  

 
  

 [RUST1] <http://www.golem.de/news/mozillas-programmiersprache-rust-bedient-sich-bei-der-konkurrenz-1507-115214.html>

 [RUST2] <http://www.heise.de/developer/artikel/Rust-Junger-C-C-Herausforderer-mit-abwechslungsreicher-Geschichte-2649509.html> (abgerufen am 10. August 2015)

 [RUST3] <http://www.heise.de/newsticker/meldung/Programmiersprachen-Mozillas-C-C-Herausforderer-Rust-1-2-verfuegbar-2775308.html> (abgerufen am 10. August 2015)

 
 
  