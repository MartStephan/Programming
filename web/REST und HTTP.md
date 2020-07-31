
[TOC]

Table of Contents
=================

   * [Basics](#basics)
      * [Standardisierung](#standardisierung)
         * [RFCs](#rfcs)
         * [W3C](#w3c)
         * [ECMA](#ecma)
      * [Protokolle](#protokolle)
         * [HTTP](#http)
         * [HTTP 2.0](#http-20)
         * [Web-Sockets](#web-sockets)
         * [WebDAV](#webdav)
         * [SMTP](#smtp)
         * [FTP](#ftp)
         * [REST](#rest)
         * [MIME](#mime)
         * [JSON](#json)
         * [ATOM](#atom)
         * [GraphQL und OData und JSON-API](#graphql-und-odata-und-json-api)
         * [SPA](#spa)
         * [AJAX](#ajax)
         * [RWD](#rwd)
         * [Literatur](#literatur)
      * [HTML](#html)
      * [CSS](#css)
      * [Bootstrap](#bootstrap)
      * [Literatur](#literatur-1)
   * [REST und HTTP](#rest-und-http)
      * [Einleitung](#einleitung)
         * [Lose Kopplung](#lose-kopplung)
         * [Interoperabilität](#interoperabilität)
         * [Wiederverwendung](#wiederverwendung)
         * [Performance und Skalierbarkeit](#performance-und-skalierbarkeit)
      * [Einführung](#einführung)
         * [Eindeutige Identifikation](#eindeutige-identifikation)
         * [Verknüpfungen](#verknüpfungen)
         * [Standardmethoden](#standardmethoden)
         * [Unterschiedliche Repräsentationen](#unterschiedliche-repräsentationen)
         * [Statuslose Kommunikation](#statuslose-kommunikation)
      * [MyTiWi](#mytiwi)
         * [Ressourcen](#ressourcen)
            * [Programme](#programme)
            * [Programme in unterschiedlichen Zuständen](#programme-in-unterschiedlichen-zuständen)
         * [Repräsentationen](#repräsentationen)
      * [Ressourcen](#ressourcen-1)
         * [Ressourcen und Repräsentationen](#ressourcen-und-repräsentationen)
         * [Ressourcendesign](#ressourcendesign)
            * [Primärressourcen](#primärressourcen)
            * [Sekundärressourcen](#sekundärressourcen)
            * [Listen](#listen)
            * [Filter](#filter)
            * [Paginierung](#paginierung)
            * [Projektionen](#projektionen)
            * [Aggregationen](#aggregationen)
            * [Aktivitäten](#aktivitäten)
            * [Konzeptressourcen](#konzeptressourcen)
         * [Ressourcenidentifikation und URI](#ressourcenidentifikation-und-uri)
            * [Schema und Host](#schema-und-host)
            * [Relative und absolute Pfade](#relative-und-absolute-pfade)
            * [Query Parameter](#query-parameter)
            * [Matrixparameter](#matrixparameter)
            * [Fragment-ID](#fragment-id)
      * [Verben](#verben)
         * [Standardverben von HTTP 1.1](#standardverben-von-http-11)
            * [GET](#get)
            * [HEAD](#head)
            * [PUT](#put)
            * [POST](#post)
            * [DELETE](#delete)
            * [OPTIONS](#options)
            * [TRACE und CONNECT](#trace-und-connect)
         * [Definition eigener Methoden](#definition-eigener-methoden)
      * [Repräsentationsformate](#repräsentationsformate)
         * [XML](#xml)
         * [HTML/XHTML](#htmlxhtml)
         * [Textformate](#textformate)
         * [CSV](#csv)
         * [JSON](#json-1)
         * [RSS und Atom](#rss-und-atom)
         * [Binäre Formate](#binäre-formate)
         * [Microformate](#microformate)
         * [RDF](#rdf)
      * [Sitzungen und Skalierbarkeit](#sitzungen-und-skalierbarkeit)
         * [Cookies](#cookies)
      * [Caching](#caching)
         * [Cache-Topologien](#cache-topologien)
         * [Caching und Header](#caching-und-header)
            * [Response-Header](#response-header)
            * [Request-Header](#request-header)
         * [Zusammenfassung](#zusammenfassung)
      * [Sicherheit](#sicherheit)
         * [SSL und HTTPS](#ssl-und-https)
         * [Authentifizierungsverfahren](#authentifizierungsverfahren)
      * [Dokumentation](#dokumentation)
         * [Beschreibungssprachen](#beschreibungssprachen)
      * [Erweiterte Anwendungsfälle](#erweiterte-anwendungsfälle)
         * [Asynchrone Verarbeitung](#asynchrone-verarbeitung)
            * [Notifikation per HTTP-Callback](#notifikation-per-http-callback)
            * [Polling](#polling)
         * [Zuverlässigkeit](#zuverlässigkeit)
         * [Transaktionen](#transaktionen)
            * [Atomare (Datenbank-)Transaktionen](#atomare-datenbank-transaktionen)
            * [Verteilte Transaktionen](#verteilte-transaktionen)
            * [Fachliche Transaktionen](#fachliche-transaktionen)
         * [Parallelzugriff und konditionale Verarbeitung](#parallelzugriff-und-konditionale-verarbeitung)
         * [Versionierung](#versionierung)
      * [Fallstudie: HarTivi](#fallstudie-hartivi)
      * [Literatur](#literatur-2)
   * [GraphQL](#graphql)
      * [Literatur](#literatur-3)
   * [JSON-API](#json-api)
      * [Literatur](#literatur-4)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc)



# REST und HTTP

## Einleitung

REST ist ein Weg, um Systeme miteinander zu verbinden. Andere Wege sind z.B. 

- Sockets
- Shared Memory
- Named Pipes
- RPC
- DCOM
- CORBA
- RMI
- Webservices

Vorteile von REST sind:

### Lose Kopplung

Lose Kopplung ist ein Prinzip für eine saubere Architektur. Der Grundgedanke dahinter ist, dass man eine Welt mit möglichst voneinander unabhängigen Komponenten haben will, um (ganz allgemein gesprochen) die Komplexität zu verringern. Siehe auch das Designprinzip SOLID.

### Interoperabilität

Unter Interoperabilität versteht man die Möglichkeit, soviele Systeme wie möglich zu unterstützen, obwohl diese vielleicht technisch unterschiedlich aufgebaut sind. Dafür ist REST bestens geeignet, da heutzutage fast von jedem Gerät HTTP und URI verstanden und unterstützt werden. 

### Wiederverwendung

Wiederverwendung ist je nach verwendeter Technologie oft ein Problem. REST verwendet exakt eine Schnittstelle. Egal, welche Implementierung dahinter steckt und deshalb ideal für eine Wiederverwendung geeignet. 

### Performance und Skalierbarkeit

REST und HTTP haben keinen bzw. einen geringen Anteil an der internen Implementierungsarchitektur und werden dadurch auch wenig Anteil an Performance-Problemen und Skalierbakeits-Problemen haben. 

## Einführung

REST ist ein Architekturstil, abgeleitet von der HTTP-Architektur. Allerdings ist REST eine Stufe abstrakter als die HTTP-Architektur. Entstanden ist sie durch die Dissertation von Roy Fielding im Jahre 2000 [2]. 

REST besteht größtenteils aus fünf Kernprinzipien.

- Ressourcen mit eindeutiger Identifikation
- Verknüpfungen/Hypermedia
- Standardmethoden
- Unterschiedliche Repräsentationen
- Statuslose Kommunikation

### Eindeutige Identifikation

Im Web gibt es ein einheitliches Konzept für die Vergabe von IDs. Nämlich die Uniform Resource Identifier, kurz URI. URIs bilden einen globalen Namensraum und sind daher eindeutig identifizierbar. 

- http://sicatedit.de/services
- http://sicatedit.de/services/34
- http://sicatedit.de/service/kika

Wir verwenden also URIs, um alle Instanzen unserer Architektur eindeutig zu identifizieren. 

### Verknüpfungen

Verknüpfungen sind der *Motor des Applikationszustandes* („*Hypermedia as the Engine of Application State*“). Mit Verknüpfungen kann z.B. ein Server dem Client über Links mitteilen, welche Aktionen er als Nächstes ausführen kann. 

Ein Beispiel: Unser Fernseher (Server) bietet mir eine Liste von Programmen. Hinter jedem Programm verbirgt sich ein <link>-Element, das eine Verknüpfung kapselt. Diese Verknüpfung verwendet der Client, um das entsprechende TV-Programm aus der Liste auszuwählen.

### Standardmethoden

Jede Resource unterstützt den gleichen Satz von Methoden. Bekannte Methoden sind z.B. GET und POST. Die Standardschnittstelle ermöglicht es allen Komponenten, die diese Schnittstelle verstehen, mit ihrer Applikation zu kommunizieren. Beispiele solcher Komponenten sind z.B. generische Clients wie 

- curl
- Wget

### Unterschiedliche Repräsentationen

Um mit (mehr oder weniger) beliebigen Ressourcen auf der Welt zu interagieren, sollte man unterschiedliche Repräsentationen meiner Ressourcen für unterschiedliche Anforderungen zur Verfügung stellen. Repräsentationen sind z.B. 

- XML
- JSON
- Text

```HTTP
GET /services/34 HTTP/1.1
Host: sicatedit.jp
Accept: application/mytiwi.services+xml
```

```HTTP
GET /services/34 HTTP/1.1
Host: sicatedit.jp
Accept: text/mytiwi+txt
```

### Statuslose Kommunikation

Statuslos im Umfeld von REST bedeutet, dass die Schnittstelle selbst statuslos bleibt. Man kann sich natürlich den Status auf dem Client merken und mitführen (z.B. einen TV-Serviceliste). Aber dieser Status hat keine Abhängigkeit auf die Kommunikationsschnittstelle. Eine andere Möglichkeit wäre, den Status im Server als Ressource zur Verfügung zu stellen. Somit könnte man darauf einen Link darauf setzen. Ein Hauptgrund für das Prinzip der statuslosen Kommunikation ist die Skalierbarkeit und das Prinzip der losen Kopplung. 

## MyTiWi

Zum besseren Verständnis werden wir eine simple TV-Anwendung erstellen. Sie soll das Programm abrufen können und einen Kanal selektieren können. 

### Ressourcen

| Ressource                          | URI                             | Methode  |
| ---------------------------------- | ------------------------------- | -------- |
| Liste aller Programme              | /programme/                     | GET      |
| Einzelnes Programm                 | /programme/{id}                 | GET, PUT |
| Audiospuren für einzelnes Programm | /programme/{id}/audio           | GET      |
| Einzelne Audiospur für Programm    | /programme/{id}/audio/{id}      | GET, PUT |
| Untertitel für einzelnes Programm  | /programme/{id}/untertitel      | GET      |
| Einzelne Untertitel für Programm   | /programme/{id}/untertitel/{id} | GET, PUT |

#### Programme

Die wichtigste Ressource ist natürlich ein Programm. Jedes Programm hat eine eigene Adresse.

```http
http://sicatedit.de/programme/{id}
```

Auch die Liste aller Programme ist eine Ressource.

```http
http://sicatedit.de/programme/
```

Um jetzt z.B. die Liste aller Programme im XML-Format zu erhalten, kann man z.B. mit dem Kommandozeilenwerkzeug curl folgenden HTTP-Request an die Ressource senden.

```http
curl -i http://sicatedit.de/programme/ -H 'Accept: application/xml'
```

curl sendet dadurch folgende Anfrage an den HTTP-Standardport (80):

```http
GET /programme/ HTTP/1.1
Host: sicatedit.de
User-Agent: curl/7.17.0 (i386-apple-darwin9.2.2) libcurl/7.17.0 zlib/1.2.3
Accept: application/xml
```

Als Antwort erhält man die Programmliste:

```http
HTTP/1.1 200 OK
Content-Type: application/xml; charset-utf-8
Content-Length: 1245
```

```xml
<?xml version="1.0" encoding="UTF-8"?>
<progamme xml:base="http://sicatedit.de">
    <programm href="/programme/123456">
        ...
    </programm>
    <program href="/programme/123458">
        ...
    </program>
</progamme>
```

Neben den wesentlichen Daten sehen sie eine Reihe von relativen URIs. Diese sind relativ zu einer Basis-URI. Falls wir diese beiden Informationen verknüpfen, ergben sich folgende URIs in unserer Antwort: 

```http
http://sicatedit.de/programme/123456
```

```http
http://sicatedit.de/programme/123458
```

Ein Client kann weitere Informationen zu einem Programm abfragen, indem er einem der Links "folgt", also eine HTTP-GET-Anfrage sendet und dabei die entsprechende URI angibt:

```http
curl -i http://sicatedit.de/programme/123456 -H 'Accept: application/xml'
```

Als Antwort werden Einzelheiten zum Programm zurückgeliefert:

```http
HTTP/1.1 200 OK
Content-Type: application/xml; charset-utf-8
Content-Length: 1392
```

```xml
<?xml version="1.0" encoding="UTF-8"?>
...
```



#### Programme in unterschiedlichen Zuständen

Ein Programm durchläuft eine Reihe von Zuständen. 

- Empfangen
- Selektiert
- Aktualisiert



### Repräsentationen

Üblicherweise werden die Daten in unterschiedlichen Repräsentationsformen zur Verfügung gestellt. Mögliche Repräsentationsformen sind z.B.:

- XML
- JSON
- CSB
- HTML

## Ressourcen

Das zentrale Konzept von REST sind Ressourcen. Eine Ressource zeichnet sich durch zwei wesentliche Eigenschaften aus: 

- sie ist identifizierbar
- sie hat eine oder mehrere Repräsentationen

### Ressourcen und Repräsentationen

Ressourcen werden durch ihre Repräsentation zur Verfügung gestellt. Repräsentationen können z.B. eine XML-Darstellung sein oder auch eine Grafik. Jede Ressource kann auch mehrere Repräsentationen haben (was auch oft der Fall ist). 

### Ressourcendesign

Wir unterscheiden folgende Ressourcenkategorien

#### Primärressourcen

Als Primärressourcen bezeichnen wir die in der fachlichen Domäne eindeutig und einfach zu identifizierenden Ressourcen. In unserem Beispiel stellt die Programmliste solch eine Primärressource dar. Eine weitere Primärressource ist ein einzelnes Programm. 

#### Sekundärressourcen

Sekundärressourcen sind Ressourcen, die Teil einer anderen Ressource sind. Als Beispiel könnte ich hier ein einzelnes Programm aufzählen. Wie wir sehen, ist die Unterscheidung in Primärressource und Sekundärressource nicht eindeutig. Letztendlich ist dies eine Designentscheidung. 

#### Listen

Für die meisten Primärressourcen gibt es auch eine zugehörige Listenressource. Die Menge aller Programme ist solch eine Listenressource. 

#### Filter

Listenressourcen müssen nicht alle Primärressourcen einer Kategorie enthalten. Man könnte sich ein Filterkriterium vorstellen, welches nur die Programme auf einer bestimmten Frequenz beinhaltet. 

#### Paginierung

Bei großen Datenmengen und z.B. großen Listen, ist man als Benutzer gewohnt, nur jeweils einen Teilausschnitt repräsentiert zu bekommen. Auch auf Serverseite möchte man oft nur auf einen Teil der Ressourcen zugreifen und z.B. bei einer GET-Anfrage als Antwort zurückgeben. 

#### Projektionen

Häufig ist es sinnvoll, nur einen Teil der verfügbaren Informationen für eine Ressource abzufragen. Man sollte dann die Informationsmenge auf eine sinnvolle Untermenge einschränken können. 

#### Aggregationen

Im Gegensatz zu einer Projektion fasst man bei einer Aggregation Attribute unterschiedlicher Ressourcen zusammen, um die Anzahl der notwendigen Interaktionen zu begrenzen. 

#### Aktivitäten

Oft findet man auch eine Reihe von Ressourcen, die sich aufgrund von Aktivitäten ergeben. 

#### Konzeptressourcen

Aus dem Semantic Web kennt man eine Konzeptressource, welches nicht selbst eine Ressource definiert, aber auf unterschiedliche Repräsentationen einer Ressource verweist. 

### Ressourcenidentifikation und URI

Ressourcen sind über eine ID identifizierbar. Im Web verwendet man dafür eine *URI*. *URI* steht für Universal *Resource Identifier* und im RFC 3986 [4] definiert. Eine URI ist quasi die Obermenge aller Ressourcenidentifikationen und ist (als wichtigste Eigenschaft) dereferenzierbar. Die Zeichen, die in URIs verwendet werden können, sind auf den US-ASCII Zeichensatz beschränkt. Eine HTTP-UIR besteht aus einzelnen Komponenten, die durch ein Trennzeichen voneinander separiert werden. Zu den wichtigsten Trennzeichen gehören '':'', ''/'', ''?'' und ''#''.

#### Schema und Host

Jede URI beginnt mit einem Schema, gefolgt von einem Doppelpunkt. Schemata sind z.B. 'http' und 'https'. Danach folgt der Hostname, optional gefolgt von einem Port (standardmäßig Port 80 für HTTP und Port 443 für SSL). Beispiele:

- http://www.sicatedit.com/a/b/c
- http://dauuser:passwort@www.sicatedit.com/a/b/c
- https://www.sicatedit.com:8444/a/b/c

#### Relative und absolute Pfade

Der erste Bestandteil, der auf den Hostnamen und den optionalen Port folgt, bezeichnet man als *Pfad*. Alle Elemente innerhalb des Pfades werden wiederum durch einen Schrägstrich getrennt. 

- http://www.sicatedit.com/main/sub/component/3

Neben absoluten Pfaden gibt es auch relative Pfade. Diese werden ebenfalls analog zu einem Dateisystem angegeben. Man könnte z.B. per HTTP GET auch auf eine Resource mit ../sub/component/4 zugreifen. 

#### Query Parameter

> Der Pfadanteil einer URI wird durch ein optionales '?' von einem (ebenfalls optionalen) weiteren Anteil getrennt, dem Query-Parameter. 
>
> - http://www.sicatedit.com/programme?name=ARD&subscription=free

#### Matrixparameter

Mit Matrixparametern kann man boole'sche Werte ausdrücken.

- [http://www.sicatedit.com/programme?sort=alphabetical;descending](http://www.sicatedit.com/programme?sort=alphabetical;descending ) 
- [http://www.sicatedit.com/programme?sort=alphabetical;count=20](http://www.sicatedit.com/programme?sort=alphabetical;count=20)

#### Fragment-ID

Fragment-IDs sind ebenfalls optional. Er folgt auf den Query-Anteil und wird durch eine Raute getrennt. 

- http://www.sicatedit.com/main/sub/component/3#section12

Dabei wird der ganze Inhalt heruntergeladen, danach aber clientseitig bis zu *section12* gescrollt. 

## Verben

REST legt fest, dass es eine definierte, begrenzte Menge von Operationen geben muss. Welche das sind, legt REST nicht fest. REST/HTTP dagegen definiert eine konkrete Liste von Verben.

### Standardverben von HTTP 1.1 

#### GET

Die wichtigste Operation ist sicherlich GET. GET dient dazu, die Information, die durch eine URI repräsentiert wird, in Form einer Entity (Repräsentation) abzuholen. Die Operation ist safe (sicher) und idempotent. 

#### HEAD

HEAD ist GET sehr ähnlich. Allerdings wird keine Repräsentation zurückgegeben, sondern nur die Metadaten. 

#### PUT

Mit PUT wird eine bestehende Ressource aktualisiert, oder, falls noch nicht vorhanden, erzeugt. PUT ist idempotent. Idempotenz definiert eine Klasse von Funktionen, die das gleiche Resultat liefern, wenn man sie auf sich selbst anwendet (f(x) = f(f(x))): 

#### POST

POST bedeutet im engeren Sinne das Anlegen einer neuen Ressource unter einer vom Server bestimmten URI. Ansonsten wird POST auch für alle die Zwecke eingesetzt, in denen keine der anderen Methoden passt. 

#### DELETE

DELETE ist für das Löschen einer Ressource zuständig, deren URI im Request angegeben wird. 

#### OPTIONS

OPTIONS liefert Metadaten über eine Ressource, unter anderem über die Methoden, die eine Ressource unterstützt. 

#### TRACE und CONNECT

TRACE dient zur Diagnose von HTTP-Verbindungen. CONNECT dient zur Initiierung einer Ende-zu-Ende-Verbindung bei der Verwendung von SSL durch einen Proxy. 

### Definition eigener Methoden

Es ist natürlich auch möglich, eigene Verben zu definieren. Man sollte diese Möglichkeit aber immer abwägen, da eigene Methoden natürlich eine proprietäre Implementierung sind. Stattdessen kann man aber auch auf gängige andere Protokolle zurückgreifen, die ebenfalls eigene Methoden implementieren, die aber von allen bekannteren Webserven unterstützt werden. 

Beisipiel. WebDAV

## Repräsentationsformate

Die Repräsentation von Ressourcen können unterschiedliche Formate haben. Der Client gibt als Teil der Anfrage in einem Accept-Header an, welche Typen von Inhalten (Media Types) er akzeptiert. Die bekanntesten Medienformate sind:

- XML
- HTML/XHTML
- Textformate
- CSV
- JSON
- RSS und Atom
- Binäre Formate
- Microformate
- RDF

### XML

XML ist das wahrscheinlich am meisten verbreitete Format. Bei XML existiert die Möglichkeit, entweder ein benutzerdefiniertes oder ein standardisiertes XML-Format zu wählen. 

### HTML/XHTML

HTML sollte jedem bekannt sein. Vorteil dieses Formats ist natürlich, dass jeder handelsübliche Browser das Format interpretieren und darstellen kann. Aktuelle Version ist HTML 5 [7]. Ob HTML für eine spezifische Anwendung sinnvoll ist oder nicht, muß jeder für sich entscheiden.

### Textformate

Das einfachste Format ist sicherlich das Textformat. Falls die Information/Ressource als Text vorliegt, kann es durchaus angebracht sein, das simple Textformat zu unterstützen. 

### CSV

CSV steht für Comma Separated Value und wird vor allem in Kombination mit Tabellenkalkulationen verwendet. Im Prinzip handelt es sich um ein zeilenorientiertes Format, bei dem die Spalten per Komma separiert sind. 

### JSON

Eins der beliebtesten Formate heutzutage ist sicherlich JSON [8]. Es gibt heutzutage nahezu für jede Programmiersprache JSON-Bibliotheken. Der Fokus bei JSON (im Unterschied zu XML) liegt auf Datenstrukturen, nicht auf Text. 

### RSS und Atom

RSS und Atom sind jeweils ein XML-Format, in dem Informationen über Änderungen an einer Website an interessierte Parteien übermittelt werden. 

### Binäre Formate

Für eine Vielzahl von Informationen existieren Binärformate. Als Beispiel nenne ich hier z.B. JPEG oder PNG.

### Microformate

Microformats sind strukturierte Darstellungsformen für häufig verwendete Daten, z.B. Kalendereinträge oder Visitenkarten.

### RDF

RDF steht für Resource Description Framework [9]. Es hat sich im Zuge von dem Konzept des Semantic Web gebildet. RDF besteht aus Tripeln. Jedes Tripel besteht aus Subjekt, Prädikat und Objekt. 

## Sitzungen und Skalierbarkeit

Zum Thema Sitzungen und Skalierbarkeit gibt es die Empfehlung (Best Practice), die Kommunikation möglichst statuslos zu gestalten. Grob gesagt bedeutet es, dass jeder Request alle Daten enthält, die der Server braucht, um ihn zu verarbeiten. Der Verzicht auf einen Sitzungsstatus sollte ein anzustrebendes Ziel darstellen. 

### Cookies

Cookies wurden ursprünglich erfunden, un dem statuslosen Charakter von REST-HTTP zu umgehen. Mit Cookies kann ich einen Client üblichwerweise eindeutig (wieder-)identifizieren. 

## Caching 

Ein wesentliches Element des REST-Stils ist das Caching. Caching ist eine zentrale Voraussetzung für die Skalierbarkeit der Architektur. Mit Caching können schon einmal gestellte Anfragen 'direkt' beantwortet werden. 

### Cache-Topologien

Im Prinzip gibt es zwei Cache-Topologien. Man kann einen Cache auf Client-Seite vorsehen. Oder man kann einen Cache auf Server-Seite vorsehen. Daneben gibt es noch die Möglichkeit einer Kombination beider Topologien. 

### Caching und Header

Client und Server können das Caching beeinflussen, indem sie dafür relevante HTTP-Header verwenden. Der wichtigste dieser Header ist "Cache-Control". 

#### Response-Header

| Header-Beispiel                      |      |
| ------------------------------------ | ---- |
| Cache-Control: private, max-age=60   |      |
| Cache-Control: public, max-age=60    |      |
| Cache-Control; no-cache              |      |
| Cache-Control; no-cache="Set-Cookie" |      |

#### Request-Header

| Header-Beispiel         |      |
| ----------------------- | ---- |
| max-age=...             |      |
| min-fresh=...           |      |
| max-stale=...           |      |
| Cache-Control: no-cache |      |
| only-if-cached          |      |

### Zusammenfassung

Verwende, falls möglich, für REST-Anwendungen die Cache-Control-Header. 

## Sicherheit 

Für eine REST-HTTP Anwendung ist Sicherheit ein großes Thema. Dabei geht es vor allem um Verschlüsselung, Signaturen und andere Sicherheitsmechanismen. 

### SSL und HTTPS

Die Kommunikation zwischen Client und Server kann verschlüsselt über HTTPS erfolgen (HTTP über SSL oder den Nachfolger TLS).

Bei einer Kommunikation über SSL/TLS beweist der Server seine Identität gegenüber dem Client. Daneben gibt es auch die Möglichkeit, dass der Client seine Identität gegenüber dem Server ebenfalls beweisen kann, z.B. per Benutzername/-passwort. 

### Authentifizierungsverfahren

- HTTP Basic Authentication
- HTTP Digest Authentication
- HMAC
- OpenID
- OAuth

## Dokumentation

### Beschreibungssprachen

Es gibt mehrere Ansätze, um REST-HTTP Schnittstellen zu dokumentieren. 

- HTMP Page
- WSDL
- WADL
- RDDL

## Erweiterte Anwendungsfälle

### Asynchrone Verarbeitung

HTTP ist ein synchrones Request/Response-Protokoll, d.h. zu jeder Anfrage gehört eine Antwort. Dies mag nicht immer von Vorteil sein. Deshalb gibt es auch mehrere Ansätze asynchrone Verarbeitung durchzuführen. Eine oft verwendete Alternative ist, dass der Server die Anfrage zwar entgegennimmt, aber als Ergebnis quasi nur die Quittierung des Empfangs zurückliefert (Statuscode 202 Accepted). Das eigentliche Ergebnis wird später zurückgeliefert. Dies kann durch eine aktive Notifikation geschehen oder durch einen Polling-Mechanismus. 

#### Notifikation per HTTP-Callback

Notifikation per HTTP-Callback bedeutet, dass der Client dem Server als Teil des Requests eine URI übermittelt, die dieser verwendet, um zu einem späteren Zeitpunkt das Ergebnis zu übermitteln.

```http
...
<job xmlns="http://sicatedit.com/...">
   <input-data>...</input-data>
   <notification-uri>http://sicatedit.com/callback/123</notification-uri>
</job>
...
```

#### Polling

Alternativ kann der Client periodisch beim Server anfragen, ob schon ein Resultat vorhanden ist. Das Resultat liefert der Server dann in einer *202-*Antwort. Solange die Verarbeitung noch läuft, kann der Server mit einem *404 Not Found* oder einem *200 OK* antworten und den Status der Verarbeitung zurückliefern. 

### Zuverlässigkeit

Bei der Zuverlässigkeit geht es vor allem darum, ob die Anfrage (Request) ankam oder nicht. Bei der REST-konformen Lösung setzt man vor allem auf die Idempotenz der REST-Methoden. Die HTTP-Methoden GET, HEAD, PUT und DELETE sind idempotent, d.h. der Client darf sie per Definition ohne negativen Effekt ein zweites Mal aufrufen. 

In der Praxis darf der Client erneut senden, falls auf die HTTP-Anfrage keine Antwort kam. 

Ein kleines 'Problem' haben wir dennoch: POST ist nicht idempotent. Evtl. kann man auf POST einfach verzichten. Ansonsten gibt es auch die Möglichkeit, POST quasi 'idempotent' zu machen.

### Transaktionen

#### Atomare (Datenbank-)Transaktionen

Auch bei REST-HTTP ist es üblich und sinnvoll, bei Beginn der Verarbeitung im Server eine Transaktion zu starten und sie vor dem Versenden der Antwort an den Client wieder zu beenden

#### Verteilte Transaktionen

Bei verteilten Transaktionen ist das System nicht auf eine einzelne Datenbank beschränkt. Dies stellt allerdings besondere Anforderungen an die Implementierung. 

#### Fachliche Transaktionen

...

### Parallelzugriff und konditionale Verarbeitung

Üblicherweise muß man mit parallelen Zugriff auf den Server rechnen. Dafür gibt es verschiedene Ansätze:

1. Problem ignorieren
2. Resource explizit sperren
3. optimistische Nebenläufigkeitskontrolle

### Versionierung

Auch bei REST-HTTP muß man sich bei veränderten Schnittstellen um die Versionierung kümmern. Drei Möglichkeiten.

1. Zusätzliche Ressourcen
2. Erweiterbare Datenformate
3. Versionsabhängige Repräsentationen

## Fallstudie: HarTivi



## Literatur

[1] REST und HTTP, Stefan Tilkov, 2011

[2] Roy Thomas Fielding: Architectural Styles and the Design of Network-based Software Architectures, https://www.ics.uci.edu/~fielding/pubs/dissertation/fielding_dissertation_2up.pdf, abgerufen am 07.03.2019

[3] curl, https://curl.haxx.se/, abgerufen am 09.03.2019

[4] RFC 3986: Uniform Resource Identifier (URI): Generic Syntax, https://www.ietf.org/rfc/rfc3986.txt, abgerufen am 10.03.2019

[5] Web-based Distributed Authoring und Versioning, http://webdav.org/, abgerufen am 30.03.2019

[6] HTML 4 Specification, https://www.w3.org/TR/html4/, abgerufen am 31.03.2019

[7] HTML 5 Specification, https://www.w3.org/TR/html/, abgerufen am 31.03.2019

[8] JSON, http://json.org/, abgerufen am 31.03.2019

[9] Resource Description Framework (RDF), https://www.w3.org/RDF/, abgerufen am 31.03.2019

[10] API-Design, https://docs.microsoft.com/de-de/azure/architecture/best-practices/api-design, abgerufen am 01.04.2019

[11] HTTP/1.1, RFC 7230: Message Syntax and Routing

[12] HTTP/1.1, RFC 7231: Semantics and Content

[13] HTTP/1.1, RFC 7232: Conditional Requests

[14] HTTP/1.1, RFC 7233: Range Requests

[15] HTTP/1.1, RFC 7234: Caching

[16] HTTP/1.1, RFC 7235: Authentication

[17] Gezielte Auswahl, Typsichere GraphQL-APIs mit Java und React, Nils Hartmann, iX 6/2019

[18] json:api, https://jsonapi.org/, abgerufen am 08.12.2019

[19] golem.de - Warum jetzt die beste Zeit ist, Web-Developer zu werden, https://www.heise.de/ratgeber/Warum-jetzt-die-beste-Zeit-ist-Web-Developer-zu-werden-4845043.html, abgerufen am 30.07.2020

[20] c't 05/2018, Manuel Ottlik, Webdienste per REST-Schnittstelle anzapfen

[21] c't 05/2020, Manuel Ottlik, REST-APIs dokumentieren nach OpenAPI-Standard

[22] Gezielte Auswahl, Typsichere GraphQL-APIs mit Java und React, Nils Hartmann, iX 6/2019

