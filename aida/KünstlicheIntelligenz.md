---
typora-root-url: images
---

# Künstliche Intelligenz

[TOC]

## Definition

Was bedeutet überhaupt Künstliche Intelligenz? Künstliche Intelligenz beschreibt "im Prinzip die Fähigkeit des Computers, rational Entscheidungen zu treffen, die möglichst gut ein Problem oder mehrere Probleme lösen können." [3]

"Machine Learning wiederum ist ein Weg, mit dem man künstliche Intelligenz implementieren kann. Statt eine Vielzahl von Regeln im Quellcode zu programmieren, werden bei Machine Learning statistische Algorithmen verwendet, mit denen der  Computer selbstständig lernen kann. Die meisten Algorithmen, aber nicht  alle, suchen nach Korrelationen, also Beziehungen und Zusammenhängen,  zwischen Input-Daten und dem Output." [3]

Die meisten Algorithmen im Bereich des Machine Learning beruhen rein auf Statistik und Wahrscheinlichkeitsberechnungen und haben tatsächlich wenig zu tun, mit der Intelligenz des Menschen. 

## Wahrscheinlichkeitstheorie

Unsicherheiten modellieren wir mit Hilfe der Wahrscheinlichkeitstheorie. 

Beispiel: Bei einem Münzwurf gehen wir davon aus, dass die Wahrscheinlichkeit auf Kopf oder Zahl bei 50:50 liegt. 

## Statistik

Falls wir aber diese Wahrscheinlichkeiten nicht kennen, bewegen wir uns im Bereich der Statistik. Wir können z.B. die Münze 6-mal werfen und erhalten 4-mal Kopf + 2-mal Zahl. 

--> Die Wahrscheinlichkeit von Kopf ist dann (statistisch) 2/3.

--> Die Wahrscheinlichkeit von Zahl ist (statistisch) 1/3.

Zwei Begriffe der Statistik sind bei der künstlichen Intelligenz von besonderer Bedeutung: Korrelationen und Regressionen.

### Korrelation

Eine Korrelation beschreibt den Zusammenhang zwischen mindestens zwei Variablen, z.B. gibt es eine Korrelation zwischen dem Alter (0-18 Jahre) und der Schuhgröße bei Menschen. Korrelationen beschreiben nur den Zusammenhang, aber keine Kausalität zwischen Ursache und Wirkung. "Korrelationen beschreiben Zusammenhänge bei bereits existierenden Fällen." [3]

### Regression

In der Statistik wird das Schätzen eines Ausganswertes auf Basis von Eingangswerten Regression genannt. Bei einem linearen Modell nennen wir es dann lineare Regression.

Mit Regression versucht man, "anhand der Zusammenhänge den Wert einer Variablen abhängig von den anderen Variablen statistisch bestmöglich zu schätzen. Sie werden verwendet, um Prognosen beziehungsweise Schätzungen bei neuen Fällen zu machen." [3] 

## Supervised Learning

Beim Supervised Learning sind die Outputs bei den Trainingsdaten schon verfügbar. Die Maschine lernt dann, indem sie die Korrelationen zwischen den Input-Variablen und den Output-Variablen sucht. Alle Algorithmen, bei denen Regression angewendet wird, ist eine Art von *Supervised Learning*. Lernen bezeichnet hier die Anpassung der Parameter, so dass das Modell 'optimal' ist. Neben Regressionen sind Klassifizierungsaufgaben ebenfalls Algorithmen des Supervised Learning. 

Beachte: Das Ziel von *Maschinellem Lernen* ist die (korrekte) Vorhersage von neuen Fällen. Alles andere wäre *memorisation*. 

Beim Lernen sehen wir nur einen Bruchteil aller möglichen Fälle und wir wollen darauf aufbauend verallgemeinern. Wie gut ein Modell aus vorhandenen Daten das Resultat vorhersagt, nennt man die *Fähigkeit zur Verallgemeinerung*. 

### Lineare Regression

Die Lineare Regression ist ein simpler, aber oft verwendeter, Machine-Learning-Algorithmus. 
$$
y = ax1 + bx2 + ...  + zxn + Const
$$
Ein simples Beispiel demonstriert die Lineare Regression. 

Die Input-Variablen x1, x2, x3, ... sind in unserem Beispiel Fahrzeugdaten wie Marke, Modell, Kilometerstand. Dabei bekommt jede Eingangsvariable eine spezielle Gewichtung (z.B. Porsche bekäme sicherlich eine höhere Gewichtung als Dacia).

Wie haben eine Output-Variable y; den Preis. 

