# Foundations of Software Architecture

[TOC]

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

Als Heuristiken bezeichnet man Verfahren, die helfen sollen, Probleme ressourcensparend zu lösen.

Es gibt viele verschiedene Vorgehensweisen zur Architekturentwicklung. Die Wichtigsten sind:

- Top-down- und Bottom-up Vorgehen
- Sichtenbasierte Architekturentwicklung
- iterativer und inkrementeller Entwurf
- Domain-Driven-Design
- Evolutionäre Architektur
- Globale Analyse
- Modellgetriebene Architektur



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



## Querschnitskonzepte

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

