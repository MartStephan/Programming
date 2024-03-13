---

---

# Rust

[TOC]

Table of Contents
=================

* [Rust](#rust)
* [Table of Contents](#table-of-contents)
  * [Historie](#historie)
  * [Überblick](#%C3%BCberblick)
  * [Installation und Hello World](#installation-und-hello-world)
    * [Installation](#installation)
    * [Konsolen Entwicklung](#konsolen-entwicklung)
    * [Visual Studio Code](#visual-studio-code)
  * [Zielsysteme](#zielsysteme-(targets))
  * [Basics](#basics)
    * [Kommentare](#kommentare)
    * [Datentypen](#datentypen)
    * [Schleifen](#schleifen)
    * [Mutable/Immutable](#mutableimmutable)
    * [Funktionen](#funktionen)
    * [Kopien, Referenzen und Ownership](#kopien-referenzen-und-ownership)
    * [Ownership](#ownership)
    * [Structs](#structs)
    * [enums und Pattern Matching](#enums-und-pattern-matching)
  * [Packages, Crates, and Modules](#packages-crates-and-modules)
  * [Collections](#collections)
  * [Error Handling](#error-handling)
  * [Generics](#generics)
  * [Automatisierte Tests](#automatisierte-tests)
    * [Tests schreiben](#tests-schreiben)
    * [Tests automatisieren](#tests-automatisieren)
  * [Versionen](#versionen)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

Die Sprache Rust wird gepflegt von Mozilla.

## Historie

**Version 1.0**  

Veröffentlicht am 15.5.2015.  

**Version 1.1**

Freigegeben am 25.6.2015.

**Version 1.2**

Freigegeben am 6.8.2015.

aktuelle **Version 1.73.0** vom 05. Oktober 2023



## Überblick

**Allgemein**

It is designed specifically for writing large systems that run on Internet-based servers. It contains strong support for parallelism including immutability and actor-based messaging. It introduces a concept called “boxes”. Boxes, which can be owned by only one owner, contain the data. So, actors simply transfer ownership of the box to pass the data along.

Ziel von Rust ist es, sicher zu sein und Speicherfehler (segfaults) zu vermeiden ohne die Performance zu verschlechtern. Dazu garantiert sie auch Thread-Sicherheit (thread safety). Daraus ergeben sich die drei Hauptziele der Sprache: Sicherheit, Geschwindigkeit, Gleichzeitigkeit (concurrency).  

Rust orientiert sich syntaktisch an C und C++.

Es entstand von 2006 an als Projekt von dem Mozilla-Mitarbeiter Graydon Hoare. Mozilla hat die Sprache dann 2010 angekündigt. Die erste stabile Version 1.0 erblickte dann 2015 das Licht der Welt. 

**Sicherheit**

Das Beste zuerst: Rust kennt kein *null*. Dadurch hat man schon viele Probleme beseitigt. Alle Daten, die 'leer' sein können, bekommen stattdessen einen Datentyp *Option*.

Weiterhin schmeisst der Rust-Compiler bei möglichen Data Races einen Fehler, Resourcen werden automatisch deallokiert und der Compiler meckert bei Out-of-scope Zugriffen.  

**Expressivität**

Rust ist eine ausdrucksstarke Sprache und bietet viele Patterns aus der funktionalen Programmierung: pattern matching, destucturing, streams, iterators und vieles mehr. Ausserdem kennt Rust *traits* und *generics*. 

**Geschwindigkeit**

Rust Binärdateien sind standalone, native Binaries. Sie konsumieren relativ wenig Speicherplatz und besitzen nur einen kleinen Memory Footprint. Wobei der Code üblicherweise stark performant ist. Und wie schon erwähnt: Rust benötigt keinen Garbage Collector. 

**Eigenschaften**

-  	statisch typisiert mit Typ-Inferenz, d.h. explizites Annotieren des Typs entfällt oft
-  	Rust bevorzugt Stack-Allocation gegenüber Heap-Allocation
-  	Lässt dem Programmierer die Möglichkeit zu wählen, wie Speicher allokiert wird
-  	Ein Hauptkonzept von Rust ist das der 'Ownership'
-  	Speicher-(De-)Allokation wird vom Rust-Compiler getätigt, d.h. es gibt keine 'malloc' oder 'free' Aufrufe
-  	'move'-Semantik eingebaut

## Installation und Hello World

### Installation

**Kurzanleitung, um Rust auf einem *Windows-PC* zu installieren.**

- Installiere Rust für Windows via https://www.rust-lang.org/tools/install [6] *Rustup-Init.exe*.

- Ich habe die Standardeinstellungen übernommen (speziell Installationsverzeichnis und PATH-Umgebung).

- Überprüfe die Rust Toolchain Installation mit ***rustup --version***. Eventuell muß man Windows neu starten, um die PATH-Umgebungsvariable sichtbar zu machen. 

- ```
  >> rustup --version
  rustup 1.25.1 (bb60b1e89 2022-07-12)
  info: This is the version for the rustup toolchain manager, not the rustc compiler.
  info: The currently active `rustc` version is `rustc 1.63.0 (4b91a6ea7 2022-08-08)`
  ```
  
- Mit *rustup update* kann man sich die aktuelle Version der Rust Language herunterladen. Diese sollte bei einer Neuinstallation immer auf der letzten aktuellen stabilen Release sein.

- ```
  >> rustup update
  info: syncing channel updates for 'stable-x86_64-pc-windows-msvc'
  info: checking for self-updates
  
    stable-x86_64-pc-windows-msvc unchanged - rustc 1.41.1 (f3e1a954d 2020-02-24)
  
  info: cleaning up downloads & tmp directories
  ```

**Kurzanleitung, um Rust unter *Linux* zu installieren.**

To install Rust under Linux you might choose direct download using *curl*. 

- Install *curl* if not yet available 
- Download Rust package for Linux

```
>> sudo apt install curl
>> curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh

info: downloading installer

Welcome to Rust!

This will download and install the official compiler for the Rust
programming language, and its package manager, Cargo.

Rustup metadata and toolchains will be installed into the Rustup
home directory, located at:

  /home/user/.rustup

This can be modified with the RUSTUP_HOME environment variable.

The Cargo home directory is located at:

  /home/user/.cargo

This can be modified with the CARGO_HOME environment variable.

The cargo, rustc, rustup and other commands will be added to
Cargo's bin directory, located at:

  /home/user/.cargo/bin

This path will then be added to your PATH environment variable by
modifying the profile files located at:

  /home/user/.profile
  /home/user/.bashrc

You can uninstall at any time with rustup self uninstall and
these changes will be reverted.

Current installation options:


   default host triple: x86_64-unknown-linux-gnu
     default toolchain: stable (default)
               profile: default
  modify PATH variable: yes

1) Proceed with installation (default)
2) Customize installation
3) Cancel installation

>> 1

stable-x86_64-unknown-linux-gnu installed - rustc 1.67.1 (d5a82bbd2 2023-02-07)

Rust is installed now. Great!
```

Mit ***rustc*** kann man die installierte Version der Sprache überprüfen. 

```
>> rustc --version
>> rustc 1.63.0 (4b91a6ea7 2022-08-08)
```

### Konsolen Entwicklung

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

Zum schnellen Entwickeln hier eine Kurzbeschreibung, wie man Rust-Code mit Visual Studio Code unter Windows programmieren kann. 

- Falls noch nicht geschehen, installiere die neueste Visual Studio Code Version.

- Starte Visual Studio Code

- Ich persönlich arbeite mit dem "Rust Extension Pack" (von Swellaby), welches über den integrierten Marketplace in Visual Studio Code installiert werden kann.

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

- Dokumentation über das *tasks.json* Format findet man auf https://go.microsoft.com/fwlink/?LinkId=733558 

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

## Zielsysteme (Targets)

Rust unterstützt von Haus aus verschiedene Zielsysteme. So z.B. auch ARM-basierende Systeme. So ist es in Rust ganz einfach möglich von seinem Lieblingssystem für ein anderes System zu bauen. 

Mit ***rustup toolchain list*** kann man die aktuell installierten Zielsysteme sich anzeigen lassen.

Gib dir mit ***rustup target list*** alle verfügbaren Zielsysteme aus.

Und installiere zusätzliche mit ***rustup target add <target_system>***.

```
# show all current installed target systems
>> rustup toolchain list 
>> stable-x86_64-pc-windows-msvc (default)

# show all available targets
>> rustup target list
>> armv7-linux-androideabi
>> armv7-unknown-linux-gnueabi
# and so on and so on

# install new target 
>> rustup target add armv7-unknown-linux-gnueabi
>> info: downloading component 'rust-std' for 'armv7-unknown-linux-gnueabi'
>> info: installing component 'rust-std' for 'armv7-unknown-linux-gnueabi'

# now build your Rust code for specified target
>> cargo build --target armv7-unknown-linux-gnueabi
```

**Achtung:** rustup target add installiert nur die Rust Standard-Bibliothek für das angegebene Zielsystem. Üblicherweise müssen noch andere Werkzeuge installiert werden um tatsächlich Cross-Compilen zu können; insbesondere benötigt man einen Linker. Zum Beispiel benötigt man ein Android NDK um einen Cross-Compile für Android erfolgreich durchzuführen.

## Basics

### Kommentare

Kommentare sind kein Problem, wenn du von C/C++ kommst. Zeilenkommentare werden mit // am Anfang der Zeile signalisiert. Doku-Kommentare mit ///. 

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

Es gibt natürlich auch Blockkommentare.

```rust
/* fn largest<T>(list: &[T]) -> T
{
    let mut largest = list[0];

    for &item in list.iter() 
    {
        if item > largest 
        {
            largest = item;
        }
    }

    largest
} */

fn main()
{
    println!("hello");
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

Rust hat auch einen Mechanismus, um Werte ohne Ownership zu referenzieren: Bezeichnenderweise *references* bezeichnet. Ähnlich wie in C++ kann man dafür den &-Operator nutzen: Ein &String s2 kann also auf einen String s1 referenzieren, ohne die Ownership zu übertragen.

### Ownership und Borrowing

Ein zentrales Element der Sprache ist die *Ownership*, welche wir im obigen Beispiel schon einmal in Aktion gesehen haben. Hier noch einige zusätzliche Information dazu. 

Rust Ownership ist ein Satz von Regeln, die beschreiben, wie Rust Programme den Speicher verwalten.

Regeln sind:

- Each value in Rust has an owner
- There can only be one owner at a time
- When the owner goes out of scope, the value will be dropped

```rust
/// examples of Rust ownership 
fn main() {
    let s1 = String::from("hello");
    let s2 = s1;
    /// to ensure memory safety, after the line let s2 = s1, Rust considers s1 as no longer valid
    
    /// you can use clone() to make a clone or copy - here: heap data gets copied
    let s3 = s2.clone();
    
    /// here x is still valid after let y = x, because this is stack-only data which gets copied anyway 
    let x = 5;
    let y = x; 
    
}
```



### Structs

Für Strukturen gibt es das Schlüsselwort *struct*. Ein kurzes Beispiel sollte genügen. 

```rust
/// Example of strcuts/enums

/// Let's have a Point structure
struct Point
{
   x: i32,
   y: i32,
}

/// Implement functions for our Point structure
impl Point
{
   fn x(&self) -> i32
   {
      self.x
   }

   fn y(&self) -> i32 
   {
      self.y
   }
}

fn main() 
{
   let starting_point = Point {x: 10, y: 10};

   println!("The starting point today is x={} y={}", starting_point.x(), 		starting_point.y());
}

// The starting point today is x=10 y=10
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

## Collections

Wie in anderen Sprachen auch, gibt es in Rust sogenannte Collections. Drei davon schauen wir uns an:

- Vector
- String
- Hash Map

Collections werden in Rust im Gegensatz zu Built-in Typen auf dem Heap angelegt und können dadurch dynamisch wachsen.

Wir fangen mit dem Vektor *Vec<T>* an. 

```rust
// Rust collections examples of Vector
fn main() 
{
   println!("Hello World!");

   // create new, empty vector
   let mut v1: Vec<i32> = Vec::new();

   // create vector with initialisation
   let v2 = vec![1,2,3];

   // update v1
   v1.push(4);
   v1.push(2);

   // reading elements
   let third: &i32 = &v2[2];
   println!("The third element of v2 is {}", third);

   // iterating over vector elements
   for i in &v1 
   {  
      println!("{}", i);
   }
}

//Hello World!
//The third element of v2 is 3
//4
//2
```

Beispiele für String. Eine Besonderheit von Rust-Strings ist, dass sie intern immer als UTF-8 gespeichert werden. Das hat einige Konsequenzen bei der Benutzung. Aber siehe selbst. 

```rust
// Rust collections examples of String
// Note that String representation is UTF-8
// This means there is e.g. no indexing possible
fn main() 
{
   // create new, empty string
   let mut s1 = String::new();

   // create string with initialisation
   let mut s2 = "Martin".to_string();

   // equivalent you can write
   let s3 = String::from(" Top");

   // grow string by surname
   s2.push_str(" Stephan");
   println!("s2 is {}", s2);

   // you can use '+' to concatenate strings
   let s4 = s2 + &s3;
   println!("s4 is {}", s4);

   // Iterate over String chars 
   for c in "Martin".chars() 
   {
      println!("{}", c);
   }
}

//s2 is Martin Stephan
//s4 is Martin Stephan Top
//M
//a
//r
//t
//i
//n
```

Und zum Schluss einige Beispiele für die Benutzung von Hash Maps *HashMap<K, V>*. Hash Maps in Rust implementierenn eine Hash-Funktion. In anderen Sprachen werden auch andere Namen verwendet wie Maps (C++) oder Dictionaries (Python).

```rust
// Rust collections examples of Hash Maps
use std::collections::HashMap;

fn main() 
{
   // create new, empty hash map
   let mut life = HashMap::new();

   // insert values in our hash map
   life.insert(String::from("Adams"), 10);
   life.insert(String::from("Kafka"), 42);

   // creating a hash map using collect 
   let equipes = vec![String::from("fcb"), String::from("ksc")];
   let points = vec![1,3];
   let scores: HashMap<_, _> = equipes.iter().zip(points.iter()).collect();

   // accessing hash maps
   let team = String::from("ksc");
   let score = scores.get(&team);
   println!("ksc {:?}", score);

   // iterating hash maps
   for (equipes, points) in &scores 
   {
      println!("{}: {}", equipes, points);
   }
}

//ksc Some(3)
//fcb: 1
//ksc: 3
```

## Error Handling

Rust bietet mehrere Möglichkeiten zur Fehlerbehandlung. 

- *Result<T, E>* 
- *panic!*

**panic!**

Für nicht wieder heilbare Fehler bietet Rust das *panic!* Makro. Mit *panic!* wird eine Fehlermeldung ausgegeben, der Stack aufgeräumt und dann das Programm verlassen. 

```rust
// Rust Error Handling
fn main() 
{
   // something bad happened - Panik Panther
   panic!("Panik Panther");
}

//thread 'main' panicked at 'Panik Panther', src\main.rs:5:4
//note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace
//error: process didn't exit successfully: `collections.exe` (exit code: 101)
```

**Result<T, E>**

*Result<T, E>* hat seine Wuzeln in funktionalen Sprachen wie z.B. Haskell. Die Idee ist einen Typ *Result* zu haben, der zwei Varianten kennt. 

```rust
enum Result<T, E> {
    Ok(T),
    Err(E)
}
```

Praktisch sieht es dann so aus. 

```rust
// Rust Error Handlin
use std::fs::File;

fn main() 
{
   let f = File::open("hello.txt");

   let f = match f 
   {
      Ok(file) => file,
      Err(error) => 
      {
          panic!("Problem opening the file: {:?}", error)
      },
  };
  println!("f{:?}", f);
}

//thread 'main' panicked at 'Problem opening the file: Os { code: 2, kind: NotFound, //message: "Das System kann die angegebene Datei nicht finden." }', src\main.rs:13:11
//note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace
//error: process didn't exit successfully: `collections.exe` (exit code: 101)
```

## Generics

Generics in Rust sind syntaktisch vergleichbar mit Templates in C++. Man kann Generics bei Funktionsparametern, Strukturen und Funktionen verwenden.

```rust
// Rust Generics examples

/// Function finds the largest item inside a vector 
/* fn largest<T>(list: &[T]) -> T
{
    let mut largest = list[0];

    for &item in list.iter() 
    {
        if item > largest 
        {
            largest = item;
        }
    }

    largest
} */

/// Struct using Generics

// Let's have a Point struct with Generic data type
struct Point<T>
{
    // Point members can have any type T
    x: T,   
    y: T,
}

// Let's implement a generic function for Point structure returning the x member
impl<T> Point<T>
{
    fn get_x(&self) -> &T
    {
        &self.x 
    }

    fn get_y(&self) -> &T 
    {
        &self.y
    }
}

fn main() 
{
    println!("hello");

    //let number_list = vec![34, 50, 25, 100, 65];

    let pointInt = Point { x: 5, y: 10 };
    let pointFloat = Point { x: 1.0, y: 4.0 };

    println!("p.x = {} p.y = {}", pointInt.get_x(), pointInt.get_y());
}

//hello
//p.x = 5 p.y = 10
```

**Traits**

*Traits* in Rust ähneln *Interfaces* (Schnittstellen) in anderen Sprachen. In Rust benutzen wir *Traits*, um gemeinsames Verhalten in abstrakter Art und Weise zu definieren. Dafür gibt es das Schlüsselwort *trait*. 

```rust
// Rust Trait example

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

//My first news: Now hotter than ever, by Erich (Panama)
```

Genau wie in C++ kann man Default-Implementierungen für die Methoden in einem Trait bereitstellen. Mit dem Beispiel von oben sähe es z.B. so aus. 

```rust
// Trait mit Default-Implementierung
pub trait Summary 
{
    fn summarize(&self) -> String 
    {
    	String::from("(Read more...)")
    }
}
```

Ebenso kann man *Traits* als Parameter benutzen und ebenso als Rückgabetyp. 

```rust
// Trait als Parameter ...
pub fn notify(item: impl Summary) 
{
	println!("Breaking news! {}", item.summarize());
}

// .. und als Rückgabetyp
fn returns_summarizable() -> impl Summary 
{
	NewsArticle 
    {
    	headline: String::from("Now hotter than ever"),
        location: String::from("Panama"),
        author: String::from("Erich"),
        content: String::from("too much literacy"),
    }
}
```

**Lifetime**

Die Lebenszeit von Variablen ist im Prinzip identisch mit der, die man von der Sprache C/C++ gewohnt ist. So endet die Lebenszeit z.B. mit dem Ende der Klammerung. 

```rust
fn main() 
{
    let r = 5; 

    {
        let x = 5;
    } // lifetime of x ends here 

    // use Trait definition to output the news
    println!("Give me an r {} as x is no more valid", r);
}
//Give me an r 5 as x is no more valid
```

In C++ gibt es aber eine Stolperfalle, die in Rust gelöst ist: Was, wenn eine Instanz (Funktion, Stuct, Klasse) eine Referenz auf eine Entität besitzt? In C++ kein Problem. Der Programmierer muß sich selbst darum kümmern, dass der Zugriff auf die Referenz keine *Dangling Reference* verursacht. 

In Rust funktioniert dies nicht, falls die Lebenszeit der Referenzen nicht eindeutig ist. Schauen wir uns folgendes Beispiel an. 

```rust
// Rust Lifetime examples

// This won't work as the language cannot know lifetime of the references 
// Thus it just doesn't compile it 
fn longest(x: &str, y: &str) -> &str 
{
    if x.len() > y.len() 
    {
        x
    } 
    else 
    {
        y
    }
}

fn main() 
{
    let r = 5; 

    {
        let x = 5;
    } // lifetime of x ends here 

    // use Trait definition to output the news
    println!("Give me an r {} as x is no more valid", r);
}

// Does not compile - Error Message 
/*
error[E0106]: missing lifetime specifier
 --> src\main.rs:4:33
  |
4 | fn longest(x: &str, y: &str) -> &str
  |                                 ^ expected named lifetime parameter
  |
  = help: this function's return type contains a borrowed value, but the signature does not say whether it is borrowed from `x` or `y`
help: consider introducing a named lifetime parameter
  |
4 | fn longest<'lifetime>(x: &str, y: &str) -> &'lifetime str
  |           ^^^^^^^^^^^                      ^^^^^^^^^^
  ...
*/
```

Für Rust ist nicht ersichtlich, wann die Lebenszeit der Referenzen in der Funktion *longest()* enden. Also verweigert Rust die Übersetzung. Aber wie kann ich das lösen? Dafür gibt es eine eigene Syntax; die sogenannte *Lifetime Annotation*. Diese startet mit einem Apostroph ( ' ) und wird danach üblicherweise mit lowercase und so kurz als möglich angegeben. Wir wollen das am obigen Beispiel gleich einmal umsetzen.

```rust
// Rust Lifetime examples

//Examples for references
//&i32        // a reference
//&'a i32     // a reference with an explicit lifetime
//&'a mut i32 // a mutable reference with an explicit lifetime

// Now Rust is satisfied as we use explicit lifetimes
// Hint: The syntax is similar to generics (or templates in c++)
fn longest<'a>(x: &'a str, y: &'a str) -> &'a str 
{
    if x.len() > y.len() 
    {
        x
    } 
    else 
    {
        y
    }
}

fn main() 
{
    let r = 5; 

    {
        let x = 5;
    } // lifetime of x ends here 

    // use Trait definition to output the news
    println!("Give me an r {} as x is no more valid", r);

    let string1 = "abcd";
    let string2 = "xyz";

    let result = longest(string1, string2);
    println!("The longest string is {}", result);
}
//Give me an r 5 as x is no more valid
//The longest string is abcd
```

## Automatisierte Tests

### Tests schreiben

Wir verschaffen uns jetzt einen kleinen Überblick über die (in Rust eingebaute) Möglichkeiten von automatisierten Tests. 

Dazu erzeugen wir uns zuerst mal eine Bibliothek mit einigen Funktionen, die es zu testen gilt. 

```
$ cargo new adder --lib
	Created library 'adder' project
```

Wechsle in das so erzeugte Verzeichnis. Unsere cargo.toml Datei sollte ungefähr so aussehen. 

```toml
[package]
name = "adder"
version = "0.1.0"
authors = ["Martin Stephan <mstephan.mail@gmx.de>"]
edition = "2018"

# See more keys and their definitions at https://doc.rust-lang.org/cargo/reference/manifest.html

[dependencies]
```

Wechsle in das src-Verzeichnis, in dem schon ein Gerüst für einen Testfunktion erzeugt wurde. 

```rust
#[cfg(test)]
mod tests 
{
   #[test]
   fn it_works() 
   {
      assert_eq!(2 + 2, 4);
   }
}
```

Man kann diesen simplen Test schon ausführen mit dem *cargo test* Befehl. *cargo test* übersetzt den Code , lässt ihn laufen und gibt das Testergebnis aus. 

Lass uns es mit einem eigenen Test probieren. Schlüsselwörter, die wir dafür brauchen, sind: 

- #[cfg(test)] - Start eines Test-Abschnittes
- mod tests - Modul Test
- #[test] - Makro, welches den Beginn eines einzelnen Tests anzeigt
- assert - Makros, um Ergebnis zu verifizieren (in unterschiedlichen Ausprägungen)
- panic! - Zeigt an, dass Test fehlgeschlagen ist

```rust
pub struct Guess 
{
    // should only contain values between 1 and 100 inclusive
    value: i32,
}

impl Guess 
{
    pub fn new(value: i32) -> Guess 
    {
        if value < 1 || value > 100 
        {
            // panic immediately 
            panic!("Guess value must be between 1 and 100, got {}.", value);
        }

        Guess { value }
    }
}

// Let the tests begin
#[cfg(test)]
mod tests 
{
   use super::*;
    
   #[test]
   #[should_panic]
   fn greater_than_100() 
   {
      Guess::new(200);
   }
}
```

### Tests automatisieren

Natürlich gehört auch eine Automatisierung der Tests zum Funktionsumfang von Rust Tests. Dazu kann man dem *cargo test* Befehl Kommandozeilenoptionen mit auf den Weg geben. Einer der wichtigsten Befehle ist sicherlich *cargo test --help*, mit dem man sich die Optionen anzeigen lassen kann. So kann man z.B. die Tests parallel oder single-threaded laufen lassen, die Tests im Detail filtern, die Ausgaben beeinflussen, usw. 

```
cargo test --help
cargo.exe-test
Execute all unit and integration tests and build examples of a local package

USAGE:
    cargo.exe test [OPTIONS] [TESTNAME] [-- <args>...]

OPTIONS:
    -q, --quiet                      Display one character per test instead of one line
        --lib                        Test only this package's library unit tests
        --bin <NAME>...              Test only the specified binary
        --bins                       Test all binaries
        --example <NAME>...          Test only the specified example
        --examples                   Test all examples
        --test <NAME>...             Test only the specified test target
        --tests                      Test all tests
        ....
```

Ein Blick in die Hilfe und die Dokumentation ist auf alle Fälle zu empfehlen, falls man sich näher mit Tests beschäftigen will.  

## Versionen

**Version 1.20** 

-  	Verbesserungen in der Performance
-  	‚Dynamically-sized Types‘ stehen dem Entwickler jetzt zur Verfügung

Das Feature ‚Dynamically-sized Types‘ erlaubt, dass intelligente Zeigertypen nun auch Typen ohne vorher festgelegte Größe, Arrays und Trait-Objekte umfassen können.  

**Version 1.40**

Größeres Update. 

- Attribut *#[non_exhaustive]* - damit kann man Structs, Enums und Enum-Varianten, zu denen man zu einem späteren Zeitpunkt evtl. noch Felder hinzufügen möchte, kennzeichnen.
- Verbesserungen bei *macros!()*


## Literatur

 [1] <http://www.golem.de/news/mozillas-programmiersprache-rust-bedient-sich-bei-der-konkurrenz-1507-115214.html>

 [2] <http://www.heise.de/developer/artikel/Rust-Junger-C-C-Herausforderer-mit-abwechslungsreicher-Geschichte-2649509.html> (abgerufen am 10. August 2015)

 [3] <http://www.heise.de/newsticker/meldung/Programmiersprachen-Mozillas-C-C-Herausforderer-Rust-1-2-verfuegbar-2775308.html> (abgerufen am 10. August 2015)

[4] Learning Rust, https://www.geekabyte.io/ (abgerufen am 3. März 2020)

[5] Getting Started with Rust on Windows and Visual Studio Code, https://www.twelve21.io/getting-started-with-rust-on-windows-and-visual-studio-code/ (abgerufen am 5. März 2020)

[6] Install Rust, https://www.rust-lang.org/tools/install (abgerufen am 5. März 2020)

[7] Mozillas Rust - Konkurrenz für C und C++, iX 06/2015, S. 68-73

[8] The Rust Programming Language, https://doc.rust-lang.org/book/title-page.html (abgerufen am 10. März 2020)

[9] Rust - Sichere Programmiersprache für systemnahe und parallele Software, ix developer, Winter 2019/20

[10] Bewusst unvollständig: Programmiersprache Rust 1.40 führt #[non_exhaustive] ein, https://www.heise.de/developer/meldung/Bewusst-unvollstaendig-Programmiersprache-Rust-1-40-fuehrt-non-exhaustive-ein-4621122.html (abgerufen am 27.04.2020)

[11] Announcing Rust 1.20, https://blog.rust-lang.org/2017/08/31/Rust-1.20.html (abgerufen am 1.5.2020)

[12] Error Handling Patterns, Andrea Bergia, https://andreabergia.com/blog/2023/05/error-handling-patterns/ (abgerufen am 11.05.2023)

[13] Programming WebAssembly with Rust, Kevin Hoffman, The Pragmatic Bookshelf



 

  
