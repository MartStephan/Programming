---

---

# Foundations of Software Architecture

[TOC]

Table of Contents
=================

* [Foundations of Software Architecture](#foundations-of-software-architecture)
* [Table of Contents](#table-of-contents)
  * [Softwarearchitektur - Definition](#softwarearchitektur-definitionen)
  * [Softwarearchitektur-Prozess](#softwarearchitektur-prozess)
    * [Ziele und Aufgaben des Softwarearchitekturentwurfs](#ziele-und-aufgaben-des-softwarearchitekturentwurfs)
  * [Anforderungen](#anforderungen)
  * [Systemkontext](#systemkontext)
  * [Randbedingungen](#randbedingungen)
  * [Qualität](#qualitaet)
    * [Metriken und Messgrößen](#metriken-und-messgr%C3%B6%0D%0A%C3%9F%0D%0Aen)
  * [Architekturentscheidungen](#architekturentscheidungen)
  * [Architektur- und Entwurfs-Prinzipien](#architektur-und-entwurfs-prinzipien)
  * [Vorgehen und Heuristiken zur Architekturentwicklung](#vorgehen-und-heuristiken-zur-architekturentwicklung)
  * [Lösungsmuster für Architekten](#loesungsmuster-fuer-architekten)
  * [Architekturstile und -muster](#architekturstile-und-muster)
  * [Architektur-Sichten](#architektur-sichten)
  * [Schnittstellen](#schnittstellen)
  * [Taktiken und Praktiken](#taktiken-und-praktiken)
  * [Querschnittskonzepte](#querschnittskonzepte)
  * [Bewertung](#bewertung)
  * [Quantitative Bewertung und Metriken](#quantitative-bewertung-und-metriken)
  * [Heuristiken](#heuristiken)
  * [DevOps](#devops)
  * [Release It!](#release-it!)
  * [Literatur](#literatur)

## Softwarearchitektur - Definition

Es gibt viele Definitionen von Softwarearchitektur und nicht die eine richtige. Wichtig dabei ist: Kläre mit Deinen Stakeholdern, was ihr meint, wenn ihr "Architektur" sagt.

Eine Definition von Softwarearchitektur, die von Eoin Woods kommt, heißt: **"Sofwarearchitektur ist die Summe der schwierigen Entscheidungen hinsichtlich des Entwurfs von Software. Es sind jene Entscheidungen, deren Risiko besonders hoch ist. Entweder, weil sie die Qualität der Software maßgeblich beeinflussen oder weil sie sich nur unter hohem Zeit- oder Geldaufwand korrigieren lassen."**

Wichtig zu wissen ist, dass die Architektur eines Systems nicht im luftleeren Raum steht, sondern immer von der Umgebung beeinflusst wird und umgekehrt. 



## Softwarearchitektur-Prozess

Eine Vorlage für einen iterativen Softwarearchitektur-Ansatz ist die sogenannte "Architektur-Brezel". 

Folgende Schritte werden dabei immer wieder inkrementell durchlaufen:

- Anforderungen
  - Ziele
  - Kontext
  - Use-Cases
  - Szenarien
  - Rahmenbedingunen
- Architektur
  - Modelle
  - Prototypen
  - Durchstiche
  - (tech.) Vorgaben
  - Pläne
- Umsetzung
  - Code
  - Konfiguration
  - Tests
  - Dokumentation
- Bewertung
  - Risiken
  - Kompromisse
  - Nicht-Risiken
  - Anforderungen
- Review
  - Integritäts- und Konformitätsverletzungen
  - Anforderungen



Zwei zentrale Schlüsselfaktoren für eine erfolgreiche Softwareentwicklung sind Requirements Engineering und Architekturentwurf. 

### Ziele und Aufgaben des Softwarearchitekturentwurfs

Kernaufgabe des Softwarearchitekturentwurfs ist es, einen Konstruktionsweg zu finden, mit dem die funktionalen und nicht funktionalen Anforderungen aus dem Requirements Engineering in einer fertig konstruierten Lösung umgesetzt sind. 



## Anforderungen

Unabdingbar für Architektur-Entscheidungen sind Anforderungen. Anforderungen lassen sich unterteilen in 

- Funktional
- Nicht-Funktional

Wobei Nicht-Funktionale Anforderungen aus folgenden Punkten besteht:

- Qualitätsanforderungen
- Randbedingungen

Es ist die Aufgabe des Software-Architekten, sich Anforderungen zu beschaffen, um korrekte Architektur-Entscheidungen treffen zu können. Darüber hinaus ist es unsere Aufgabe, die gefundenen Anforderungen zu hinterfragen und ggf. so aufzubereiten, dass alle an der Umsetzung beteiligten ein gemeinsames Verständnis teilen.

**Für die meisten Architekturentscheidungen sind besonders die Qualitätsanforderungen relevant. Achte darauf, diese wirklich verstanden zu haben!** 



## Systemkontext

**Ein Systemkontext beschreibt alle außerhalb des eigenen Systems liegenden Benutzer und Fremdsysteme, mit denen das System direkt kommuniziert. Das eigene System wird dabei als Blackbox dargestellt.**

Primäre Ziele beim Einsatz des Systemkontexts sind zum einen die Definition der Systemgrenze, d.h. festzulegen, wofür das Entwicklungsprojekt verantwortlich ist, und zum anderen die Identifikation der externen Schnittstellen, welche durch das System benutzt oder bereitgestellt werden müssen.



## Randbedingungen

Spielregeln bzw. Entscheidungen, welche von außen, also z.B. von Kunden oder Vorgesetzten vorgegeben werden, werden Rand- oder Rahmenbedingungen genannt. 

**Rand- oder Rahmenbedingungen (engl. Constraints) sind für den Software-Entwurf  relevante Vorgaben, also Entscheidungen, welche durch externe Stakeholder getroffen wurden.**

*Technische Randbedingungen*

- Zielhardware
- Softwarevorgaben
- Betriebliche Aspekte
- Entwicklungsvorgaben

*Organisatorische Randbedingungen*

- Organisation (Conway's Law)
- Resourcen
- Standards
- Juristische Fragen



## Qualität

**Ob und wie gut ein System Qualitätsanforderungen erfüllt, wird meist durch Architekturentscheidungen bestimmt.**

Qualitätsmerkmale entnehmen wir idealerweise aud den nicht-funktionalen Anforderungen. Falls diese fehlen, ist es unsere Aufgabe dafür zu sorgen, dass sie erhoben werden. Ein weit verbreitetes und empfohlenes Qualitätsmodell ist der ISO 25010-Standard. 

Qualitätsattribute sind:

- Effizienz (Performance)
- Wartbarkeit
- Benutzbarkeit
- Zuverlässigkeit
- Sicherheit
- Funktionale Eignung
- Übertragbarkeit (Skalierbarkeit)

Siehe *ISO25010.mm*.

Manchmal ist es so, dass sich Attribute gegenseitig beeinflussen. So geht eine hohe Benutzerfreundlichkeit oft mit einer geringeren Sicherheit einher. 

- Konfigurierbarkeit versus Zuverlässigkeit
- Speicherbedarf versus Leistungseffizienz
- Sicherheit versus Benutzbarkeit 
- Laufzeitflexibilität versus Wartbarkeit

Neben ISO/IEC 25010 gibt es weitere Qualitätsstandards (kein Anspruch auf Vollständigkeit):

- ISO/IEC 25010 - Softwarequalitätsmodelle
- ISO/IEC 9126 - Vorgänger von ISO/IEC 25010
- MISRA - Motor Industry Software Reliability Association
- CWE - Common Weakness Enumeration
- OWASP 
- FDA, IEC 62304 - Medizingerätesoftware
- EU-Richtlinien und DSVGO - Datenschutz und sichere Softwareentwicklung
- Sarbanes-Oxley Act (SOX) und IT-Sicherheitsgesetz für Unternehmenssoftware

### **Metriken und Messgrößen**

| Kategorie                | Metrik                               | Beschreibung                                                 | Bewertung                                                    |
| ------------------------ | ------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| Lesbarkeit & Wartbarkeit | Maintainability Index (MI)           | Bewertet die Wartbarkeit des Codes basierend auf LoC, CC und Halstead-Metriken | Werte über 80 sind sehr gut, unter 20 schlecht               |
|                          | Lines of Code (LOC)                  | Anzahl der Zeilen im Quellcode                               | Hohe LoC kann auf mangelnde Modularität hinweisen            |
|                          | Comment Density                      | Anteil von Kommentaren im Verhältnis zum Code                | Zu viele Kommentare deuten auf schlechten Codestil hin, zu wenige auf geringe Verständlichkeit |
| Komplexität              | Cyclomatic Complexity (CC)           | Misst die Anzahl der unabhängigen Pfade durch den Code; höhere Werte entsprechen höherer Komplexität | CC < 10 ist akzeptabel, > 20 komplex, bei < 50 ist ein Refactoring angemessen |
|                          | Halstead-Metriken                    | Bewertet die Code-Komplexität anhand der Anzahl von Operatoren und Operanden | Höhere Werte deuten auf komplexeren Code hin                 |
|                          | Nesting Depth                        | Gibt an, wie tief Schleifen und Bedingungen verschachtelt sind. Tiefe > 3-4 deutet auf komplexen Code hin | Tiefe > 3-4 sollte vermieden werden                          |
| Testbarkeit              | Code Coverage                        | Gibt den prozentualen Anteil des Codes an, der durch Tests abgedeckt ist | > 80 Prozent ist ideal. Achtung: 100 Prozent bedeutet nicht automatisch gute Tests |
|                          | Mutation Testing Score               | Bewertet, wie gut Tests Fehler erkennen, indem zufällige Code-Änderungen vorgenommen werden | Ein hoher Score bedeutet gute Testqualität                   |
| Sicherheit               | CWE (Sicherheitslücken)              | Gibt die Anzahl der bekannten Schwachstellen wie SQL-Injections oder Buffer Overflows an | Je mehr Schwachstellen, desto unsicherer ist der Code        |
|                          | Dependency Vulnerability Score       | Bewertet die Sicherheit der verwendeten Biblitotheken anhand bekannter Sicherheitslücken | Geringere Werte sind besser                                  |
|                          | Attack Surface  ("Angriffsvektoren") | Misst die Anzahl der exponierten APIs, offenen Ports oder unsicheren Eingabepunkte | Weniger Angriffsfläche bedeutet höhere Sicherheit            |
| Performance              | Big-O-Notation (Komplexität)         | Beschreibt, wie sich der Code mit steigender Datenmenge verhält | Ziel ist, O(n log n) oder besser, d.h. die zum Ausführen des Algorithmus erforderliche Zeit steigt logarithmisch mit der Größe der Eingabe |
|                          | CPU- und Speicherverbrauch           | Misst den Ressourcenverbrauch des Codes während der Laufzeit | Hohe Speicher- oder CPU-Auslastung sollte vermieden werden   |
|                          | Query Efficiency                     | Reduziert redundante Datenbankabfragen zur Performanceoptimierung | Vermeidung von N+1 - Queryproblemen ist wichtig              |





## Architekturentscheidungen

Architekturentscheidungen sind nie 'schwarz' oder 'weiss'. Oft merkt man erst im Nachhinhein, ob eine Entscheidung gut war, oder ob man eine Entscheidung 'korrigieren' muß. Umso wichtiger ist es, Entscheidungen explizit festzuhalten.

Ein Mittel wäre z.B. die 'Decision-Page' im Confluence-Wiki zu benutzen, die schon ein Rahmenwerk für eine Entscheidung beinhaltet. 

Am Ende ist es mindestens genauso wichtig, getroffene Architekturentscheidungen den Stakeholdern mitzuteilen. Noch besser: Die Stakeholder von Anfang an in den Entscheidungsprozess mit einzubeziehen. 



## Architektur- und Entwurfs-Prinzipien

Architektur-Prinzipien sind Prinzipien, die ein System erfüllen sollte. Diese werden vom Software-Archiekten vorgegeben. Prinzipien sind z.B. 

- Abstraktion
  - Generalisierung
  - Schnittstellen
- Modularisierung
  - Hierarchische (De-)Komposition
  - Schmale Schnittstellen
  - Geheimnisprinzip (Information Hiding) und Kapselung
  - Trennung von Verantwortlichkeiten (Separation of Concerns - SoC)
  - Lose, aber funktionell ausreichende Kopplung von Bausteinen
  - Hohe Kohäsion
  - SOLID-Prinzipien
    - S: Single-Responsibility-Prinzip
    - O: Offen/geschlossen-Prinzip
    - L: Liskovsches Substitutionsprinzip
    - I: Interface-Segregation-Prinzip 
    - D: Dependency-Inversion-Prinzip

- Konzeptionelle Integrität
- Einfachheit
  - KISS (Keep it simple and stupid)
  - YAGNI (You aren't gonna need it)
- Erwarte Fehler (Postels Gesetz)
- DRY - Don't Repeat Yourself
- Regelmäßiges Refactoring und Redesign



## Vorgehen und Heuristiken zur Architekturentwicklung

Als Heuristiken bezeichnet man Verfahren, die helfen sollen, Probleme ressourcensparend zu lösen. Tatsächlich sind Heuristiken viel mehr als das: Sie sind die Art und Weise, wie Menschen tatsächlich denken und entscheiden.

Es gibt viele verschiedene Vorgehensweisen zur Architekturentwicklung. Die Wichtigsten sind:

- Top-down- und Bottom-up Vorgehen
- Sichtenbasierte Architekturentwicklung
- iterativer und inkrementeller Entwurf
- Domain-Driven-Design
- Evolutionäre Architektur
- Globale Analyse
- Modellgetriebene Architektur

### Entwurfsmethoden

#### Domain-Driven Design

Eric Evans hat den Begriff Domain-Driven Design (DDD) geprägt. 

## Lösungsmuster für Architekturen

Die meisten von uns zu lösenden Probleme sind auch schon anderen begegnet. Ein guter Rat ist daher, auf wohlbekannte und etablierte Muster (Lösungen) zurückzugreifen. 

**Muster sind etablierte Lösungen für wiederkehrende Probleme.**

Ausgewählte Architekturmuster sind: 

- Analysis Patterns

  - Vertragsabschluss
- Architectural Patterns

  - Schichtenarchitektur (Layers)
  - Pipes-and-Filter
  - Entity-Control-Boundary (ECB)
  - Clean Architecture
  - Model-View-Controller

  - Microservices

  - Dependeny Injection als eine mögliche Lösung für das Dependency-Inversion-Prinzip
- Schnittstellenmuster
  - Adapter
  - Fassade
  - Proxy
- Design Patterns
  - Observer (Beobachter)
  - Strategie
  - Visitor (Besucher)
- Idioms
  - RAII in C++

## Architekturstile und -muster

| Stil                            | Intention                                                    | Beispiele                                                    |
| ------------------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| Datenflusssysteme               |                                                              |                                                              |
| Datenzentrische Systeme         |                                                              |                                                              |
| Hierarchische Systeme           | Bestehen aus Bausteinen in unterschiedlichen Ebenen einer Hierarchie | Schichtenarchitektur, Hexagonale Architektur (Ports- und Adapter), Onion Architecture, Clean Architecture |
| Verteilte Systeme               |                                                              |                                                              |
| Ereignisbasierte Systeme        |                                                              |                                                              |
| Interaktionsorientierte Systeme |                                                              |                                                              |
| Heterogene Systeme              |                                                              |                                                              |

### Hierarchische Architekturstile

**Schichtenarchitektur**

In der Schichtenarchitektur behandelt jede Schicht einen spezifischen Aspekt der Anwendung. Dieses Konzept basiert auf dem Prinzip der "Separaion of Concerns", also der Trennung von Verantwortlichkeiten. 

Ein zentraler Aspekt dieser Architektur ist, dass die Abhängigkeiten immer von oben nach unten  verlaufen. Eine Schicht kennt und nutzt nur die darunterliegende Schicht, niemals die darüberliegende. Das erleichtert die Verständlichkeit des Codes und verbessert die Wartbarkeit. Vorteil: Eine obere Schicht kann ausgetauscht werden, ohne dass die darunterliegenden Schichten geändert werden müssen. 

Eine Herausforderung ist, dass obere Schichten oft Code in der darunterliegenden Schicht kennen und verwenden muss. Verwendet die unten liegende Schicht eine Datenbank aus der Infrastruktur, und muss diese Datenbank ausgetauscht werden, müssen evtl. auch in der oberen Schicht Anpassungen vorgenommen werden. 

Um die Abhängigkeiten der Schichten zu Infrastrukturen zu verringern bzw. ganz zu eliminieren (also die Entkopplung der fachlichen Domäne von der verwendeten Technik) kommen oft Dependency Inversion gekoppelt mit Dependency Injection zum Zuge. 

**Hexagonale Architektur**

Das Prinzip der Dependency Inversion konsequent anwenden - das ist das Prinzip der hexagonalen Architektur. Oder auch Ports- und Adapter Architektur genannt. Sie wurde 2005 von Alistair Cockburn entwickelt. Ziel war, die Geschäftslogik von technischen Details zu entkoppeln. Dazu wird die Geschäftslogik von der Technik isoliert. Die Verbindung zwischen der Applikation und der externen Infrastruktur erfolgt ausschließlich über Ports und Adapter. 

Ein Port beschreibt entweder, wie ein externer Treiber den Anwendungskern nutzen kann oder wie der Anwendungskern ein externes System ansprechen kann. Adapter fungieren als "Klebstoff" und übernehmen die Anpassung zwischen externen Systemen und Ports. 

Die Prinzipien des Domain-Driven Designs (DDD) lassen sich sehr gut mit der hexagonalen Architektur kombinieren. In dieser Architektur entspricht ein Bounded Context einem Hexagon. 

**Onion Architecture**

Eine weitere Architektur, die auf dem Prinzip der Dependency Inversion aufbaut, ist die Onion Architecture, die 2008 von Jeffrey Palermo beschrieben wurde. 

Im Zentrum der Onion-Architektur steht das Domain Model, mit anderen Worten die Geschäftslogik. Dieser Kern ist von allen äußeren Schichten unabhängig. 

Auch die Onion Architecture wird durch den Einsatz von Dependency Inversion und Dependency Injection realisiert. 

**Clean Architecture**

Clean Architecture ist ein Konzept von Robert C. Martin. Auch Clean Architecture zielt darauf ab, Syteme so zu strukturieren, dass die Geschäftslogik vollständig von den äußeren Schichten der Applikation getrennt bleibt. 

Im Zentrum der Architektur stehen Entitäten. Das sind Klassen, die unternehmensweit verwendet werden. Der nächste Ring enthält anwendungsspezifische Geschäftsregeln und Services. Der nächste Ring umfasst die Adapter, die als Vermittler zwischen der internen Geschäftslogik und den externen Technologien fungiert. Im äußersten Ring der Clean Architecture befinden sich Frameworks und Datenbanken. 

Auch hier gilt (wie bei den zuvor genannten Architekturen auch): Abhängigkeiten dürfen nur nach innen gerichtet sein. 

## Architektur-Sichten

Mit Sichten-basierter Dokumentation lassen sich Architekturen effizienter, übersichtlicher und Stakeholdergerechter zu beschreiben. Dabei ist eine Sicht eine grafische Darstellung eines bestimmten Aspekts der Architektur, in der Regel ergänzt durch kurze, ergänzende Texte.

Es gibt verschiedene Muster für Sichten, die man verwenden kann. 

- C4 (Simon Brown)
  - Context (Kontextsicht)
  - Container 
  - Components (Baustein- oder Komponentensicht)
  - Code 
- Effektive Software-Architekturen (Gernot Starke)
  - Kontextsicht
  - Bausteinsicht (oder Komponentensicht)
  - Laufzeitschicht
  - Verteilungsschicht (Deploymentsicht)

### Kontextsicht

Die Kontextsicht zeigt alle außerhalb des eigenen Systems liegenden Benutzer und Fremdsysteme, mit denen das System direkt kommuniziert. Das eigene System wird dabei als Blackbox dargestellt.

### Bausteinsicht

Die Bausteinsicht zeigt die innere Struktur eines Systems und entspricht wahrscheinlich dem, woran viele
denken wenn sie den Begriff "Softwarearchitektur" hören. Wir nutzen sie, um das System übersichtlich
darzustellen, die Zerlegung des Systems in Subsysteme zu visualisieren und um zu zeigen wo welche
Funktionen umgesetzt werden.

Bei Bedarf besteht die Bausteinsicht aus mehreren Ebenen.

### Laufzeitschicht

Die Laufzeitsicht beschreibt, wie diese Strukturelemente, welche wir in der Bausteinsicht identifiziert
haben, miteinander interagieren, um die Aufgaben des Systems zu erfüllen.

Für die Dokumentation der Laufzeitschicht eignen sich grundsätzlich alle Verhaltensdiagramme wie z.B. 

- Sequenzdiagramm
- Aktivitätsdiagramm
- Zustandsdiagramm
- Flow-Charts

### Verteilungsschicht

Die Verteilungssicht ist eine Darstellung der technischen Ablaufumgebung des Systems. Sie zeigt, welcher Baustein wo ausgeführt wird.



## Schnittstellen

Um Schnittstellen zu verstehen, eignen sich folgende Leitfragen.

- Wer kommuniziert?
- Was wird kommuniziert? Warum?
- Welche Randbedingungen gelten?

Wichtige Kriterien für Schnittstellen sind:

- Easy to use, learn, extend
- Difficult to abuse
- Functionally complete (from user's point-of-view)
- Qualities: scalability, performance, security, compatibility



## Taktiken und Praktiken

DRY 

**Taktiken sind Entwurfsentscheidungen welche das Erreichen einer Qualitätsanforderung beeinflussen.**

Siehe *Taktiken.mm*.



## Querschnittskonzepte

Querschnittskonzepte (engl. Cross-Cutting-Concerns) lösen Probleme, die nicht an einer Stelle des Systems gelöst werden können, sondern die das gesamte System bzw. große Teile davon betreffen. Beispiele sind

- Fehlerbehandlung
- Logging
- Tracing
- Persistenz
- Konfiguration
- Sicherheit (Security)
- ...

**Cross-Cutting Concerns sind Aufgaben, welche nicht an einer Stelle erfüllt werden können. Sie müssen von mehreren, oftmals allen, Bausteinen berücksichtigt werden.**



## Bewertung

Bewertung der Architektur und der getroffenen Entscheidungen ist eigentlich unverzichtbar, obwohl viele Firmen wenig bis keinen Aufwand in die methodische Bewertung investieren. 

**Gegenstand der Bewertung sind unsere Ideen, Entscheidungen oder die Umsetzung dieser. Als Bewertungsmaßstab nutzen wir unsere Anforderungen (z.B. die Qualitätsszenarien), etablierte Entwicklungspraktiken oder Metriken.**

### Qualitative Bewertungsverfahren

Bei der qualitativen Bewertung fragen wir Stakeholder oder Experten nach ihrer Einschätzung, ob unsere Ansätze bzw. Entscheidungen geeignet sind, um unsere Anforderungen zu erfüllen.

### Quantitative Bewertungsverfahren 

Zu diesen Verfahren gehören Messungen, Simulationen, mathematische Modelle, Tests an Prototypen,
Metriken oder andere Techniken mit denen wir genaue Aussagen zu bestimmten Eigenschaften unserer
Lösung erhalten. 

**Qualitative und quantitative Bewertungstechniken sollten kombiniert werden.**

Die am weitesten verbreitete Bewertungsmethode ist die Architecture *Trade-Off Analysis Method (ATAM)*. Weitere Bewertungsverfahren sind z.B. DCRA oder TARA. 

## Quantitative Bewertung und Metriken

Quantitative Bewertungen können mit Metriken erstellt werden. Im Idealfall haben wir einen Werkzeugkasten, der uns Metriken automatisiert erstellen kann. 

**Metriken sind Funktionen, welche Eigenschaften von Software in einen Zahlenwert, auch Maßzahl genannt, abbilden und hierdurch formale Vergleichs- und Bewertungsmöglichkeiten schaffen.**

Einige wichtige Metriken sind: 

| Lines of Code                 | wie "groß" ist ein Stück Software?                           |
| ----------------------------- | ------------------------------------------------------------ |
| **Zyklomatische Komplexität** | wie kompliziert ist ein Stück Software? wie viele Bedingungen enthält es? wie<br/>viele Einrückungen? wie viel Testaufwand ist nötig? |
| **Code Coverage**             | wie hoch ist der Anteil des von automatischen Tests abgedeckten Codes? |
| **Instabilität**              | wie ist das Verhältnis von eingehenden zu ausgehenden Abhängigkeiten? |
| **Abstraktheit**              | wie ist das Verhältnis von Abstraktionen (Interfaces, abstrakte Klassen) zu<br/>Details (normale Klassen)? |
| **Distanz**                   | wie ist das Verhältnis von Abstraktheit zu Instabilität?     |

**Metriken geben Hinweise auf Codestellen, bei denen sich ein Review lohnen könnte. Sie fällen keine absoluten Urteile darüber, ob Code gut oder schlecht ist.**

**Für manche Metriken sind die Trends interessanter als ihr aktueller Wert.**



## Heuristiken

Der Psychologe Daniel Kahneman bekam 2002 den Wirtschaftsnobelpreis für  seine Arbeiten zu dem Thema "Heuristiken". Er unterscheidet zwischen „schnellem“  und „langsamem“ Denken. Das schnelle Denken – unsere Heuristiken – hilft uns, blitzschnell Situationen einzuschätzen und Entscheidungen zu  treffen. Das ist überlebenswichtig in einer Welt, in der ständig  Informationen auf uns einprasseln. Heuristiken sind eine Möglichkeit,  mit den aktuell vorliegenden Informationen eine Entscheidung zu treffen, die in den meisten Fällen richtig ist. Aber diese mentalen Abkürzungen  führen auch in die Irre. Wir folgen dabei Vorurteilen, Klischees und  Wahrscheinlichkeiten – nicht kluger Abwägung. Und doch nutzen wir diese  Heuristiken ständig, weil wir damit Energie sparen und schnell  entscheiden können. (s. [14] und [15]).

Die wichtigsten Heuristiken laut Kahneman sind: 

### Verlustaversion: Bloß nichts hergeben

Der Schmerz, etwas zu verlieren, wiegt emotional schwerer als die Freude, etwas von gleichem Wert zu gewinnen.. Wenn wir z.B. einen Dienst/Produkt einmal abonniert haben, fällt es uns schwer, ihn wieder aufzugeben. 

### Satisficing: OK ist gut genug

Anstatt die beste mögliche Lösung zu suchen, trifft man Entscheidungen, die "gut genug" sind. Satisficing ist in vielen realen Szenarien eine nützliche Strategie, da es schneller und einfacher ist als perfektes Optimieren.

### Knappheitsprinzip: Selten lockt besonders

Was knapp ist, muss wertvoll sein – so denken wir automatisch.Im Marketing wird das Knappheitsprinzip genutzt, um Begehrlichkeit zu erzeugen. Beispiele:

- **Limitierte Angebote:** „Nur noch 2 Artikel auf Lager!“
- **Zeitliche Begrenzung:** „Nur heute erhältlich!“

### Verfügbarkeitsverzerrung: Das Naheliegende zählt

Informationen, die leicht verfügbar oder auffällig sind, beeinflussen unsere Entscheidungen mehr. Es ist eine kognitive Verzerrung, bei der Menschen Informationen oder Ereignisse, die ihnen leichter in den Sinn kommen, als wahrscheinlicher oder repräsentativer bewerten, als sie tatsächlich sind. 

### Ankereffekt: Alles ist relativ

Der **Ankereffekt** ist eine kognitive Verzerrung, bei der Menschen bei Entscheidungen oder Schätzungen von einem initial präsentierten Wert – dem sogenannten **Anker** – beeinflusst werden. Dieser Wert dient als Referenzpunkt, auch wenn er mit der eigentlichen Entscheidung oder Schätzung nichts zu tun hat.

### Status-quo-Verzerrung: Bekanntes beruhigt

Die **Status-quo-Verzerrung** (englisch: *status quo bias*) beschreibt die Tendenz von Menschen, den aktuellen Zustand (den Status quo) zu bevorzugen und Änderungen zu vermeiden, selbst wenn eine Veränderung objektiv besser wäre. Sie ist eine kognitive Verzerrung, die mit Verlustaversion, Trägheit und dem Wunsch nach Stabilität zusammenhängt.

Das erklärt, warum selbst schlechte Standardeinstellungen oft beibehalten  werden und warum Interface-Änderungen häufig auf Ablehnung stoßen –  selbst wenn sie objektiv besser sind.

### Bestätigungsfehler: Wir sehen, was wir erwarten

Der **Bestätigungsfehler** (englisch: *confirmation bias*) ist eine kognitive Verzerrung, bei der Menschen Informationen bevorzugt suchen, interpretieren oder erinnern, die ihre bestehenden Überzeugungen, Meinungen oder Hypothesen bestätigen. Gleichzeitig werden widersprüchliche Informationen ignoriert oder abgewertet.

### Hick’sches Gesetz: Länger dauert länger

Das **Hick’sche Gesetz** (englisch: *Hick's Law*) ist ein psychologisches Prinzip, das beschreibt, wie die Zeit, die eine Person benötigt, um eine Entscheidung zu treffen, von der Anzahl der zur Verfügung stehenden Optionen abhängt. Je mehr Auswahlmöglichkeiten es gibt, desto länger dauert es, eine Entscheidung zu treffen.

### Entscheidungsmüdigkeit: Zu viele Optionen lähmen

**Entscheidungsmüdigkeit** (englisch: *decision fatigue*) bezeichnet den Zustand, in dem die Fähigkeit einer Person, gute Entscheidungen zu treffen, im Laufe des Tages oder bei wiederholtem Treffen von Entscheidungen nachlässt. Diese Form der mentalen Erschöpfung tritt auf, weil das Treffen von Entscheidungen geistige Ressourcen verbraucht, die mit der Zeit erschöpft werden.

### Präventionsparadox

Das **Präventionsparadox** beschreibt eine Situation, in der eine Maßnahme zur Prävention von gesundheitlichen oder sozialen Risiken von der Gesellschaft insgesamt als weniger wichtig oder dringlich angesehen wird, obwohl sie potenziell eine große Wirkung auf die Bevölkerung hat. Das Paradox entsteht, weil präventive Maßnahmen oft nur dann wahrgenommen werden, wenn die Risikofaktoren schon Auswirkungen zeigen, oder wenn sie individuelle (negative) Folgen vermeiden, die in der breiten Masse oft nicht direkt spürbar sind.

## DevOps

### Introduction

Since a few years there is a set of methods called DevOps. Nowadays all (successfull) companies are following DevOps methods e.g. Amazon, Google, Twitter, Netflix, Flickr, ... All these companies have one in common: Releasing productive changes daily and at the same time keeping reliability, stability and safety. How do they do this? In short: Using DevOps principles. 

All these companies can add changes fast into their production environment. Whereas the Code Deployment Lead Time is minutes or hours. 

**Code Deployment Lead Time** 

Die Code Deployment Lead Time ist die Zeit, die von "Änderung ist in Versionskontrolle eingecheckt" bis "Läuft erfolgreich in der Produktivumgebung" benötigt wird. 

### What is DevOps?

The word “DevOps” is a combination of the words “development” and “operations.” **DevOps is a set of practices and tools that helps organizations deliver software faster.** 

DevOps involves a development team using continuous integration and  continuous delivery (CI/CD) practices to develop, release, and monitor  software. DevOps teams **develop code, automate testing, deploy to production, and iterate for improvements**.

### Why DevOps?

There are a lot of advantages using DevOps

- faster deliveries of features
- higher customer satisfaction
- more market share
- better staff (developer) productivity 

| Company            | Auslieferungsfrequenz         | Code Deployment Lead Time | Zuverlässigkeit | Reaktion auf Kundenwünsche |
| ------------------ | ----------------------------- | ------------------------- | --------------- | -------------------------- |
| Amazon             | 23000/day                     | minutes                   | high            | high                       |
| Google             | 5500/day                      | minutes                   | high            | high                       |
| Netflix            | 500/day                       | minutes                   | high            | high                       |
| Facebook           | 1/day                         | hours                     | high            | high                       |
| Twitter            | 3/week                        | hours                     | high            | high                       |
| {negative example} | 1/month - once every 9 months | Months or quaterly        | low/mid         | low/mid                    |

See [3].

In the annual reports published by the Puppet Labs [5] you can see the effect of high-performance companies using DevOps compared to non-high-performance companies.

- 30 times more code deployments
- 8000 times less Code Deplyoment Lead Time

Also Zuverlässigkeit is higher: 

- 2 times better Change Success Rate
- 12 times faster MTTR

There is another word for the above characteristics: **Agility - Companies using DevOps have been more agile.**

The report also shows that high-performance companies using DevOps had better results: Code could be deployed successfully more than two times higher than non-high-performance companies could do. One of the reasons: the time of solving a (code) problem has been reduced to a 1/12 of the time compared to non-high-performance companies. One of the main reasons: the extremely high Code Deployment Lead Time. 

So we see: High-Performance companies deliver featuers faster and at the same time they provide better Software (best Zuverlässigkeit, more stability, more safety).

### How DevOps?

All entities within the company are working on the same goal. Ther're working together to reach this goal. It starts from SW Developer Teams, to Product Owner, Integration Teams, QA, IT Operations, ...

All involved parties spend time to make sure everything works fine through all stations, automated tests will be made faster, the development infrastructure getting better, applications will output useful protocol data. 

Everybody is taking care of non-functional requirements e.g. quality, scalability, maintainability, security, operability, ... at the same time as everybody is working on functional requirements. Why? Non-functional requirements are as important as functional requirements. 

There is a collaborative culture of 'gegenseitigem Vertrauen'. Everybody is responsible for the quality of his/her work.

Developers receive 'fortlaufend' fast feedback. There are continuously automated unit tests, acceptance tests, integration tests. If everything shows 'green' it means that everything is in an deployable (auslieferbarem) state. 

### Where does DevOps come from?

The word DevOps has been used first by Patrick Debois and Andrew Shafer in the year 2008. DevOps got popular 2009 with the presentation from John Allspaw and Paul Hammond called "10+ Deploys Per Day: Dev and Ops Cooperation at Flickr".

DevOps makes use of the work created by the **Agile-Community**: "kleine Teams mit starkem gegenseitigem Vertrauen, kleinen Auftragsgrößen und kleineren, aber dafür häufigeren Software-Releases die Produktivität von Entwicklungsorganisationen massiv erhöhen können".

It uses the work of **"Infrastructure as Code"** developed by Dr. Mark Burgess as well as **Continuous Integration and Continuous Deployment** (Jez Humble and David Farley). 

And finally DevOps makes use of Best-Practice Management movements like **Lean Startup, Innovation Culture, Toyota Kata, Rugged Computing and Velocity Community.** 

### The Three Ways

There are "The Three Ways" principles from where all DevOps structures are setup from. 

**First Way**

The First Way is the flow from Development through Integration through Operations until the customer. Small development packages, small intervalls, never forward faulty products. Optimize on global goals not on local goals (local goals here e.g. mean the finish rate of functional features, the rate between found errors and fixed errors, the code coverage values and such things).

Necessities are continuous build, integration and deployment. Restrict the WIP (work in progess) items, setup safe systems and organizations which can be easily changed. 

**Second Way**

The Second Way is the constant and fast feedback back to the origin of the 'Wertschöpfungskette'. So that problems can be detected and fixed fast. Such that we can prevent these issues the next time. Idea: Quality and knowledge at the source. 

This includes:

- 'Stop the production line' as soon as builds or tests fail within the Deployment-Pipeline
- Highlight the improvement of the daily work compared to the actual work
- Create fast and automated test suites - make sure that code is always in a 'production-ready' state
- Create collective and corporate goals and undergo pain and problems together (from development to operations)
- Create omnipresent measuring points and checkpoints within the live system to check if code and environment are working correctly 

**Third Way** 

The Third Way is about culture that fosters two things:

- constant experimentation, take risks and learn from success and failure
- repetition and practice are the foundation of proficiency (skills)

It is mandatory to foster a culture of innovation and to take risks - in contrast to frightened acting and the empty-headed execution of orders. At least 20 percent of your time should be used for non-functional requirements. Improvements will be constantly supported and promoted.

### Myths of DevOps

**DevOps replaces Agile**

DevOps is compatibe to Agile and just the logical continuation of the Agile way started 2001. In DevOps Code is "Done" when it is fully tested and runnable within the live system (production system). 

**DevOps means NoOps**

In DevOps it is essential that many/all IT operations will be automated. In a way that Developer Teams can do the IT work itself; e.g. setup a production-ready environment or measure and deploy data (like KPIs).

**DevOps is only something for Start-ups and Unicorns**

Here are some examples of companies doing a (painful) transformation.

- In [8] Amazon, up until 2001, ran on the OBIDOS content delivery system, which  became so problematic and dangerous to maintain that CTO Werner Vogels **transformed** their entire **organization** **and code to a service-oriented architecture**. 
- In [9] Raffi Krikorian talks about **migration of the Twitter architecture** from primarily Ruby on Rails (RoR) to a JVM-based **SOA system** with emphasis on high performance,  scalability, and resilience to failure. 
- In [10] LinkedIn shows how a **2 month code Feature Freeze** has been used to rearrange the Server environments, the Deployments and the Architecture. 
- In [11] Etsy, in 2009, according to Michael Rembetsy, “had to come to grips that they were living in a sea of their own engineering filth,” dealing with problematic software deployments and technical debt. They committed  themselves to a **cultural transformation**.
- In [12] Facebook, in 2009, was at the breaking point for infrastructure operations. Barely able to keep up with user growth, code deployments were becoming increasingly dangerous and staff were **continually** **firefighting**. Jay Parikh and Pedro Canahuati started their **transformation to make code safe to deploy again**. 

### Further Reading

**The Five Dysfunctions of A Team: A Leadership Fable (Patrick Lencionis)**

- Fehlendes Vertrauen - der fehlende Wille, sich verletzbar zu zeigen
- Angst vor Konflikten - künstliche Harmonie suchen, statt konstruktiv zu diskutieren
- Fehlendes Engagement - durch Zurückhaltung entstehen Unsicherheiten in der gesamten Organisation
- Scheu vor Verantwortung - das Abwälzen von Verantwortung auf andere ist kontraproduktiv
- Fehlende Erfolgsorientierung- Konzentration auf persönlichen Erfolg, Status und Ego

**Toyota Kata: Managing People for Improvement, Adaptiveness and Superior Results (Mike Rother)**

The practice of Kata is the act of practicing a pattern so it becomes a second nature. Die Idee ist tägliche Wiederholungen, um ein Verhalten einzuüben und die Ergebnisse zu verbessern. Also eine Kultur aufbauen, in der man experimentieren kann, aus Fehlern lernt und versteht, dass Wiederholung und Übung die Voraussetzungen für den Weg zum Meister sind. 

Mike Rother beschreibt in seinem Buch ein System, das eben nicht in einem stabilen Zustand verharrt, wenn es nicht verbessert wird. Stattdessen wird die Leistung der Organisation dank der Entropie abnehmen. 

**Continuous Delivery: Reliable Software Releases through Build, Test, and Deployment Automation (Jez Humble and David Farley)**

Dieses Buch beschreibt viele der Techniken, die notwendig sind, um schneller und mit höherer Qualität Software auszuliefern. 

Continuous Delivery ist die Weiterentwicklung von Continuous Integration, zu dem auch Continuous Builds und Continuous Tests gehören. Continuous Delivery erweitert die bisherigen Prozesse bis in die Produktivumgebung. 

Continuous Delivery der Wege wie oben beschrieben: 

- kleine Größen (tägliches Einspielen von Code)
- das Anhalten wenn Probleme auftauchen
- Notwendigkeit, fortlaufend an Validierungstests zu arbeiten

**Release It!: Design and Deploy Production-Ready Software (Michael T. Nygard)**

Dieses Buch zeigt Entwicklern und Architekten auf, wie man Anwendungen baut, die selbst in der feindlichsten Produktivumgebung überleben und deployt und gewartet werden können,.

Leute aus IT Operations zeigt es, wie bestimmte Entscheidungen in der Entwicklung zu schlechten Ergebnissen im Produktivumfeld führen. 

**Personal Kanban: Mapping Work | Navigating Life (Jim Benson und Tonianne DeMaria Berry)**

In diesem Buch geht es darum zu zeigen, wie notwendig es ist, unsere Arbeit sichtbar zu machen und die Menge an WIP (Work-in-progress) zu steuern. 

**Kanban: Successful Evolutionary Change For Your Technology Business (Davin J. Anderson)**

Konzentriert sich auf den Einsatz von Kanban-Boards in Unternehmen. 

## Release It!

### Create Stability

One of the most important messages: Bug will happen. But how do we prevent bugs in one system from affecting everything else? Bugs must not cause a chain of failures. 

**Stabilize Your System**

- Run your own (automated) longevity tests. In parallel run a load-testing tool (simulating CPU load).
- Create safe failure modes that contain the damage and protect the rest of the system

## Literatur

[1] Stefan Zörner: Software-Architekturen - Dokumentieren und Kommunizieren, Carl Hanser Verlag, 2012

[2] Gernot Starke: Effektive Softwarearchitekturen - Ein praktischer Leitfaden, Carl Hanser Verlag, 9. überarbeitete Auflage, 2020

[3] Gene Kim, Kevin Behr, George Spafford: Projekt Phoenix - Der Roman über IT und DevOps, O'Reilly Verlag, 2015

[4] Puppet Labs, https://www.puppet.com/blog/what-is-devops, abgerufen am 14.03.2024

[5] Puppet Labs, 2023 State of DevOps Report, https://www.puppet.com/resources/state-of-platform-engineering, abgerufen am 14.03.2024

[6] Michael T. Nygard, Release It!: Design and Deploy Production-Ready Software, 2018

[7] John Allspaw and Paul Hammond, "10+ Deploys Per Day: Dev and Ops Cooperation at Flickr", http://velocityconf.com/velocity2009/public/schedule/detail/1641

[8] Jim Gray, "A Conversation with Werner Vogels: Learning from the Amazon Technology Platform", https://queue.acm.org/detail.cfm?id=1142065, abgerufen am 05.04.2024

[9] Raffi Krikorian, "Real-Time Systems at Twitter", https://de.slideshare.net/raffikrikorian/realtime-systems-at-twitter, abgerufen am 05.04.2024

[10] Ashlee Vance, "Inside Operation In Version, the Code Freeze that Saved LinkedIn",https://www.bloomberg.com/news/articles/2013-04-10/inside-operation-inversion-the-code-freeze-that-saved-linkedin, abgerufen am 05.04.2024

[11] Michael Rembetsy and Patrick McDonnell, "Continuously Deploying Culture: Scaling Culture at Etsy", https://de.slideshare.net/mcdonnps/continuously-deploying-culture-scaling-culture-at-etsy-14588485, abgerufen am 05.04.2024

[12] Pedro Canahuati, "From the Few to the Many: Scaling Ops at Facebook", https://www.infoq.com/presentations/scaling-operations-facebook/, abgerufen am 05.04.2024

[13] Werner Vogels, All Things Distributed, https://www.allthingsdistributed.com/, abgerufen am 05.04.2024

[14] Denken auf der Überholspur – Heuristiken in UX und Design – Newsletter 12/2024, https://www.benutzerfreun.de/newsletter/denken-auf-der-ueberholspur-heuristiken-in-ux-und-design-newsletter-12-2024/, abgerufen am 02.01.2024

[15] Daniel Kahneman: Schnelles Denken, langsames Denken, 2016

[16] Thomas Bayer, Schichten oder Schalen?, Hexagonale Architektur, Onion Architecture, Clean Architecture und ihre Vorteile für Doman Driven Design, entwickler.de magazin 5.2025



