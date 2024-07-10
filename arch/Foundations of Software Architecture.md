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
  * [Anforderungen](#anforderungen)
  * [Systemkontext](#systemkontext)
  * [Randbedingungen](#randbedingungen)
  * [Qualität](#qualitaet)
  * [Architekturentscheidungen](#architekturentscheidungen)
  * [Architektur- und Entwurfs-Prinzipien](#architektur-und-entwurfs-prinzipien)
  * [Vorgehen und Heuristiken zur Architekturentwicklung](#vorgehen-und-heuristiken-zur-architekturentwicklung)
  * [Lösungsmuster für Architekten](#loesungsmuster-fuer-architekten)
  * [Architektur-Sichten](#architektur-sichten)
  * [Schnittstellen](#schnittstellen)
  * [Taktiken und Praktiken](#taktiken-und-praktiken)
  * [Querschnittskonzepte](#querschnittskonzepte)
  * [Bewertung](#bewertung)
  * [Quantitative Bewertung und Metriken](#quantitative-bewertung-und-metriken)
  * [DevOps](#devops)
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

[6] Michael T. Nygard, Release It!: Design and Deploy Production-Ready Software

[7] John Allspaw and Paul Hammond, "10+ Deploys Per Day: Dev and Ops Cooperation at Flickr", http://velocityconf.com/velocity2009/public/schedule/detail/1641

[8] Jim Gray, "A Conversation with Werner Vogels: Learning from the Amazon Technology Platform", https://queue.acm.org/detail.cfm?id=1142065, abgerufen am 05.04.2024

[9] Raffi Krikorian, "Real-Time Systems at Twitter", https://de.slideshare.net/raffikrikorian/realtime-systems-at-twitter, abgerufen am 05.04.2024

[10] Ashlee Vance, "Inside Operation In Version, the Code Freeze that Saved LinkedIn",https://www.bloomberg.com/news/articles/2013-04-10/inside-operation-inversion-the-code-freeze-that-saved-linkedin, abgerufen am 05.04.2024

[11] Michael Rembetsy and Patrick McDonnell, "Continuously Deploying Culture: Scaling Culture at Etsy", https://de.slideshare.net/mcdonnps/continuously-deploying-culture-scaling-culture-at-etsy-14588485, abgerufen am 05.04.2024

[12] Pedro Canahuati, "From the Few to the Many: Scaling Ops at Facebook", https://www.infoq.com/presentations/scaling-operations-facebook/, abgerufen am 05.04.2024

[13] Werner Vogels, All Things Distributed, https://www.allthingsdistributed.com/, abgerufen am 05.04.2024



