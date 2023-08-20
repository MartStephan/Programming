# Idioms

[TOC]

Table of Contents
=================

* [Idioms](#idioms)
* [Table of Contents](#table-of-contents)
  * [Standardisierung](#standardisierung)
    * [IAB](#iab)
    * [IETF](#ietf)
    * [IRTF](#irtf)
    * [ICANN](#icann)
    * [RFCs](#rfcs)
    * [W3C](#w3c)
    * [ECMA](#ecma)
  * [Techniken](#techniken)
    * [Basistechnologien](#basistechnologien)
    * [Sprachen](#sprachen)
      * [WebAssembly](#webassembly)
      * [HTML](#html)
      * [CSS](#css)
      * [XML](#xml)
    * [Client-Server-Paradigma](#client-server-paradigma)	  
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
  * [Prototyping](#prototyping)
  * [Frameworks](#frameworks)
    * [Bootstrap](#bootstrap)
    * [Flask](#flask)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Standardisierung

### IAB

Internet Architecture Board. Es legt Richtung und Baustellen für Weiterentwicklungen im Internet fest und organisiert Entwicklungen. Für das IAB wurden zwei Unterstützungsgruppen gebildet: IETF und IRTF.

### IETF - Internet Engineering Task Force

### IRTF - Internet Research Task Force 

### ICANN - Internet Corporation for Assigned Names and Numbers

Wichtigste Aufgabe: Zuteilung von Namen und Adressen im Internet. 

### RFCs

RFC steht für Request for Comments. Die RFCs dienen als öffentliches Diskussionsforum für technische und organisatorische Fragen des Internets. Sie wurden mit dem ARPA-NET im Jahre 1969 ins Leben gerufen. RFCs werden fortlaufend nummeriert. Es gibt keine Versionsnummern. Wird ein RFC umfassend weiterentwickelt, erscheint ein neues Dokument mit einer neuen Nummer. Das alte wird als obsolet gekennzeichnet. 

### W3C

W3C steht für das World Wide Web Consortium. Es standardisiert die wichtigsten Standards im Web. Dazu gehören z.B. HTML, XHTML, XML, WebAuthn, FIDO2 und WebAssembly. 

### ECMA

ECMA steht für European Computer Manufacturers Association. Die ECMA standardisiert JavaScript unter seinem offiziellen Namen ECMAScript. Auch die Programmiersprachen C# und C++/CLI sind hier standardisiert. 

## Techniken

### Basistechnologien

#### URI - Uniform Resource Identifier

Eindeutige Bezeichnung für Hypermedia Dokumente. Dient zur eindeutigen Identifikation und Adressierung von WWW-Dokumenten. 

URIs haben zwei Ausprägungen:

*URN* - Uniform Resource Name

Namensbeschreibung einer Web-Resource. Die heute fast immer anzutreffende Ausprägung. 

*URL* - Uniform Resource Locator

Adressbeschreibung einer Web-Resource

**URI-Syntax**

- URIs wurden von IETF und W3C in RFC 1630 standardisiert
- Generelle Gestalt einer URI: **Präfix ":" Suffix**
- Präfix: spezifiziert Informationsdienst/-Protokoll
- Suffix: spezifiziert Länge und Identifikation

**URL-Syntax**

- RFC 1738, 1808
- Beispiele: ftp://ftp.hpi.uni-potsdam.de 
- http://localhost:8080/login

#### HTTP - Hypertext Transfer Protocol

Protokoll zum Übertragen von Hypermedia Dokumenten im Internet. 

#### HTML - Hypertext Markup Language

Beschreibungssprache für Hypermedia Dokumente

### Sprachen

#### WebAssembly

Bei WebAssembly handelt es sich um einen Binärcode für das Web, der durch die JavaScript-Runtime des Zielbrowsers direkt ausgeführt wird. 

Inzwischen kann man mit wasm fast jede Programmiersprache auch für das Web kompilieren. 

#### HTML

HTML steht für Hyper Text Markup Language und ist die Grundlage jeder HTML-Seite. Sie dient der Strukturierung der Seiten. 

Die aktuelle Version ist HTML 5. HTML ist sehr alt. Deswegen ist HTML 5 zu einem Konvolut verschiedender Standards geworden.

HTML besteht aus zwei Teilen:

**Header** - enthält (Meta-) Informationen über das Dokument

**Body** - enthält eigentlichen Inhalt des Dokuments 

Mit HTML kann man 

- Hyperlinks hinterlegen
- Multimedia-Komponenten einbinden
- (bis zu einem gewissen Grad) die graphische Darstellung beeinflussen

HTML-Dokumente bestehen aus einzelnen HTML-Elementen, die durch *Markups* und *Tags* gekennzeichnet sind. 

**Server-seitige Web-Programmierung**

HTML-Dokumente können auf individuelle Anforderung eines Nutzer mit einer Web-Anwendung erst erzeugt werden. 

**Client-seitige Web-Programmierung**

*DHTML-Dokumente* verfügen über eingebaute Skripte, mit denen die Darstellung der Seite während ihrer Anzeige verändert werden kann durch Benutzerinteraktion (Menü ausklappen, Countdown, Text hervorheben, ...) oder andere Ereignisse. 

Andere Techniken (*AJAX*) ermöglichen die Kommunikation zwischen Browser und Server während der Anzeige einer Webseite, so dass diese erweitert oder verändert werden können.

#### CSS

CSS steht für Cascading Style Sheets ist eine Layout- und Formatierungssprache, um Auszeichnungssprachen wie HTML zu formatieren. Idealerweise enthält das HTML-Dokument nur semantische Informationen, und mit CSS werden diese dann gestalterisch und typografisch formatiert. 

CSS ist also zuständig für die Beschreibung des Layouts (der Darstellung) der HTML-Struktur.

#### XML

XML dient als Meta-Markupsprache und ermöglicht dadurch, alle nur erdenklichen Dokumenttypen mit einer speziellen, eigenen Syntax zu beschreiben. 

XML ist Ausgangspunkt für eine ganze Reihe anwendungsspezifischer Markup-Sprachen, die genau auf die jeweiligen spezialisierten Anwendungsdomänen zugeschnitten sind, z.B. 

- MathML - Mathematical Markup Language
- SVG - Scalable Vector Graphics
- ODF - Open Document Format for Office Applications 
- ...

**XSL - Extensible Stylesheet Language**

XML beschreibt nur die Struktur; die Formatierung eines Dokuments wird durch die Dokument-Formatbeschreibungssprache in Form von Stylesheets ähnlich zu HTML bestimmt. 

### Client-Server-Paradigma

Das Client-Server-Paradigma ist das vorherrschende Verarbeitungsprinzip in Rechnernetzen. 

- Client übernimmt Initiative und fordert vom Server angebotene Dienstleistung und Ressourcen an.
- Clients können verschiedene Server kontaktieren und Server können verschiedene Clients bedienen.
- Bevor Server Anforderung des Clients erfüllt, überprüft er dessen Berechtigung - Authentizität und Authorisation - zur Inanspruchnahme des Dienstes bzw. der Ressource. 

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

HTTP dient der Kommunikation zwischen dem Web-Client (Browser) und einem Webserver. Die erste Version (HTTP/0.9) entstand 1989/90 am CERN. Es gibt die Versionen HTTP/1.0 (RFC 1945), HTTP/1.1 (RFC 2068, 2616) und HTTP/2. Bei HTTP handelt es sich um ein verbindungs- oder statusloses Protokoll. Server und Client nehmen also nie einen besonderen Zustand ein, sondern beenden nach jedem Kommando den Prozess vollständig, entweder mit Erfolg oder mit einer Fehlermeldung. 

HTTP ist ein zustandsloses Protokoll, d.h. es besitzt keine Kenntniss von bereits erfolgten Anfragen-Antworten-Zyklen.

**HTTP-Methoden**

- GET - Anfordern eines Dokuments vom Server durch den Client
- POST - Informationsübertragung vom Client zum Server
- HEAD - ähnlich GET, aber nur Nachrichtenkopf wird angefordert
- PUT - Hinzufügen einer Ressource auf dem Server
- PATCH - Aktualisieren eines Dokuments, ohne es ganz zu ersetzen
- DELETE - Löschen einer Ressource vom Server
- OPTIONS - Anfordern der vom Server unterstützten HTTP-Methoden
- TRACE - Auslieferung der vom Server tatsächlich empfangenen Anfrage
- CONNECT - Aufbau eines verschlüsselten Tunnels 

#### HTTP - Nachrichtenformat und Statuscodes 

Erinnerung: Die Kommunikation ist realisiert als Anfrage (Request) / Antwort (Response) Zyklen.

Alle HTTP Nachrichten folgen einheitlicher Struktur - dem *Generic Message Format*

- Startsequenz
- Nachrichtenkopf
- Leerzeile
- Nachrichtenrumpf

HTTP definiert verschiedene Klassen von Statuscodes

- 1xx - Informative Nachrichten
- 2xx - Success
- 3xx - Umleitung
- 4xx - Client-Fehler
- 5xx - Server-Fehler 

#### HTTP - Mechanismen zur Optimierung

HTTP Anfragen können dauern. Weshalb?

- Moderne Webseiten enthalten zahlreiche eingebettete Ressourcen
- Eine TCP-Verbindung muss bei jedem Request/Response aufgebaut werden

Deshalb gibt es verschiedene Mechanismen zur Optimierung.

- Persistente Verbindungen und HTTP-Pipelining
- Komprimierung
- Caching

**Persistente Verbindungen** 

HTTP erlaubt multiple Request/Response-Zyklen innerhalb einer "persistenten Verbindung". Eine persistente Verbindung kann aufgebaut werden, falls der Server das Kommando "Connection: keep-alive" in der Response enthält. 

Der Client beendet die HTTP-Session imdem beim letzten HTTP-Request die Option 'close' im Nachrichtenkopf gesetzt wird. 

Persistente Verbindungen sind Standard seit HTTP/1.1.

Persistente Verbindungen erlauben dem Client auch, HTTP-Pipelining umsusetzen, d.h. Anfragen an einen Server können parallelisiert werden, indem der Client nicht auf vorherige Antworten warten muss, bevor neue Anfragen gesendet werden.

**Komprimierung**

HTTP/1.1 erlaubt Server, Daten im Nachrichtenrumpf komprimiert zu übertragen. Mit HTTP/2 kann auch der Nachrichtenkopf komprimiert werden.

Es gibt verschiedene Komprimierungsalgorithmen, die Clients dem Server mitteilen können. 

*Accept-Encoding: gzip, deflate, br*

Server wählt passenden Komprimierungsalgorithmus aus und sendet z.B. 

*Content-Encoding: gzip*

Mögliche Komprimierungen: *deflate, gzip, br, exi, identity*

**Caching**

Caching führt zu einer drastischen Reduktion des Kommunikationsaufkommens und der Serverlast. 

Ein Cache kann verschieden platziert sein:

- Clientseitiger Cache
- Eigenständiger Cache
- Serverseitiger Cache

Beim Caching muss die Cache-Konsistenz gesichert sein. Es ist zu unterscheiden zwischen

- Cache-Hit
- Cache-Miss

Aber wie kann die Cache-Konsistenz sichergestellt werden?

- Dokumente werden mit Zeitstempeln und Verfallsdaten versehen

Das wichtigste Nachrichtenkopf-Feld ist: cache-control

z.B. *cache-control: max-age: 3600*

- *max-age*
- *no-cache*
- *no-store*

#### HTTP - Sessions und Cookies

Cookies sind ja heutzutage jedem bekannt, nachdem ein Gericht (EuGH) 2019 das Setzen und Abrufen von Cookies durch Internetseiten eine **aktive Einwilligung** der Webseiten-Besucher erfordert. 

Erinnerung: Request/Response-Zyklen sind zustandslos; was oft nicht praktibal ist. Daher wurden sogenannte Sessions eingeführt, die quasi mehrere mehrere Request/Response-Zyklen zu einer Session zusammenführen. 

- Sessions werden technisch durch Session-IDs identifiziert

- Session-IDs müssen übertragen werden. Das kann auf verschiedenen Wegen geschehen:

  - Cookies - Key-Value-Paare im HTTP-Header

    - Cookies bieten leistungsfähiges Konzept zur Bildung von Sessions / Übertragung von Session-IDs
    - Anwendungsfälle: Nutzer-Präferenzen speichern, Identifikation der Nutzer, Tracking
    - Ablauf
      1. HTTP-Server beauftragt den Client, Cookie anzulegen, indem er in einer HTTP-Antwort das Headerfeld *set-cookie* setzt
      2. Browser speichert Cookie in einer internen Datenbank
      3. Bei jedem Request an die gleiche Domain sendet Browser all seine dafür passenden Cookies im Request-Headerfield *cookie*

  - Hidden Fields in HTML-Formularen

    - Formular besitzt Felder vom Typ *hidden*, die einen Namen und Wert haben können, z.B. SessionID
    - Formulare werden dem Server mit POST-Methode von HTTP übermittelt

    ```html
    <input type="hidden"
           name="SessionID"
           value="1234567890" />
    ```

    

  - URL Rewriting 

    - Session Informationen werden einfach an die URL drangehängt 
    - Beispiel: http://example.org/index.html?sessionid=1234567890.

#### HTTP - Content Negotiation

Was ist Content Negotiation?

Server kann Informationsressourcen mit gleicher URI in unterschiedlichen Varianten vorhalten, z.B. 

- verschiedene Sprachvarianten
- verschiedene Auflösungen
- Komprimierungsverfahren
- ...

Client und Server können aushandeln, welche dieser Varianten übertragen werden soll (*Content Negotiation*)

Content Negotiation kann in drei Varianten erfolgen

- Server-driven Negotiation
  - Client kündigt im accept-Headerfeld akzeptable Varianten an
- Agent-driven Negotiation
  - Server sendet in seiner ersten Antwort an den Client Informationen über verfügbare Varianten mittels eines *300 Multiple Choices* Status
  - Client wählt passende Variante aus
- Transparent Content Negotiation 
  - Kombination aus Server-Driven und Agent-Driven Negotiation mittels Proxy-Server

```http
# Request
GET / HTTP/1.1
Host: example.org
Connection: keep-alive
Accept: text/html, image/jpeg;q=0.4
Accept-Encoding: gzip,deflate
Accept-Language: de-DE,de;q-0.8
Accept-Charset: ISO-8859-1,utf-8
...
# Response
HTTP/1.1 200 OK
Content-Type: text/html; charset=utf-8
Content-Encoding: gzip
Content-Language: de
Connection: keep-alive
...

```



#### HTTP - Authentifizierung

Soll auf sicherheitsrelevante Daten des WWW-Servers zugegriffen werden, ist eine vorherige Authentifikation und Autorisierung des Clients erforderlich. 

Die Realisierung erfolgt folgendermaßen:

- Client sendet Anforderung für geschützte Ressource
- Server prüft Verfügbarkeit der Ressource und antwortet mit Status Code *401 Unauthorized* zusammen mit einem *www-authenticate* Response-Headerfeld
- Client sendet neuen Request mit *Authorization*-Headerfeld, das die vom Server im *Authenticate*-Response-Headerfeld angeforderten Credentials in der verlangten Form beinhaltet

Es gibt zwei Formen der Authentifizierung (gemäß RFC 2617):

- Basic Authentication
  - Angefordertes Credential ist ein Benutzername und Passwort, die im Klartext übertragen werden
- Digest Access Authentication (RFC 7616)
  - Verschlüsselung des Passworts mit Hilfe einer kryptographischen Hashfunktion, also einer nicht umkehrbaren Verschlüsselungsfunktion ohne Schlüssel, wie etwa MD5 (RFC 1321)
  - Passwort wird vor Versand gehasht und zusammen mit weiteren kodierten Informationen als sogenannter Digest übertragen
  - Im Digest werden folgende Informationen spezifiziert
    - Benutzername
    - Realm Value
    - Passwort
    - Nonce
    - HTTP-Methode, die Client anwenden will
    - URI der angefragten geschützten Ressource
    - ...
  - Server berechnet seinerseits Digest - dazu wird Passwort aus der Datenbank des Servers ermittelt, restliche Informationen werden aus Klartextteil der Clientanfrage gewonnen
  - Server vergleicht berechneten Digest mit Digest des Clients und übermittelt im Erfolgsfall nach einer Autorisationsprüfung die Ressource 

#### HTTPS

Zum vertraulichen Datentransport wurde 1994 von Netscape eine sichere Transportinfrastruktur entwickelt:

- HTTP über SSL - HTTPS

Mit *SSL* (Secure Socket Layer) wird zwischen Anwendungsschicht (z.B. HTTP) und Transportschicht (z.B. TCP) eine neue Protokollschicht eingezogen. Diese Schicht beinhaltet Werkzeuge zur Absicherung der Kommunikation - Verschlüsselung, Signieren, Authentifikation.

SSL wurde von der IETF standardisiert als *TLS* (Transport Layer Security). TLS 1.0 entsprach weitgehend SSL 3.0. TSL wird heute sehr verbreitet eingesetzt zur Absicherung des Webs (HTTPS) sowie Email-Verbindungen (IMAP+TLS, SMTP+TLS).

SSL/TLS bietet: 

- Private Verbindung - nach anfänglichem Handshake-Verfahren zum sicheren Schlüsseltausch werden Daten symmetrisch verschlüsselt. 
- Authentifikation über asymmetrische Verschlüsselungsverfahren
- Zuverlässige Verbindung - Nachrichtentransport überprüft Unversertheit der transportierten Daten über Message Authentication Code - MAC

HTTPS (RFC 2818) bietet sichere Übertragung und steht für Hypertext-Transfer Protocol Secure

Schichtenmodell:

- HTTP (Anwendung)
- TLS (Transport)
- TCP (Transport)
- IP (Internet)
- Ethernet (Netzzugang)

#### HTTP/2

Die aktuelle Version von HTTP ist HTTP/2, beschrieben in RFC 7540. Die Entwicklung war maßgeblich von Google und Microsoft vorangetrieben worden. Mit HTTP/2 soll die Übertragung beschleunigt und optimiert werden. Wichtige neue Möglichkeiten sind: 

- das Zusammenfassen mehrerer Anfragen (Request Multiplexing)
- bessere Kompressionsmöglichkeiten (kann auch Header-Informationen komprimieren)
- binär codierte Übertragung von Inhalten
- Server-initiierte Datenübertragungen (Push-Verfahren)
- rückwärtskompatibel zum HTTP/1.1-Vokabular
  - Methoden und Status Codes von HTTP/1.1 bleiben erhalten


Stand 2022: HTTP/2 wird zu 97% von den aktuellen Browsern unterstützt. Aber von den gängigen Servern (Apache, nginx, IIS) jedoch noch von weniger als der Hälfte der Top 10 Millionen Webseiten genutzt. 

##### Stream, Message, Frame

HTTP/2 führt neue Konzepte ein:

- Stream
  - virtueller Kanal innerhalb einer Verbindung, über den bi-direktional Nachrichten transportiert werden können
- Message
  - HTTP-Nachricht, wie Request, Response, etc., die aus einem oder mehreren Frames besteht
- Frame
  - kleinste Kommunikationseinheit, die einen speziellen Datentyp transportiert, z.B. HTTP-Header, Payload, etc.

##### Multiplexing

Erlaubt verflochtenen Abruf und Empfang multipler Ressourcen innerhalb einer TCP/IP-Verbindung

Requests blockieren nicht mehr. 

##### Header-Kompression

HTTP/2 erlaubt nun auch Header-Kompression. Dabei wird die Kompressionsmethode HPACK verwendet. 

HTTP/2 empfiehlt, Nachrichtenteil nicht mehr zu komprimieren

- bei gzip und deflate gibt es Sicherheitslücken
- Binärformat sorgt bereits für eine effiziente Komprimierung, weshalb in RFC 7540 von einer Komprimierung im Zuge der TLS-Verschlüsselung abgeraten wird

##### Server Side Push

Auf ersten HTTP-Request hin kann Server gleich weitere Ressourcen in der Antwort mitschicken. Wie kann der Server die zu pushenden Ressourcen erkennen?

- Autor der Webanwendungen können Server Push explizit oder durch zusätzliche HTTP-Header veranlassen
- HTTP-Server können 'lernen', welche Ressourcen gepusht werden müssen

##### Verschlüsselung

HTTP/2 Spezifikation erzwingt Nutzung von TLS nicht. 

Aber die großen Browserhersteller (Google, Mozilla, Microsoft) erzwingen Nutzung von TLS in ihrer Implementierung. 

#### HTTP/3

HTTP/3 ist praktisch schon fertig, aber noch kein Standard und ist die aktuellste Version von HTTP. 

Bis einschließlich HTTP/2 basiert HTTP auf TCP. Neben TCP gibt es ein zweites Transport-Protokoll: UDP - User Datagram Protocol. 

Eine weitere Verbesserung der Performance kann also der Wechsel von TCP zu UDP bewirken. Auf der anderen Seite wollte man einige Funktionen von TCP beibehalten. Deshalb kam es zur Einführung eines neuen Protokolls *QUIC*.

##### QUIC

QUIC steht für UDP Internet Connections und ist definiert in RFC 9000. QUIC ist eine Zwischenschicht zwischen Anwendung (WWW) und UDP. 

HTTP/3 ermöglicht jetzt HTTP über QUIC.

Unterschiede zu HTTP/2:

- schnellerer Verbindungsaufbau
- erfordert immer eine Verschlüssellung
- verbessertes Multiplexing
- Streams werden nun über QUIC realisiert und nicht mehr über HTTP

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

Aktuell sind drei große Framework-Lösungen für Single-Page-Applications in aller Munde: Angular, Vue und React. Üblicherweise sollte man auf eine dieser Lösungen zurückgreifen, da eine Eigenentwicklung in den seltensten Fällen sinnvoll ist, da man sich dann um sehr viele Standardprobleme in der Applikationsentwicklung selbst kümmern muss. 

#### AJAX

*AJAX* steht für Asynchronous JavaScript und XML. *AJAX* ist die Basis für Single Page Applications und ermöglicht ein clientseitiges Rendering. Im klassischen Modell werden komplette Seiten ausgetauscht. Bei einer modernen Webanwendung (Web2.0/AJAX-Modell/SPAs) wird die Webseite z.B. per Document Object Model auf Client-Seite aktualisiert. 

#### Responsive Web Design - RWD

*RWD* steht für *Responsive Web Design*. Es bezeichnet ein Konzept im Rahmen der Gestaltung von Webseiten, das ein komfortables Lesen der Webseiten auf jeder Bildschirmgröße ohne Scrolling erlaubt. *Responsive Web Design* realisiert man mit Box- beziehungsweise Flexbox-Modell in CSS direkt oder mit darauf aufbauenden Frameworks wie *Bootstrap*. 

Folgende Paradigmen gelten:

- Webseiten sollen auf Spezifika verschiedener Endgeräte - Desktop, Tablet, Smartphone, - reagieren können.
- RWD sollte technisch aber nur vermittels HTML und CSS realisiert werden - JavaScript soll in der Regel nicht zum Einsatz kommen.
- RWD sollte auch nicht darauf beruhen, auf kleineren Bildschirmen Inhalte wegzulassen, sondern diese anders anzuordnen. 

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

## Prototyping

In der Praxis verwendet man of Prototyping, um ein Gefühl zu haben, ob meine Site/App die Aufgabe für einen Benutzer erfolgreich erledigen kann. Der Vorteil des Prototyping ist, mit wenig Aufwand schnell meine Anwendung testen zu können. Und zwar bevor ich Zeit in die eigentliche Implementierung stecke. Programme, die heutzutage am häufigsten für das Prototyping verwendet werden, sind:

- Adobe XD
- Axure RP
- Invision
- Sketch
- Framer
- Figma
- Proto.io
- POP

## Frameworks

### Bootstrap

Bootstrap ist ein von der Firma Twitter entwickeltes CSS-Framework. Es liefert zahlreiche CSS-Klassen, die die Handhabung von CSS vereinfachen. Die Bootstrap-Komponenten erfordern auch JavaScript, wobei hier im Hintergrund jQuery zum Einsatz kommt. 

Die aktuelle Version ist Bootstrap 4.

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

### Angular

### React

### Vue 

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

[15] openHPI, Zum Web-Profi in drei Schritten, https://open.hpi.de/courses/webtech-exam-2, abgerufen am 29.09.2022

[16] HTTP-Status-Codes, https://www.iana.org/assignments/http-status-codes/http-status-codes.xhtml, abgerufen am 2.10.2022