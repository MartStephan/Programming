# HTML und CSS

[TOC]

Table of Contents
=================

* [Table of Contents](#table-of-contents)
  * [HTML](#html)
    * [Struktur](#struktur)
    * [Syntax](#syntax)
    * [Elemente](#elemente)
  * [CSS](#css)
    * [Syntax](#syntax)
    * [Positionierung und Box-Modell](#positionierung-und-box-modell)	
    * [Responsive Web Design](#responsive-web-design)
  * [XML](#xml)
  * [Literatur](#literatur)


## HTML - Hypertext Markup Language

HTML beschreibt die Struktur eines HTML-Dokuments (z.B. Kapitel, Absatz, Überschrift, ...).

### Struktur

Grundgerüst eines HTML-Dokuments

```html
<!DOCTYPE html>
<html>
    <head>
        <title>Martin Stephan</title>
    <body>
        <h1>HTML</h1>
        <p>HTML beschreibt die Struktur eines HTML-Dokuments und 
           so weiter und so fort...</p>
    </body>
    </head>
</html>
```

HTML-Dokument beginnt immer mit der Angabe der verwendeten HTML-Version.

```html
<!DOCTYPE html> 
```

... für HTML5-Dokumente. 

Der **Header** enthält Informationen über das Dokument, die nicht zum eigentlichen Inhalt gehören.

Der **Body** enthält den eigentlichen Inhalt des Dokuments. 

Strukturelle Elemente des HTML-Dokuments werden jeweils von einem **Start-Tag** und einem **End-Tag** eingefasst.

Tags können in Form von **Attributen** zusätzliche Informationen enthalten. 

HTML-Elemente werden immer sequenziell angeordnet oder ineinander verschachtelt. Dadurch ergibt sich eine Baumstruktur, der sogenannte **HTML-Dokumentenbaum**. 

### Syntax 

- alle Tags schließen

- Leere Elemente schließen

  - z.B. Tag für einen Zeilenumbruch

  - ```html
    # leere Elemente schließen, .B. <br>-Tag für einen Zeilenumbruch
    <br />
    ```

- keine kreuzweise Verschachtelung

  - ```html
    <p><i>Kursiver Text</i></p>
    ```

- Einheitlich Kleinbuchstaben für Tag-Namen verwenden
- Einheitlich Kleinbuchstaben für Attributnamen
- Werte von Attributen in Anführungszeichen
- Keine Leerzeichen in Attributzuweisungen
- Keine unnötigen Leerzeichen und Leerzeilen
- Dateinamen
  - in Kleinbuchstaben mit Unterstrichen (html_syntax.html)
  - Dateiendung für HTML: *.html* oder *.htm*
  - Dateiendung für CSS: *.css*
  - Dateiendung für JavaScript: *.js*
- Leerzeichen statt Tabulatoren für die Einrückung verwenden (Beachte: Coding Convention only)

### Elemente

**Kopf (Header)** eines Dokuments enthält Informationen über das Dokument - Meta-Informationen. 

Header wird umschlossen von <header>...</header>

Folgende Tags können verwendet werden.

- *title*: Titel der Seite zur Anzeige in der Browser-Kopfleiste

- *base*: Basis-URL für alle URLs in der HTML-Datei

- *style*: Definition von CSS-Styles

- *link*: Einbettung externer Ressourcen, z.B. CSS-Dateien

- *script*: JavaScript für das Dokument oder Einbettung einer externen JavaScript-Datei

- *noscript*: alternativer Seiteninhalt für Browser, die kein JavaScript ausführen können

- *meta*: Metainformationen für das Dokument, z.B. 

- ```html
  <meta name="author" content="Martin Stephan">
  <meta name="keywords" content="HTML, CSS, ...">
  <meta charset="UTF-8">
  <meta http-equiv="refresh" content="10">
  ```

Der **Body** beinhaltet den eigentlichen Inhalt eines HTML-Dokuments. 

Body wird eingefasst von <body>...</body> - Tags.

Man unterscheidet zwischen 

- Block-Elementen - bestimmen Block-basierte Strukturen im Body des Dokuments
- Inline-Elementen - befinden sich im Fließtext

Mittels CSS kann für viele Elemente festgelegt werden, ob diese als Block- oder Inline-Elemente behandelt werden sollen. 

Die wichtigsten Text- Strukturelemente sind:

```html
<p> Paragraph, Absatz </p>
<div> Division, Abschnitt </div>
<h1> bis </h1> <h6> (Zwischen-)Überschriften absteigender Wichtigkeit</h6>
<span> Abschnitte in Fließtext </span>
<blockquote> Zitate </blockquote>
<i> italics, kursiv </i>
<b> bold, fettgedruckt </b>
# ohne schließenden End-Tag
<hr> horizontal rule, horizontale Linie
<br> break, Zeilenumbruch
```

Es gibt weiterer Strukturelemente - sogenannte semantische Elemente.

```html
<section></section>
<article></article>
<header></header>
<footer></footer>
<aside></aside>
<nav></nav>
#...
```

**Hyperlinks**

HTML kennt verschiedene Typen von Hyperlinks.

- Unsichtbare Links; werden im Hintergrund automatisch vom Browser bearbeitet - <link>
- Sichtbare Links; werden durch einen Mausklick des Nutzers aktiviert - <a>

Das <a>-Element kann für verschiedene Zwecke genutzt werden

- Markierungen (Ankerpunkte) - <a name="ziel"></a>
- Sprung zu einem Ankerpunkt - 
- Sprung zu einem externen Ziel - URL kann absolut oder relativ sein
- <a>-Tags kennt neben href auch weitere Attribute 
  - target

**Bilder**

Bilder haben einen eigenen Tag: <img> (ohne Endtag)

Wichtige Attribute:

- *src*: URL, bei der das Bild liegt
- *alt*: alternativer Text, der angezeigt wird, wenn das Bild nicht geladen oder angezeigt werden kann
- *height* / *width*: Höhe und Breite, in der das Bild angezeigt werden soll

```html
<a href="https://www.bilder.de" target="_blank">
    <img src="/img/lustig.png" alt="Das ist lustig" />
</a>
```

**Inhalte**

```html
# ungeordnete Listen mit Listenelement
<ul>
    <li></li>
</ul>
# geordnete Listen
<ol>
    <li></li>
</ol>

```

**Tabellen**

```html
# Tabellen
<table>
    <tr> neue Zeile in einer Tabelle </tr>
    <td> neue Zeile in einer Tabellenzeile </td>
    <th> Auszeichnung spezieller Zeilen für den Tabellenkopf </th>
</table>

<thead></thead>
<tbody></tbody>
<tfoot></tfoot>

# spezielle Attribute für <td></td>
# colspan
# rowspan

# Beschriftung
<caption>...</caption>
```

Formatierung der Tabelle erfolgt mittels CSS.

**Formulare**

Um Daten vom Browser zum Server senden zu können, gibt es die HTML Formulare. 

Formulare werden mit <form>-Tag erzeugt.

```html
<form action="/login" method="POST">
    # action: Gibt Ziel des Formulars an
    # method: Gibt HTTP-Methode an, mit der das Formular gesendet wird
</form>

# grundlegende Eingabefelder 
# <input type="text"> - Texteingabefeld
# <input type="password"> - Texteingabefeld für Passwörter, Eingabe wird nicht angezeigt 
# <input type="radio"> - Radio Button
# <input type="checkbox"> - Boxen mit Häkchen für Mehrfachauswahl

# Auswahlfeld zum Ausklappen
<select name="bestellung">
    <option>Hamburger</option>
    <option>Cheeseburger</option>
    <option>Veggieburger</option>
</select>

// Textfeld für mehrzeiligen Text
<textarea rows="5" cols="20"></textarea>

// Button zum Absenden des Formulars
<input type="submit" value="Senden" />

// Eingabefelder
// Zahlenbereiche können mit Slider ausgewählt werden
<input type="range" min="0" max="10">

// Vorschläge mit (Auto-)Vervollständigung
<input type="text" list="browsers">
<datalist name="browsers">
	<option>Firefox</option>
    <option>Internet Explorer</option>
</datalist>

// Eingabefelder für numerische Werte
<input type="number" value="100">

// Eingabefelder mit Eingabevalidierung
<input type="email">
<input type="url">

// Farbauswahl mit 'Color Picker'
<input type="color">

// Eingabefelder für Zeit und Datum
<input type="datetime-local">

// Attribute für Eingaberestriktionen
// max, min
// required
// Pattern

// Weitere Attribute
// placeholder
<input type="email" placeholder="Ihre E-Mail Adresse">

// Multimedia Inhalte
// Tags für <audio> und <video> erlauben es, Multimedia-Dateien direkt mit dem Browser abzuspielen
// Bedienelemente können mit CSS gestaltet werden
```

Betriebssysteme bzw. Browser benötigen für Wiedergabe Codecs. Für HTML5 sind vorgesehen:

- Audio: mp3, wma, AAC, Ogg Vorbis
- Video: H.264, Ogg Theora, WebM

Alternative Quellen, z.B. für unterschiedliche Codecs oder Bitraten können mit <source>-Tag angegeben werden. 

```html
<audio>
	<source src="/audio/track1.wma" type="audio/x-ms-wma">
    <source src="/aduio/track1.mp3" type="audio/mpeg">
</audio>
```

Browser spielt das erste <source->Element ab, über dessen Codec der Browser verfügt. 

Unbekannte Tags werden vom Browser ignoriert; deshalb entsprechenden Hinweis für ältere Browser hinzufügen. 

Eine Zeichenfläche für Bitmap-Grafiken bietet das <canvas>-Tag.  Auf Canvas kann mit JavaScript gezeichnet werden.

```html
<canvas id="example" width="250" height="250">
    Ihr Browser unterstützt HTML 5 Canvas nicht. 
</canvas>

<script type="text/javascript">
    <!-- Zugriff auf Canvas-Element über Variablen -->
    const example = document.querySelector('#example');
    const context = example.getContext('2d');
    
    <!-- Blau als Füllfarbe -->
    context.fillstyle = "rgb(0,0,255)";
    
    <!-- Quadrat zeichnen -->
    context.fillRect(50,10,100,100);
</script>
```

Weitere Features sind z.B. Tags wie <time>, <meter> oder <progress>.

## CSS - Cascading Stylesheets

CSS beschreibt die Darstellung (Layout) eines HTML-Dokuments (z.B. Schriftarten, Schriftgrößen, ...). Mit CSS wurde eine unabhängige Formatierungs-Beschreibungssprache für die Beschreibung der Layout-Präsentation von HTML-Dokumenten entwickelt. 

Stylesheets können auf verschiedene Arten mit HTML-Dokumenten verbunden werden. 

- Inline-Definition in HTML-Elementen mit style-Attribut

- ```html
  <span style="font-weight: bold">Fetter Text</span>
  ```

- (Interne) Stylesheets in HTML-Dokumenten mit dem <style>-Tag

- (Externe) Stylesheets werden mithilfe der <link>-Deklaration im Header des HTML-Dokuments aus separaten Dateien eingebunden

### Syntax

Ein CSS Stylesheet ist eine Ansammlung von Regeln. Beispiel für eine CSS Regel. 

```css
h1 {
    color: blue;
    font-family: Arial, Helvetica, sans-serif;
    font-size: 14px;
}
```

Eine CSS Regel besteht also aus

- einem Selektor (hier: h1)
- und (einer) Deklaration(en) (hier: color: ...)

Mögliche Deklarationen, die mit einer CSS Regel beschrieben werden können, sind z.B.: 

- Schrift
- Abstände und Rahmen
- Position und Größe
- Farben und Hintergründe
- Sichtbarkeit und Art der Anzeige
- Umfließung
- ...

Ein Selektor wählt HTML-Elemente aus, für das die Deklarationen angewendet werden. Es gibt: 

- Klassen- und ID-Selektoren
- Attribut-Selektoren
- Context-Selektoren
- Externe Selektoren 

Beispiele

```css
/* Standard Selektor */
p { color: red; }

/* Attribut Selektor */
p[small] { font-size: 8px; }

/* Kontext-Selektor */
td p { color:#0000FF; }

/* Klassen Selektor */
p.footnote { font-size: 8px; }

/* ID-Selektor */
a#imprint { font-weight: bold; }

/* Pseudo-Klassen und Pseudo-Elemente (kleine Auswahl only) */
a:hover { text-decoration: underline; }
input:focus { border: ipx solid blue; }
```

**Vererbung**

CSS-Formatierungsanweisungen werden im HTML-Dokumentenbaum an alle unter einem Element liegende Nachfahren vererbt. 

**Mehrere Stylesheets**

Eine der grundlegenden Ideen von CSS ist die gleichzeitige Nutzung von mehreren Stylesheets. Mögliche Kaskadierung umfasst:

- Browser-Stylesheets
- Nutzer-Stylesheets
- Autoren-Stylesheets

### Positionierung und Box-Modell

Mittels Positionierung können Elemente innerhalb eines HTML-Dokuments angeordnet werden. Außerdem wird festgelegt, wie Elemente vom Text umflossen werden.

Durch die Verwendung von *position* können Elemente beliebig positioniert und aus dem regulären Elementfluss entfernt werden. Es gibt die position-Eigenschaften:

- absolute
- fixed
- relative 
- static

Beispiel

```css
/* CSS Stylesheet */
div.relative {
    position: relative; 
}

div.absolute{
    position: absolute;
    top: 50px;
    right: 0;
}
```

```html
<!-- html Dokument -->
<div class="relative">
    Dieses div hat die Position relative.
    <div class="absolute">
        Dieses div hat die Position absolute.
    </div>
</div>

```

**z-Index**

Die z-Index Eigenschaft wird für Elemente verwendet, die sich überlappen. Je größer der Wert, desto höher liegt das Element und überdeckt andere Elemente. 

**Box-Modell**

Rechtecke werden durch das Box-Modell beschrieben. Bestandteile einer Box sind:

- Inhalt - Texte und Bilder
- Innenabstand - (padding)
- Rahmen - (border)
- Außenabstand - (margin)

```css
/* Box-Modell Beispiel */
div {
    background-color: lightgrey;
    width: 300px;
    padding: 25px;
    border: 25px solid green;
    margin: 25px;
}
```

### Responsive Web Design

RWD* steht für *Responsive Web Design*. Es bezeichnet ein Konzept im Rahmen der Gestaltung von Webseiten, das ein komfortables Lesen der Webseiten auf jeder Bildschirmgröße ohne Scrolling erlaubt. *Responsive Web Design* realisiert man mit Box- beziehungsweise Flexbox-Modell in CSS direkt oder mit darauf aufbauenden Frameworks wie *Bootstrap*. 

Folgende Paradigmen gelten:

- Webseiten sollen auf Spezifika verschiedener Endgeräte - Desktop, Tablet, Smartphone, - reagieren können.
- RWD sollte technisch aber nur vermittels HTML und CSS realisiert werden - JavaScript soll in der Regel nicht zum Einsatz kommen.
- RWD sollte auch nicht darauf beruhen, auf kleineren Bildschirmen Inhalte wegzulassen, sondern diese anders anzuordnen. 

**Viewport**

Viewport bezeichnet den für Nutzer sichtbaren Bereich einer Webseite. HTML erlaubt Autoren, den Viewport selbst festzulegen: 

```html
<!-- Viewport festlegen -->
<meta name="viewport" content="width=device-width">
<!-- device-width ist die Breite des genutzten Gerätes -->
```

**CSS Layout** 

Webseiten werden häufig anhand eines horizontalen Rasters (Grid) gestaltet, die für verschiedene Bildschirmbreiten skaliert werden. 

**Media Queries**

CSS3 führt erstmals Media Queries ein. Dabei erlauben @media Blöcke die Definitionen von CSS-Regeln, die nur gelten, wenn eine bestimmte Bedingung gilt. 

Beispiel: Nur für Bildschirme bis maximale Smartphone-Breite

```css
@media only screen and (max-width: 768px) {
    img { width: 100% }
}
```

Nur für Bildschirme im Querformat

```css
@media only screen and (orientation: landscape) { ... }
```

## XML - Extensible Markup Language 

XML erlaubt die Einführung von neuen und aussagekräftigen Elementen durch die Definition von eigenen DTDs (HTML Document Type Definition). XML ist deshalb eine Meta-Markup-Sprache. 

Die XML-Spezifikation beschreibt nur die Struktur von Dokumenten. Ein XML-Dokument, das der allgemeinen XML-Spezifikation entspricht und die Regeln und Definitionen in der Grammatik einhält, wird valide genannt. 

Definition der Grammatik kann durch ein XML-Schema oder eine DTD festgelegt werden. 

## Literatur 

[1] openHPI, Zum Web-Profi in drei Schritten, https://open.hpi.de/courses/webtech-exam-2, abgerufen am 4.11.2022

[2] HTML Tag-Referenz, https://www.w3schools.com/tags/, abgerufen am 1.11.2022

[3] HTML elements reference, https://developer.mozilla.org/de/docs/Web/Html/Element, abgerufen am 1.11.2022

[4] Browser-Unterstützung, https://caniuse.com, abgerufen am 1.11.2022



