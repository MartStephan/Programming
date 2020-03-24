# Rust

[TOC]

Table of Contents
=================

* [Rust](#rust)
  * [Historie](#historie)
  * [Überblick](#%C3%BCberblick)
  * [Installation und Hello World](#installation-und-hello-world)
    * [Manuell](#manuell)
    * [Visual Studio Code](#visual-studio-code)
  * [Basics](#basics)
    * [Kommentare](#kommentare)
    * [Datentypen](#datentypen)
    * [Schleifen](#schleifen)
    * [Mutable/Immutable](#mutableimmutable)
    * [Funktionen](#funktionen)
    * [Kopien, Referenzen und Ownership](#kopien-referenzen-und-ownership)
    * [Ownership](#ownership)
    * [<strong>Structs</strong>](#structs)
    * [enums und Pattern Matching](#enums-und-pattern-matching)
  * [Packages, Crates, and Modules](#packages-crates-and-modules)
  * [Versionen](#versionen)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

Die Sprache Rust wird gepflegt von Mozilla.

## Historie

**Version 1.0**  

Veröffentlicht am 15.5.2015.  

**Version 1.1**

Freigegeben am 25.6.2015.

**Version 1.2**

Freigegeben am 6.8.2015.

aktuelle **Version 1.41.1** vom 27. Februar 2020

## Überblick

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

## Installation und Hello World

### Manuell

Mit der Sprache wird der Paketmanager [**Cargo**](https://crates.io/) ausgeliefert. Damit lässt sich ein Beispielprojekt schnell aufbauen:

*$ cargo new --bin example*	

Es wird dabei ein Verzeichnisbaum erstellt mit zwei Dateien: *main.rs* ist die Hauptdatei für ausführbare Programme. *Cargo.toml* beschreibt alle Abhängigkeiten und konfiguriert die Bau-Schritte. In *main.rs* wurde sogar ein *"Hello, World"* generiert:

```rust
fn main()
{
	println!("Hello World!“)
}
```

Zum Kompilieren benutzt man den Befehl *build*:

*$ cargo build*

und zum Ausführen *run*:

*$ cargo run*

*Hello World!*

oder ruft das erstellte Binary direkt auf.

Zum Kompilieren mit Optimierungen:

*$ cargo --release build*

### Visual Studio Code

Zum schnellen Entwicklen hier eine Kurzbeschreibung, wie man Rust-Code mit Visual Studio Code unter Windows programmieren kann. 

- Installiere Rust für Windows via https://www.rust-lang.org/tools/install [6] *Rustup-Init.exe*.

- Ich habe die Standardeinstellungen übernommen (speziell Installationsverzeichnis und PATH-Umgebung).

- Überprüfe die Rust Installation mit *rustup --version*. Eventuell muß man Windows neu starten, um die PATH-Umgebungsvariable sichtbar zu machen. 

- ```
  >> rustup --version
  rustup 1.21.1 (7832b2ebe 2019-12-20)
  ```

  

- Mit rustup update kann man sich die aktuelle Version herunterladen

- ```
  >> rustup update
  info: syncing channel updates for 'stable-x86_64-pc-windows-msvc'
  info: checking for self-updates
  
    stable-x86_64-pc-windows-msvc unchanged - rustc 1.41.1 (f3e1a954d 2020-02-24)
  
  info: cleaning up downloads & tmp directories
  ```

  

- Starte Visual Studio Code

- Ich persönlich arbeite mit dem "Rust Extension Pack", welches über den integrierten Marketplace in Visual Studio Code installiert werden kann.

- Jetzt bist du soweit für das erste Projekt, welches wir einfach "Hello World" nennen

- Erzeuge ein leeres Projektverzeichnis

- Darin legst du eine Datei names *Cargo.toml* ab, mit folgendem Inhalt

- ```toml
  [package]
  name = "hello-world"
  version = "0.1.0"
  ```

  

- Lege ein Quellverzeichnis *src* an

- Darin legst du die Quelldatei *main.rs* mit folgendem Inhalt ab

- ```rust
  fn main() 
  {
     println!("Hello World!");
  }
  ```

  

- Nun müssen wir nur noch festlegen, welche Task ausgeführt werden soll, wenn wir unseren Rust Code bauen wollen

- Select *View - Command Palette - Tasks: Configure Default Build Task*

- Wähle *Rust: cargo build* aus

- Damit sollte eine *tasks.json* Datei erzeugt werden inkl. den Kommandos *cargo build* und *cargo run*.

- ```json
  {
     # See https://go.microsoft.com/fwlink/?LinkId=733558 
     # for the documentation about the tasks.json format
     "version": "2.0.0",
     "tasks": [
        {
           "type": "cargo",
           "subcommand": "build",
           "problemMatcher": [
              "$rustc"
           ],
           "group": "build"
        },
        {
           "type": "cargo",
           "subcommand": "run",
           "problemMatcher": [
              "$rustc"
           ],
           "group": {
              "kind": "build",
              "isDefault": true
           }
        }
     ]
  }
  ```

  

- Diese wird bei jedem Bau bzw. Ausführung unseres Codes ausgeführt. 

- Damit kann man jetzt auf der Kommandozeile im Projektverzeichnis die Kommandos *cargo build* bzw. *cargo run* ausführen

- ```
  >>> cargo build
  >>> Finished dev [unoptimized + debuginfo] target(s) in 0.01s
      
  >>> cargo run
  >>> Compiling hello-world v0.1.0 (<PROJECT_DIR>)
  >>> Finished dev [unoptimized + debuginfo] target(s) in 2.17s
  >>> Running `target\debug\hello-world.exe`
  >>> Hello World!  
  
  ```

  

- Und Voila - es ist vollbracht; *Hello World!* wurde ausgegeben

## Basics

### Kommentare

Zeilenkommentare werden mit // am Anfang der Zeile signalisiert. Doku-Kommentare mit ///. 

```rust
fn main()
{
   // this is a line comment
	let x = 5; // this is also a line comment.
   
	///
	/// Example of a doc comment
	///
	/// ```
	/// let five = 5;
   let five = 5;
}
```

### Datentypen

Einen kurzen Überblick über Datentypen (ohne weitere Erklärungen).

- Integer-Typen

| Length  | Signed | Unsigned |
| ------- | ------ | -------- |
| 8-bit   | i8     | u8       |
| 16-bit  | i16    | u16      |
| 32-bit  | i32    | u32      |
| 64-bit  | i64    | u64      |
| 128-bit | i128   | u128     |
| arch    | isize  | usize    |

- Literale

| Literal   | Beispiel    |
| --------- | ----------- |
| Dezimal   | 98_222      |
| Hex       | 0xff        |
| Oktal     | 0o77        |
| Binär     | 0x1111_0000 |
| Byte (u8) | b'M'        |

- Floating-Point

| Length | Typ  |
| ------ | ---- |
| 32-bit | f32  |
| 64-bit | f64  |

- Ansonsten

| Typ  | Werte       |
| ---- | ----------- |
| bool | true, false |
| char | ' '         |

- Compound

| Typ   | Beispiel                   |
| ----- | -------------------------- |
| tup   | let tup = (500, 100.1, 5); |
| array | let a = [1, 2, 3, 4, 5];   |

Tupel und Arrays werden mit runden Klammern (Tupel) bzw. eckigen Klammern (Array) deklariert. 

### Schleifen

Mit dem Schlüsselwort *loop* kann man Schleifen erstellen; mit *break* diese wieder verlassen. Ebenso wenig fehlen dürfen natürlich *for*-Schleifen und *while*-Schleifen. 

```rust
/// Examples for various loops in Rust
fn main() 
{
   // Show me loop
   let mut a = 0;
   let r = loop 
   {
      a = a + 1;
      if a == 10 
      {
         break a
      }
   };

   println!("{}", r);
   
   // Show me for
   for x in 1..3 
   {
      println!("X = {}", x);
   }
   
   // Show me while
   let mut x = 2; 
   let mut done = false; 

   while !done 
   {
      x += 1;

      if x % 5 == 0 
      {
         done = true;
         println!("no rest {}", x);
      }
   }
}

// 10
// X = 1
// X = 2
// no rest 5
```

### Mutable/Immutable

In Rust gibt es wie in Python oder Java *Mutable* und *Immutable* Objekte. Das Schöne in Rust ist, daß *mutable* Objekte explizit mit dem Schlüsselwort *mut* deklariert werden müssen und man sich deshalb nicht merken muss, welche Objekte *mutable* und welche *immutable* sind (wie z.B. in Python).

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

### Funktionen

Funktionen starten mit dem Schlüsselwort *fn*. Die main-Funktion nennt sich auch *main()* und ist der Einstiegspunkt des ausführbaren Programms. Parameter setzt man in Klammern, mit Komma getrennt und unter Angabe des Datentypes. Der Rückgabewert wird mit dem 'Zeiger'-Operator angegeben. 

```rust
/// Example of functions
fn main() 
{
   println!("Hallo Welt");
   
	let x =eine_andere_funktion(42);
   
   println!("return {}", x);
}

// Funktion bekommen das Schlüsselwort fn
// Parameter setzt man in Klammern mit entsprechendem Datentyp
// Rückgabewert wird mit 'Zeiger'-Operator angegeben
fn eine_andere_funktion(val: u32) -> u8 
{
   println!("eine_andere_funktion {}", val);

   return 1;
}

// Hallo Welt
// eine_andere_funktion 42
// return 1
```

### Kopien, Referenzen und Ownership

Wichtig zu wissen: Mit dem *=* Zeichen wechselt in Rust die Ownership. Vor allem Programmierer, die C/C++/Python gewohnt sind, müssen hier umdenken. 

```rust
/// Example of ownership movemement
fn main() 
{
   
   let s = String::from("hello world");
   let newOwner = s; // ownership has moved from s to newOwner
  
   /// This won't even compile as s got invalid because of ownership moved
   //println!("{}", s); 
   println!("{}", newOwner); 
}

// hello world
```

### Ownership

Ein zentrales Element der Sprache ist die *Ownership*, welche wir im obigen Beispiel schon einmal in Aktion gesehen haben. Hier noch einige zusätzliche Information dazu. 

### Structs

Für Strukturen gibt es das Schlüsselwort *struct*. Ein kurzes Beispiel sollte genügen. 

```rust
/// Example of strcuts/enums
#[derive(Debug)]
struct Point
{
   x: i32,
   y: i32,
}

fn main() 
{
   let startingPoint = Point {x: 10, y: 10};

   println!("The starting point today is {:?}.", startingPoint)
}

// The starting point today is Point { x: 10, y: 10 }.
```

### enums und Pattern Matching

Weiter geht es mit einem kleinen Beispiel für die Benutzung von *enum*. Interessant in Rust ist die Möglichkeit, zusätzliche Daten direkt in den Enum-Wert zu setzen. Zusätzlich lassen sich in Rust Werte mit einem sogenannten *match* Operator vergleichen. 

```rust
/// Example of enums

/// enumeration using enum
#[derive(Debug)]
enum InternetProtocol
{
   IP4,
   IP6,
}

/// enumeration with additional data 
#[derive(Debug)]
enum InternetProtocolExtended
{
   IP4(String),
   IP6(String),
}

fn main() 
{
   // use our enumeration values
   let ip = InternetProtocol::IP4;

   let ipx = InternetProtocolExtended::IP6(String::from("::1"));

   println!("We're using {:?}.", ip);
   println!("and extended version {:?}.", ipx);
   
   let protocol = ipNumber(ip);

   println!("I'm using protocol {}", protocol);
}

// Function using Pattern matching
fn ipNumber(ip: InternetProtocol) -> u8 
{
   // Pattern matching using match
   match ip
   {
       InternetProtocol::IP4 => 4,
       InternetProtocol::IP6 => 6,
   }
}

// We're using IP4.
// and extended version IP6("::1").
// I'm using protocol 4
```

## Packages, Crates, and Modules

Das Modul-System von Rust umfasst folgende Features. 

- **Packages** Ein Konzept in Cargo, um code(), build(), deploy() Schritte durchzuführen 
- **Crates** Beinhaltet Module in einer Baumstruktur, um Bibliotheken oder Executables zu erstellen
- **Modules** und **use** Werden benutzt, um die Organisation, Gültigkeit und Privatheit im Baum zu steuern
- **Paths** Ein Weg, um Dinge zu addressieren (z.B. Structs, Funktionen, Module, ...)

**Packages and Crates**

Einige dieser Features haben wir zuvor schon angewandt. So besteht ein *Package* immer aus einer *Cargo.toml* Datei. Diese Datei beschreibt, wie die *Crates* zu bauen sind. 

Ein Package kann entweder kein oder ein Bibliothek *Crate* beinhalten. Aber nicht mehr als eine. Es kann soviele Binär-*Crates* wie nötig beinhalten. 

*Cargo* erwartet *src/main.rs* immer als Wurzel eines Binär-*Crate* (executable). Während eine Bibliothek immer eine *src/lib.rs* als Wurzel besitzen muss.

Mehrere Binary-*Crates* können verwendet werden, indem man die zusätzlichen Dateien in *src/bin* ablegt. 

**Modules, use und Paths**

Module organisieren den Code innerhalb eines *Crate* in Gruppen. Mit Modulen kann man steuern, ob der Code für die Allgemeinheit bestimmt ist (public) oder nur für interne Zwecke (private). Lass uns zusammen eine Bibliothek erstellen. 

Dafür erzeugen wir eine Bibliothek, indem wir *src/lib.rs* erzeugen und darin ein Modul (inkl. Untermodule) für ein HiFi System implementieren. 

```rust
/// file: src/lib.rs

mod hi_fi_system 
{
   mod cd_player
   {
      fn play() {}
      fn pause() {}
      fn stop() {}
   }

   mod amplifier
   {
      fn vol_up(val: u32) {}
      fn vol_down(val: u32) {}
   }
}
```

Im Wurzelpfad legen wir eine *cargo.toml* Datei mit folgendem Inhalt ab. 

```toml
# file cargo.toml
[package]
name = "hifi-module"
version = "0.1.0"
authors = ["Martin Stephan <mstephan.mail@gmx.de>"]

[dependencies]
```

Jetzt kann man mit dem Befehl *cargo build* schon bauen und erhält eine Bibliothek namens *libhifi_module.rlib*.

Wie können wir jetzt dem CD Player einen Play-Befehl schicken? Wir müssen die Funktion play() aufrufen. Allerdings sind Module und Funktionen ohne das Schlüsselwort *pub* immer private in Rust, d.h. wir müssen unseren Code von oben noch einmal anpassen. 

```rust
/// example of public modules and functions
mod hi_fi_system 
{
   // make cd_player and functions public
   pub mod cd_player
   {
      pub fn play() {}
      pub fn pause() {}
      pub fn stop() {}
   }

   // make amplifier and functions public
   pub mod amplifier
   {
      pub fn vol_up(val: u32) {}
      pub fn vol_down(val: u32) {}
   }
}

pub fn hear_johnny_cash()
{
   // Access using absolute path
   crate::hi_fi_system::cd_player::play();;

   // Access using relative path
   hi_fi_system::amplifier::vol_up(6); 
}
```

Bleibt im obigen Beispiel noch die Frage, wieso *hi_fi_system* nicht public markiert ist: *hi_fi_system* muß ebenfalls public deklariert werden, falls von außen auf das Modul zugegriffen wird. Im Beispiel wird aber in der gleichen Datei auf das Modul zugegriffen. Das funktioniert auch ohne das *pub*-Schlüsselwort. 

Geht es nicht einfacher und kürzer? Ja, indem man mit dem Schlüsselwort *use* arbeitet. Auch hier wieder ein Beispiel.

```rust
/// example of using the use keyword
mod hi_fi_system 
{
   pub mod cd_player
   {
      pub fn play() {}
      pub fn pause() {}
      pub fn stop() {}
   }

   pub mod amplifier
   {
      pub fn vol_up(val: u32) {}
      pub fn vol_down(val: u32) {}
   }
}

use crate::hi_fi_system::cd_player; 
use crate::hi_fi_system::amplifier::vol_up; 

pub fn hear_johnny_cash()
{
   // making use of use - ha ha 
   cd_player::play();

   // even shorter making use of second use above
   vol_up(10);
}
```

**External Packages**

Um vorhandene externe Pakete einzubinden, muss ich die Abhängigkeit in der *cargo.toml* entsprechend angeben. Wir probieren das gleich mal mit dem externen Paket *rand* zum Erzeugen von Zufallszahlen aus. 

```toml
# file cargo.toml with external dependency to rand
[package]
name = "hifi-module"
version = "0.2.0"
authors = ["Martin Stephan <mstephan.mail@gmx.de>"]

[dependencies]
rand = "0.7.3"
```

Und ein kleines Beispiel zur Benutzung. 

```rust
/// Example of external package usage
// import random() function
extern crate rand; 
use rand::random;

fn main() 
{
   println!("Hallo Welt");

   let x: u8 = random();

   println!("Erzähle es niemandem weiter {}", x);
}
```

## Versionen

**Version 1.2**

-  	Verbesserungen in der Performance
-  	‚Dynamically-sized Types‘ stehen dem Entwickler jetzt zur Verfügung

Das Feature ‚Dynamically-sized Types‘ erlaubt, dass intelligente Zeigertypen nun auch Typen ohne vorher festgelegte Größe, Arrays und Trait-Objekte umfassen können.  

 


 [1] <http://www.golem.de/news/mozillas-programmiersprache-rust-bedient-sich-bei-der-konkurrenz-1507-115214.html>

 [2] <http://www.heise.de/developer/artikel/Rust-Junger-C-C-Herausforderer-mit-abwechslungsreicher-Geschichte-2649509.html> (abgerufen am 10. August 2015)

 [3] <http://www.heise.de/newsticker/meldung/Programmiersprachen-Mozillas-C-C-Herausforderer-Rust-1-2-verfuegbar-2775308.html> (abgerufen am 10. August 2015)

[4] Learning Rust, https://www.geekabyte.io/ (abgerufen am 3. März 2020)

[5] Getting Started with Rust on Windows and Visual Studio Code, https://www.twelve21.io/getting-started-with-rust-on-windows-and-visual-studio-code/ (abgerufen am 5. März 2020)

[6] Install Rust, https://www.rust-lang.org/tools/install (abgerufen am 5. März 2020)

[7] Mozillas Rust - Konkurrenz für C und C++, iX 06/2015, S. 68-73

[8] The Rust Programming Language, https://doc.rust-lang.org/book/title-page.html (abgerufen am 10. März 2020)



 

  
