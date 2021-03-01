# Idioms

[TOC]

Table of Contents
=================

* [Idioms](#idioms)
* [Table of Contents](#table-of-contents)
  * [Standardisierung](#standardisierung)
    * [RFCs](#rfcs)
    * [W3C](#w3c)
    * [ECMA](#ecma)
  * [Techniken](#techniken)
    * [Sprachen](#sprachen)
      * [WebAssembly](#webassembly)
      * [HTML](#html)
      * [CSS](#css)
      * [Bootstrap](#bootstrap)
    * [Frontends](#frontends)
    * [Backends](#backends)
    * [Authentifizierung](#authentifizierung)
      * [OAuth 2\.0](#oauth-20)
      * [Open ID Connect](#open-id-connect)
      * [WebAuthn](#webauthn)
      * [FIDO2](#fido2)
    * [Protokolle](#protokolle)
      * [HTTP](#http)
      * [HTTP 2\.0](#http-20)
      * [Web\-Sockets](#web-sockets)
      * [WebDAV](#webdav)
      * [SMTP](#smtp)
      * [FTP](#ftp)
      * [REST](#rest)
      * [MIME](#mime)
      * [JSON](#json)
      * [ATOM](#atom)
      * [GraphQL und OData und JSON\-API](#graphql-und-odata-und-json-api)
      * [SPA](#spa)
      * [AJAX](#ajax)
      * [RWD](#rwd)
      * [PWA](#pwa)
      * [Fugu](#fugu)
      * [WSGI](#wsgi)
  * [GraphQL](#graphql)
  * [JSON\-API](#json-api)
  * [Frameworks](#frameworks)
    * [Flask](#flask)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Standardisierung

### RFCs

RFC steht für Request for Comments. Die RFCs dienen als öffentliches Diskussionsforum für technische und organisatorische Fragen des Internets. Sie wurden mit dem ARPA-NET im Jahre 1969 ins Leben gerufen. RFCs werden fortlaufend nummeriert. Es gibt keine Versionsnummern. Wird ein RFC umfassend weiterentwickelt, erscheint ein neues Dokument mit einer neuen Nummer. Das alte wird als obsolet gekennzeichnet. 

### W3C

W3C steht für das World Wide Web Consortium. Es standardisiert die wichtigsten Standards im Web. Dazu gehören z.B. HTML, XHTML, XML, WebAuthn, FIDO2 und WebAssembly. 

### ECMA

ECMA steht für European Computer Manufacturers Association. Die ECMA standardisiert JavaScript unter seinem offiziellen Namen ECMAScript. Auch die Programmiersprachen C# und C++/CLI sind hier standardisiert. 

## Techniken

### Sprachen

#### WebAssembly

Bei WebAssembly handelt es sich um einen Binärcode für das Web, der durch die JavaScript-Runtime des Zielbrowsers direkt ausgeführt wird. 

Inzwischen kann man mit wasm fast jede Programmiersprache auch für das Web kompilieren. 

#### HTML

HTML steht für Hyper Text Markup Language und ist die Grundlage jeder HTML-Seite. Sie dient der Strukturierung der Seiten. 

Die aktuelle Version ist HTML 5. HTML ist sehr alt. Deswegen ist HTML 5 zu einem Konvolut verschiedender Standards geworden.

#### CSS

CSS steht für Cascading Style Sheets ist eine Layout- und Formatierungssprache, um Auszeichnungssprachen wie HTML zu formatieren. Idealerweise enthält das HTML-Dokument nur semantische Informationen, und mit CSS werden diese dann gestalterisch und typografisch formatiert. 

#### Bootstrap

Bootstrap ist ein von der Firma Twitter entwickeltes CSS-Framework. Es liefert zahlreiche CSS-Klassen, die die Handhabung von CSS vereinfachen. Die Bootstrap-Komponenten erfordern auch JavaScript, wobei hier im Hintergrund jQuery zum Einsatz kommt. 

Die aktuelle Version ist Bootstrap 4.

### Frontends

Angular, React, Vue.js

### Backends

ASP.NET Core, Node.js, PHP

### Authentifizierung

#### OAuth 2.0

#### Open ID Connect

#### WebAuthn

Bei WebAuthn handelt es sich um ein definiertes JavaScript-Interface, über das der Webdienst mit z.B. dem FIDO2-Modul des Browsers spricht. Der Standard definiert eine Programmierschnittstelle, mit der Webanwendungen und Websites ihren Benutzern eine direkte Authentifikation mittels Public-Key-Verfahrens im Webbrowser anbieten können.

#### FIDO2

FIDO steht für Fast Identity Online. Es ist eine Allianz, in der u.a. Google, Microsoft, Facebook, Amazon, Paypal, Visa und Mastercard arbeiten. FIDO2 (als Nachfolger von FIDO) soll die sichere, passwortlose Anmeldung bei Online-Diensten möglich machen. FIDO2 basiert auf der Internet-Komponente WebAuth. Teil der Spezifikation ist auch die notwendige Kommunikation zwischen Website, Browser und Sicherheitsschlüssel.

### Protokolle

#### HTTP

HTTP dient der Kommunikation mit Webservern. Es gibt die Versionen 1.0, 1.1. und 2.0. Bei HTTP handelt es sich um ein verbindungs- oder statusloses Protokoll. Server und Client nehmen also nie einen besonderen Zustand ein, sondern beenden nach jedem Kommando den Prozess vollständig, entweder mit Erfolg oder mit einer Fehlermeldung. 

#### HTTP 2.0

Die aktuelle Version von HTTP ist HTTP 2.0, beschrieben in RFC 7540. Die Entwicklung war maßgeblich von Google und Microsoft vorangetrieben worden. Mit HTTP 2.0 soll die Übertragung beschleunigt und optimiert werden. Wichtige neue Möglichkeiten sind: 

- das Zusammenfassen mehrerer Anfragen
- bessere Kompressionsmöglichkeiten
- binär codierte Übertragung von Inhalten
- Server-initiierte Datenübertragungen (Push-Verfahren)

#### Web-Sockets

Das Web-Socket Protokoll ist ein auf TCP basierendes Netzwerkprotokoll, das entworfen wurde, um eine bidirektionale Verbindung zwischen einer Webanwendung und einem Web-Socket-Server herzustellen. Es entfallen bei Web-Sockets die durch die HTTP-Kopffelder verursachten zusätzlichen Daten. 

Während bei einer reinen HTTP-Verbindung jede Aktion des Servers eine vorhergehende Anfrage des Clients erfordert, muss beim Web-Socket-Protokoll der Client die Verbindung nur eröffnen. Der Server kann dann diese offene Verbindung aktiv verwenden und weitere Informationen an den Client senden, ohne auf eine neue Verbindung des Clients zu warten. 

#### WebDAV

WebDAV steht für Web-based Distributed Authoring und Versioning. Es ist ein offener Standard zur Bereitstellung von Dateien im Internet. Dabei können Benutzer auf ihre Daten transparent zugreifen, also schreibend und lesend. 

#### SMTP

SMTP steht für Simple Mail Transfer Protocol. Es kommt in Clientsystemen für das Versenden sowie bei Mailservern zum Senden und Weiterleiten von Emails zum Einsatz. Wie viele Protokolle im Webumfeld ist auch dieses Protokoll ASCII-Text-basiert. 

#### FTP

FTP steht für File Transfer Protocol. FTP dient dem Datenaustausch zwischen FTP-Server und -Client, wobei der Client auf eine genau definierte Art und Weise Zugriff auf das Dateisystem des Servers erhalten kann.

#### REST

REST steht für Representational State Transfer. Es bezeichnet einen Architekturstil, der bereits häufig benutzte Techniken und Protokolle zusammenfasst und für die Datenübertragung nutzt. 

- URI für die Adressierung von Ressourcen
- HTTP für Übertragung von Kommandos
- MIME für die Codierung der Ressourcen
- JSON oder XML für die Formatierung

Die technischen Merkmale eines REST-Dienstes sind:

- Adressierbarkeit
- Repräsentationsvariabilität
- Zustandslosigkeit
- Skalierbarkeit
- Allgemeingültigkeit
- Erweiterbarkeit

#### MIME

MIME steht für Multipurpose Internet Mail Extensions. Es wurde ursprünglich entwickelt, um Dokumente in Emails einzubetten. 

Mehr dazu z.B. in https://de.wikipedia.org/wiki/Multipurpose_Internet_Mail_Extensions. 

#### JSON

JSON steht für JavaScript Object Notation. JSON wird heutzutage oft zur Kommunikation zwischen Client und Server eingesetzt. Es ist ein kompaktes Format in lesbarer Textform zum Zweck des Datenaustauschs zwischen Anwendungen. 

JSON kennt Objekte, Arrays, Zeichenketten, Zahlen, boolesche Wert und null. Daten können beliebig verschachtelt werden. Als Zeichencodierung benutzt JSON UTF-8. 

#### ATOM

ATOM steht für Atom Syndication Format. Es ist ein plattformunabhängiges Format zum Austausch von Feeds. Es hat denselben Zweck wie das bekanntere RSS. ATOM wurde in der RFC 4278 veröffentlicht. 

#### GraphQL und OData und JSON-API

REST hat den Nachteil, dass bei zunehmender Komplexität und sehr großen Umgebungen alles etwas unübersichtlich wird. An dieser Stelle sind komplexere Abfragesprachen gefragt, die Mehrfachzugriffe und Abhängigkeiten durch entsprechende Syntaxkonstrukte vereinfachen. Etabliert haben sich hier mehrere Standards:

- GraphQL
- OData
- JSON-API

#### SPA

SPA steht für Single Page Application. Eine SPA ist eine Webanwendung, die keinen Seitenwechsel (Roundtrip) durchführt, sondern die Anzeige nur durch Austausch von Seitenelementen via JavaScript/DOM verändert. Es gibt dabei also keine serverseitige Seitennavigation. Die URL ändert sich nicht. Initial wird eine komplette HTML-Seite oder zumindest das Grundgerüst einer Webseite in einem HTML-Dokument von dem Server geladen. Die Seite lädt anschließend Daten über Webservices (z.B. REST-basierte Dienste) nach und erzeugt die Darstellung clientseitig. Eine SPA wirkt damit wie eine Desktop-Anwendung. 

#### AJAX

AJAX steht für Asynchronous JavaScript und XML. AJAX ist die Basis für Single Page Applications und ermöglicht ein clientseitiges Rendering. Im klassischen Modell werden komplette Seiten ausgetauscht. Bei einer modernen Webanwendung (Web2.0/AJAX-Modell/SPAs) wird die Webseite z.B. per Document Object Model auf Client-Seite aktualisiert. 

#### RWD

RWD steht für Responsive Web Design. Es bezeichnet ein Konzept im Rahmen der Gestaltung von Webseiten, das ein komfortables Lesen der Webseiten auf jeder Bildschirmgröße ohne Scrolling erlaubt. Responsive Web Design realisiert man mit Box- beziehungsweise Flexbox-Modell in CSS direkt oder mit darauf aufbauenden Frameworks wie Bootstrap. 

#### PWA

PWA steht für Progressive Web Apps. Die Idee dahinter ist, dass Webanwendungen auch offline funktionieren sollen und so aussehen wie native Anwendungen. Und das platformübergreifend, auf Mobil- und Desktop-Platformen.

Zentrale technische Mittel für PWA sind der Service Worker und das Web  App Manifest: Ein Service Worker ist ein JavaScript-Schnipsel, der für  eine bestimmte Website installiert wird. Der Service Worker bekommt  einen Cache zur Seite gestellt, in dem er Dateien ablegen kann. Bei der  Installation legt der Service Worker eine Kopie der  Anwendungsquelldateien im lokalen Zwischenspeicher ab. Somit lässt sich  die PWA künftig aus dem Cache laden. 

#### Fugu

Mit dem Projekt Fugu möchte Google die Lücke zwischen Progressive Web Apps und  nativen Anwendungen durch das Einführen vieler weiterer  Webschnittstellen schließen. Es soll dann z.B. möglich sein, auf das native Dateisystem oder umfassend auf die Zwischenablage zugreifen zu können. 

#### WSGI

WSGI steht für Web Server Gateway Interface [14]. WSGI beschreibt und spezifiziert, wie ein Web-Server mit Web-Applikationen kommuniziert. WSGI ist ein Python Standard, beschrieben in PEP 3333.

## GraphQL

GraphQL ist eine von Facebook entwickelte Abfragesprache, die die Kommunikation zwischen (Web-)Client und Server effizienter gestalten soll. Im Unterschied zu RESTful APIs können Entwickler mit GraphQL gezielt Daten abfragen. Zudem sind die Datenfelder in GraphQL-Datenstrukturen typisiert, sodass fehlerhafte Zugriffe früher entdeckt werden können.

## JSON-API

Die JSON-API-Spezifikation definiert einen Standard für REST-APIs. JSON-API ermöglicht einem Client (genau wie GraphQL), mit einer einzigen Abfrage genau die Daten anzufordern, die er benötigt. JSON-API will die Nachteile einer REST-Architektur durch ein ausgefeiltes API-Design innerhalb einer REST-Architektur lösen.

## Frameworks

### Flask

Flask ist ein schlankes, in Python geschriebenes Webframework. Der Fokus liegt auf Erweiterbarkeit und guter Dokumentation. Es gibt auch eine Erweiterung Flask-RESTPlus, mit dem sich REST-APIs für Enterprise-Anwendungen entwickeln lassen. 

Die Installation erfolgt entweder über den Python-Paketmanager *pip* oder (so wie ich es benutze) via Anaconda [13]. Anaconda liefert schon alles Nötige mit inkl. Flask und aller Paket-Abhängigkeiten.

Ein minimales "Hello World!" Programm ist mit Flask in einer Minute erstellbar. 

```python
#!/usr/bin/python

import string
from flask import Flask

# 'app' as instance of Flask which is our WSGI application
app = Flask(__name__)

# use the route-decorator to specify the URL path (e.g. if you 
# don't like URL root than you could say route("/hello")
@app.route("/")
def hello():
   return "Hello World!"
```

1. Obiges Beispiel in einem Editor deiner Wahl eingeben und unter *hello.py* (oder wie auch immer du es nennen willst) abspeichern.
2. Gehe mit der Kommandozeile in das Verzeichnis, in dem deine Applikation *hello.py* liegt
3. Setze die FLASK Umgebungsvariable auf die Flask-Applikation. 
   1. Linux: export *FLASK_APP=hello.py*
   2. Windows: set *FLASK_APP=hello.py*
4. Starte Flask mit *flask run*
5. Nimm den Browser deiner Wahl und navigiere auf http://127.0.0.1:5000/ 
6. Be proud if you see *Hello World!* in your Browser window

```shell
$> set FLASK_APP=hello.py
$> flask run
 * Serving Flask app "hello.py"
 * Environment: production
   WARNING: This is a development server. Do not use it in a production deployment.
   Use a production WSGI server instead.
 * Debug mode: off
 * Running on http://127.0.0.1:5000/ (Press CTRL+C to quit)
```

## Literatur 

[1] Bootstrap, https://getbootstrap.com/, abgerufen am 08.12.2019

[2] GraphQL, https://graphql.org/, abgerufen am 08.12.2019

[3] OData, https://www.odata.org/, abgerufen am 08.12.2019

[4] RFC Editor, https://www.rfc-editor.org/, abgerufen am 08.12.2019

[5] Gezielte Auswahl, Typsichere GraphQL-APIs mit Java und React, Nils Hartmann, iX 6/2019

[6] json:api, https://jsonapi.org/, abgerufen am 08.12.2019

[7] golem.de - Warum jetzt die beste Zeit ist, Web-Developer zu werden, https://www.heise.de/ratgeber/Warum-jetzt-die-beste-Zeit-ist-Web-Developer-zu-werden-4845043.html, abgerufen am 30.07.2020

[8] c't 05/2018, Manuel Ottlik, Webdienste per REST-Schnittstelle anzapfen

[9] c't 05/2020, Manuel Ottlik, REST-APIs dokumentieren nach OpenAPI-Standard

[10] Gezielte Auswahl, Typsichere GraphQL-APIs mit Java und React, Nils Hartmann, iX 6/2019

[11] The Pallets Project - Flask, https://palletsprojects.com/p/flask/, abgerufen am 12.02.2021

[12] Quickstart - Flask Documentation, https://flask.palletsprojects.com/en/1.0.x/quickstart/#a-minimal-application, abgerufen am 12.02.2021

[13] Anaconda, https://www.anaconda.com/, abgerufen am 12.02.2021

[14] What is WSGI?, https://wsgi.readthedocs.io/en/latest/what.html, abgerufen am 12.02.2021