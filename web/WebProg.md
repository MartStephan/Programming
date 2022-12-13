# Web Programmierung JavaScript

[TOC]

Table of Contents
=================

* [Table of Contents](#table-of-contents)
  * [Clientseitige Web-Programmierung](#clientseitige-web-programmierung)
  * [DOM](#dom)
  * [JavaScript](#javascript)
    * [Allgemein](#allgemein) 
    * [Variablen und Funktionen](#variablen-und-funktionen) 
  * [Literatur](#literatur)

## Clientseitige Web-Programmierung

Bei der clientseitigen Web-Programmierung geht es vornehmlich um die mit JavaScript realisierte Web-Programmierung, die im Browser (Client) zur Ausführung kommt. 

(Java-)Skripte werden im HTML-Dokument referenziert und lösen zusätzliche HTTP-Requests zum Server aus, um die Skripte zu laden. Skripte werden zuerst geparst und dann ausgeführt. 

Dabei zu beachten ist, dass Laden und Ausführen der Skripte die Anzeige des restlichen HTML-Dokuments blockiet. Deshalb werden Skripte am Ende eingebunden. Auch die Anzahl und die Größe der Skripte haben Einfluss auf die Geschwindigkeit der Webseite. 

```html
<html>
    ...
    <body>
        ...
        <script>type="text/javascript src=script.js"</script>
    </body>
</html>
```

 

## DOM

Das DOM ist die Grundlage für das Auslesen und Manipulieren von HTML-Dokumenten auf Client-Seite. Features sind:

- bildet HTML-Baumstruktur in Klassen und Objekte ab
- Manipulation der Bäume und Navigation in Bäumen
- Ereignismodell
- Unterstützung von XML-Namespaces

DOM ist eine Spezifikation und definiert Schnittstellen. Programmiersprachen (z.B. JavaScript) implementieren diese. 

## JavaScript

### Allgemein

JavaScript wird zur Clientseitigen Web-Programmierung eingesetzt. Features von JavaScript sind:

- Zugriff und Manipulation der HTML-Struktur Document Object Model (DOM)
- Reaktion von auf Nutzer ausgelöste Events
- Asynchrone Server-Kommunikation im Hintergrund: AJAX, WebSockets
- Animationen, 3D-Grafiken, Musik
- Zugriff auf Standort, Batteriestatus, Webcam, Mikrofon, ..
- Service-Worker: Ermöglicht Offline-Zugriff auf Webseiten

ECMCAScript ist der Standard, der JavaScript spezifiziert. Standard: ECMA-262. 

Browserkompatibiltät kann unter http://kangax.github.io/compat-table/es6/ eingesehen werden.

**Sicherheit**

JavaScript Interpreter läuft in einer Sandbox und hat Zugriff auf Objekte des Browsers aber nicht auf lokale Hardware oder das lokale Dateisystem. 

Zugriff erfolgt nur auf Ressourcen der selben Domäne: *Same Origin Policy (SOP)*

### Variablen und Funktionen

Primitive Datentypen: *String, Number, Boolean, String, Undefined, Symbol*.

```javascript
// dynamic programming language

// varialbe declaration using let
let hello = "Hello World"; 
hello = 39;
hello = boolean;

// const variable
const immutable_sense = 42;

// a function
function add(a, b) {
    return a + b;
}
```

### Datenstrukturen

JavaScript Typen können sein:

- primitive Datentypen
- Objects
- Symbols

```javascript
// arrays
const birds = ["adler", "taube", "amsel"];

// for-loop
for (const bird of birds) {
    console.log(bird);
}

console.log(birds[0]);
birds.push("meise");
console.log(birds);

// associative container arrays
const person = (name: "martin", age: 22);

// container array erweitern
person.color = "green";
console.log(person);

// Strings
let hello = "hello";
let world = "world";

console.log(hello + " " + world);

// formatstrings
console.log('${hello} ${world}');

// DOM element manipulation
// document is root 
const div = document.querySelector(".green");
div.classList.replace("green", "red");

```

**Event Handler**

```html
<h1 id="hello">Hello</h1>
<script>
    document.querySelector("#hello").addEventListener("click", function() {
        alert("World!");
    })
</script>
```

### Bedingungen

| Bedingung | Bedeutung     | Ergebnis                                                     |
| --------- | ------------- | ------------------------------------------------------------ |
| ==        | istgleich     | Wahr, wenn die Werte gleich sind                             |
| !=        | ungleich      | Wahr, wenn die Werte ungleich sind                           |
| >         | größer        |                                                              |
| >=        | größergleich  |                                                              |
| <         | kleiner       |                                                              |
| <=        | kleinergleich |                                                              |
| ===       | istgleich     | Wahr, wenn die Werte gleich sind und außerdem auch die Typen gleich |
| !==       | ungleich      | Wahr, wenn die Werte ungleich sind und nicht den gleichen Typ haben |
| &&        | und           |                                                              |
| \|\|      | oder          |                                                              |

Zusätzlich gibt es in Java natürlich auch *switch...case* Anweisungen.

### Schleifen



## Literatur 

[1] openHPI, Zum Web-Profi in drei Schritten, https://open.hpi.de/courses/webtech-exam-2, abgerufen am 13.12.2022

[2] ECMCAScript 6 compatibility table, http://kangax.github.io/compat-table/es6/, abgerufen am 25.11.2022

[3] JavaScript selfHTML, https://wiki.selfhtml.org/wiki/JavaScript, abgerufen am 25.11.2022

[4] JavaScript Tutorial, https://www.w3schools.com/js/default.asp, abgerufen am 25.11.2022

[5] JavaScript, https://developer.mozilla.org/en-US/docs/Web/JavaScript, abgerufen am 25.11.2022