Die Konstante Const ergibt sich, wenn alle Eingangs-Gewichtungen 0 sind. 

### Random Forest

Random Forest wird sowohl für Regressionen als auch für Klassifizierungsaufgaben oft verwendet. Random Forest basiert auf Entscheidungsbäumen (Decision Trees). 

## Modell

Einer der kritischen Punkte beim Lernen ist das *Modell*, d.h. die Beziehung zwischen Eingang (Eingabe) und Ausgang (Ausgabe). 

Falls wir z.B. die Ausgabe als gewichtete Summe der (Eingangs-)Attribute schreiben können, reden wir von einem *linearen Modell*. Die Größe bzw. Stärke sind die Parameter des Modells und werden anhand von Daten fine-tuned. 

![formule](/formule.png)

### Einfluss der Trainingsdaten auf das Modell

am Beispiel Fibonacci

in: 0 1 1 2 3 5 8 13 21 34 55

Modell: Fibonacci

in: 0 1 1 2

Modell: ???

## Unsupervised Learning

Bei Unsupervised Learning Algorithmen sind die Trainingsdaten nicht gekennzeichnet, d.h. es gibt keine vorgegebenen Werte für die Output-Variable in den Trainingsdaten. Ziel ist es, Objekte anhand ihrer Gemeinsamkeiten und Unterschiede zu Clustern zusammenzufassen. Der Anwender gibt dabei die Cluster-Definitionen nicht vor, sondern überlässt diese Aufgabe dem Computer. 

Ziele des Unsupervised Learning sind üblicherweise die Suche nach neuen Clustern oder die Suche nach Anomalitäten. 

### k-Means

Der k-Means Algorithmus ist einer der bekanntesten Clustering-Algorithmen im Unsupervised Learning.Der k-Means Algorithmus besteht aus fünf Schritten.

1. Setze den Wert für die Variable k, d.h. für die Anzahl der Cluster.
2. Wähle k-Punkte als Anfangszentren der Cluster.
3. Ordne jeden Punkt, also jedem Merkmalsträger, jenem Zentrum zu, das ihm am nächsten ist. 
4. Berechne die k-Clusterzentren neu.
5. Hat sich die Position der Clusterzentren geändert? Wenn ja, springe zu Schritt 3, ansonsten fini.

## Reinforcement Learning

"Algorithmen der Kategorie Reinforcement Learning lernen selbstständig, indem sie versuchen, Belohnungen zu maximieren beziehungsweise Strafen zu minimieren. Dahinter steckt das Prinzip von Try-und-Error, verbunden mit einer Bewertung, die gutes (zielführendes) Verhalten belohnt und schlechte Verhaltensmuster bestraft." [3]

Die bekanntesten Vertreter von Reinforcement Learning sind die genetischen Algorithmen. 

"Reinforcement Learning wird bei Minimierung- und Maximierungsaufgaben verwendet. Desweiteren kommt es bei Lernprozessen, bei denen auf sich verändernde Umwelteinflüsse reagiert werden soll, zum Einsatz." [3]

### Genetische Algorithmen

Genetische Algorithmen orientieren sich an der Evolutionstheorie von Charles Darwin. Die drei wichtigsten Prinzipien bei Genetischen Algorithmen sind die Begriffe Rekombination, Mutation und Selektion.

**Rekombination** "Bei genetischen Algorithmen ist die Rekombination die Vermischung von  Eigenschaften der Elterngeneration bei der Weitergabe an die  Kindergeneration" [4]

**Mutation** "Bei genetischen Algorithmen sind Mutationen zufällige Veränderungen von Eigenschaften von einzelnen Individuen." [4]

**Selektion** "Bei genetischen Algorithmen findet die Selektion in der Regel durch eine mathematische Bewertungsfunktion statt: die sogenannte Fitnessfunktion." [4]

## Neuronale Netze

### Deep Learning Neural Networks



### Convolutional Neural Networks (CNN)



## Literatur

[1] Machine Learning: The New AI, Ethem Alpaydin

[2] Maschinelles Lernen: Grundlagen und Algorithmen in Python, Jörg Frochte

[3] Wie Computer lernen, https://www.golem.de/news/kuenstliche-intelligenz-wie-computer-lernen-1810-135633.html, abgerufen am 23.12.2019

[4] Machine Learning anhand von drei Algorithmen erklärt, https://www.golem.de/news/random-forest-k-means-genetik-machine-learning-anhand-von-drei-algorithmen-erklaert-1810-136755.html, abgerufen am 23.12.2019





