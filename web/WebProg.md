# Web Programmierung JavaScript

[TOC]

Table of Contents
=================

* [Table of Contents](#table-of-contents)
  * [Clientseitige Web-Programmierung](#clientseitige-web-programmierung)
  * [DOM](#dom)
  * [JavaScript](#javascript)
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

JavaScript wird zur Clientseitigen Web-Programmierung eingesetzt. Features von JavaScript sind:

- Zugriff und Manipulation der HTML-Struktur Document Object Model (DOM)
- Reaktion von auf Nutzer ausgelöste Events
- Asynchrone Server-Kommunikation im Hintergrund: AJAX, WebSockets
- Animationen, 3D-Grafiken, Musik
- Zugriff auf Standort, Batteriestatus, Webcam, Mikrofon, ..
- Service-Worker: Ermöglicht Offline-Zugriff auf Webseiten



## Literatur 

[1] openHPI, Zum Web-Profi in drei Schritten, https://open.hpi.de/courses/webtech-exam-2, abgerufen am 15.11.2022

[2]



