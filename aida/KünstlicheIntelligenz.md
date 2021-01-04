---
typora-root-url: images
---

# Künstliche Intelligenz

[TOC]

Table of Contents
=================

  * [typora\-root\-url: images](#typora-root-url-images)
* [Künstliche Intelligenz](#k%C3%BCnstliche-intelligenz)
* [Table of Contents](#table-of-contents)
  * [Definition](#definition)
  * [Maschinelles Lernen, Wahrscheinlichkeitstheorie, Statistik und Datenanalyse](#maschinelles-lernen-wahrscheinlichkeitstheorie-statistik-und-datenanalyse)
    * [Wahrscheinlichkeitstheorie](#wahrscheinlichkeitstheorie)
    * [Statistik](#statistik)
      * [Korrelation](#korrelation)
      * [Regression](#regression)
    * [Modell](#modell)
      * [Einfluss der Trainingsdaten auf das Modell](#einfluss-der-trainingsdaten-auf-das-modell)
    * [Supervised Learning](#supervised-learning)
      * [Lineare Regression](#lineare-regression)
      * [Klassifikation](#klassifikation)
      * [Random Forest](#random-forest)
      * [Expertensysteme](#expertensysteme)
  * [Pattern Recognition](#pattern-recognition)
    * [Pattern Recognition Applications](#pattern-recognition-applications)
      * [Barcodes](#barcodes)
      * [Optical character recognition](#optical-character-recognition)
      * [Gesichtserkennung](#gesichtserkennung)
      * [Biometrie](#biometrie)
      * [Speech Recognition](#speech-recognition)
      * [Natural Language Processing and Translation](#natural-language-processing-and-translation)
      * [Outlier Detection](#outlier-detection)
    * [Dimensionality Reduction](#dimensionality-reduction)
    * [Decision Trees](#decision-trees)
    * [Ranking](#ranking)
    * [Bayesian Methods](#bayesian-methods)
  * [Neuronale Netze und Deep Learning](#neuronale-netze-und-deep-learning)
    * [Introduction](#introduction)
    * [Deep Learning](#deep-learning)
  * [Unsupervised Learning](#unsupervised-learning)
    * [Learning Clusters](#learning-clusters)
    * [Recommendation Systems](#recommendation-systems)
    * [Reinforcement Learning](#reinforcement-learning)
      * [Genetische Algorithmen](#genetische-algorithmen)
    * [k\-Means](#k-means)
    * [Temporal Difference Learning](#temporal-difference-learning)
    * [Reinforcement Learning Applications](#reinforcement-learning-applications)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)https://github.com/ekalinin/github-markdown-toc.go)

## Definition

Was bedeutet überhaupt Künstliche Intelligenz? Künstliche Intelligenz beschreibt "im Prinzip die Fähigkeit des Computers, rational Entscheidungen zu treffen, die möglichst gut ein Problem oder mehrere Probleme lösen können." [3]

"Machine Learning wiederum ist ein Weg, mit dem man künstliche Intelligenz implementieren kann. Statt eine Vielzahl von Regeln im Quellcode zu programmieren, werden bei Machine Learning statistische Algorithmen verwendet, mit denen der  Computer selbstständig lernen kann. Die meisten Algorithmen, aber nicht  alle, suchen nach Korrelationen, also Beziehungen und Zusammenhängen,  zwischen Input-Daten und dem Output." [3]

Die meisten Algorithmen im Bereich des Machine Learning beruhen rein auf Statistik und Wahrscheinlichkeitsberechnungen und haben tatsächlich wenig zu tun, mit der Intelligenz des Menschen. 

## Maschinelles Lernen, Wahrscheinlichkeitstheorie, Statistik und Datenanalyse

### Wahrscheinlichkeitstheorie

Unsicherheiten modellieren wir mit Hilfe der Wahrscheinlichkeitstheorie. 

Beispiel: Bei einem Münzwurf gehen wir davon aus, dass die Wahrscheinlichkeit auf Kopf oder Zahl bei 50:50 liegt. 

### Statistik

Falls wir aber diese Wahrscheinlichkeiten nicht kennen, bewegen wir uns im Bereich der Statistik. Wir können z.B. die Münze 6-mal werfen und erhalten 4-mal Kopf + 2-mal Zahl. 

--> Die Wahrscheinlichkeit von Kopf ist dann (statistisch) 2/3.

--> Die Wahrscheinlichkeit von Zahl ist (statistisch) 1/3.

Zwei Begriffe der Statistik sind bei der künstlichen Intelligenz von besonderer Bedeutung: Korrelationen und Regressionen.

#### Korrelation

Eine Korrelation beschreibt den Zusammenhang zwischen mindestens zwei Variablen, z.B. gibt es eine Korrelation zwischen dem Alter (0-18 Jahre) und der Schuhgröße bei Menschen. Korrelationen beschreiben nur den Zusammenhang, aber keine Kausalität zwischen Ursache und Wirkung. "Korrelationen beschreiben Zusammenhänge bei bereits existierenden Fällen." [3]

#### Regression

In der Statistik wird das Schätzen eines Ausganswertes auf Basis von Eingangswerten Regression genannt. Bei einem linearen Modell nennen wir es dann *lineare Regression*.

Mit Regression versucht man, "anhand der Zusammenhänge den Wert einer Variablen abhängig von den anderen Variablen statistisch bestmöglich zu schätzen. Sie werden verwendet, um Prognosen beziehungsweise Schätzungen bei neuen Fällen zu machen." [3] 

### Modell

Einer der kritischen Punkte beim Lernen ist das *Modell*, d.h. die Beziehung zwischen Eingang (Eingabe) und Ausgang (Ausgabe). 

Falls wir z.B. die Ausgabe als gewichtete Summe der (Eingangs-)Attribute schreiben können, reden wir von einem *linearen Modell*. Die Größe bzw. Stärke sind die Parameter des Modells und werden anhand von Daten fine-tuned. 

![formule](/formule.png)

#### Einfluss der Trainingsdaten auf das Modell

am Beispiel Fibonacci

in: 0 1 1 2 3 5 8 13 21 34 55

Modell: Fibonacci

in: 0 1 1 2

Modell: ???



### Supervised Learning

Beim *Supervised Learning* sind die Outputs bei den Trainingsdaten schon verfügbar. Die Maschine lernt dann, indem sie die Korrelationen zwischen den Input-Variablen und den Output-Variablen sucht. Alle Algorithmen, bei denen Regression angewendet wird, ist eine Art von *Supervised Learning*. Lernen bezeichnet hier die Anpassung der Parameter, so dass das Modell 'optimal' ist. Neben Regressionen sind Klassifizierungsaufgaben ebenfalls Algorithmen des Supervised Learning. 

Beachte: Das Ziel von *Maschinellem Lernen* ist die (korrekte) Vorhersage von neuen Fällen. Alles andere wäre *memorisation*, z.B. durch *table lookup*. 

Beim Lernen sehen wir nur einen Bruchteil aller möglichen Fälle und wir wollen darauf aufbauend verallgemeinern. Wie gut ein Modell aus vorhandenen Daten das Resultat vorhersagt, nennt man die *Fähigkeit zur Verallgemeinerung*. 

#### Lineare Regression

Die *Lineare Regression* ist ein simpler, aber oft verwendeter, *Machine-Learning-Algorithmus*. 
$$
y = ax1 + bx2 + ...  + zxn + Const
$$
Ein simples Beispiel demonstriert die *Lineare Regression*. 

Die Input-Variablen x1, x2, x3, ... sind in unserem Beispiel Fahrzeugdaten wie Marke, Modell, Kilometerstand. Dabei bekommt jede Eingangsvariable eine spezielle Gewichtung (z.B. Porsche bekäme sicherlich eine höhere Gewichtung als Dacia).

Wie haben eine Output-Variable y; den Preis. 

Die Konstante *Const* ergibt sich, wenn alle Eingangs-Gewichtungen 0 sind. 

![](/linear_regression.png)

Beispiel für das Schätzen eines Fahrzeugpreises mit Hilfe einer linearen Regression.

#### Klassifikation

Ein anderer Typ von *Supervised Learning* ist die *Klassifikation*. Das Ergebnis einer Klassifikation ist ein *Klassen-Code (class code)*, im Gegensatz zu einem numerischen Wert, den eine Regression liefert. 

Eine Klasse ist ein Satz von Instanzen, die sich alle die gleichen Eigenschaften teilen. 



#### Random Forest

Random Forest wird sowohl für Regressionen als auch für Klassifizierungsaufgaben oft verwendet. Random Forest basiert auf Entscheidungsbäumen (Decision Trees). 

#### Expertensysteme

Bevor der Durchbruch von *Maschinellem Lernen* kam, waren *Expertensysteme* in den 70er und 80er Jahren oft die Norm. Ein Expertensystem besteht aus einer *Wissensbasis* und einer *Inferenzmaschine*. Die Wissensbasis besteht oft in Form von Wenn-Dann-Regeln. Die *Inferenzmaschine* ist eine Software, mit der auf der *Wissensbasis* operiert wird. 

## Pattern Recognition

*Pattern Recognition* ist ein Teilbereich der Künstlichen Intelligenz. *Pattern Recognition* ist die automatische Erkennung von Mustern (Patterns) und Regelmäßigkeiten in Datensätzen. 

Ein Beispiel aus der einfachen Sorte ist das Lesen von Barcodes. 

### Pattern Recognition Applications

#### Barcodes

Barcodes werden durch Linien verschiedener Breiten dargestellt. Barcodes sind einfach und trotzdem effizient. 

#### Optical character recognition

OCR versucht gedruckte oder geschriebene Zeichen aus einem Bild/Datei zu erkennen. Im Idealfall, z.B. gedruckte Zeichen mit festgelegten Font, reicht ein simpler *Template Matching* Algorithmus. 

#### Gesichtserkennung

Bei der Gesichtserkennung haben wir es mit zwei Faktoren zu tun. Zum einen handelt es sich um Eigenschaften, um die Identität eines Gesichts zu erkennen. Zum anderen um das Aussehen, anhand dessen wir z.B. Gefühle oder Emotionen herauslesen können. 

Gefühle oder Emotionen spielen im Gebiet des *affective computing* eine große Rolle, um es Computersystemen zu ermöglichen, auf die Gefühle/Emotionen des Gegenübers zu reagieren. 

#### Biometrie

Verwandt mit der Gesichtserkennung ist das Gebiet der Biometrie. Hier werden verschiedene physiologische Merkmale wie Fingerabdruck, Iris, ... herangezogen, um z.B. eine Authentifizierung durchzuführen. 

#### Speech Recognition

In der Spracherkennung ist das akustische Signal der Input und die einzelnen Wörter bilden die Klassen. 

#### Natural Language Processing and Translation

Nehmen wir zur Spracherkennung noch ein sogenanntes *language model* hinzu, begeben wir uns in den Bereich des *Natural Language Processing*. Stark verwandt damit ist die Analyse von Kommunikation auf den verschiedensten sozialen Medien. Was gerade in heutiger Zeit enorm an Bedeutung gewonnen hat. 

#### Outlier Detection 

Das Ziel bei der *Outlier Detection* ist die Erkennung von Anomalien. Ein Anwendungsbereich davon ist z.B. die Erkennung von Spam-Mails. 

### Dimensionality Reduction

In jeder Applikation im Bereich der Künstlichen Intelligenz werden Attribute als Input herangezogen, um eine Entscheidung/Ergebnis herbeizuführen. Aus verschiedenen Gründen ist es allerdings angebracht, Attribute, die aufgrund von mangelnder Information nicht zum Ergebnis beitragen, eben nicht zu berücksichtigen - die sogenannte *Dimensionality Reduction*.

Grundsätzlich gibt es zwei Methoden, um eine *Dimensionality Reduction* durchzuführen. Zum einen durch *feature selection* und zum anderen durch *feature extraction*. 

Bei der *feature selection* behalten wir die wichtigen Attribute, während die unwichtigen verworfen werden.

Bei der *feature extraction* definieren wir neue Attribute, die aus den originalen Attributen gewonnen werden. Eine Methode aus dem Bereich des *feature extraction* ist die *principal component analysis*. Eine andere Methode die *linear discriminant analysis*. 

### Decision Trees

*Entscheidungsbäume* gehören mit zu den ältesten Algorithmen im Bereich der künstlichen Intelligenz. Sie gehören der Klasse der sogenannten *divide and conquer (teile und herrsche)* Algorithmen an. 

Entscheidungsbäume wurden und werden erfolgreich in verschiedenen Anwendungen des Maschinellen Lernens verwendet und sollten zusammen mit den linearen Modellen (Lineare Regression) zuvorderst für eine Applikation ausgewählt werden, bevor komplexere Modelle ausprobiert werden.

### Ranking

Ranking ist ebenfalls ein Teilgebiet des Maschinellen Lernens. Unterscheidet sich aber von der Regression und der Klassifikation. Tatsächlich wollen wir beim *Ranking* die Resultate in korrekter Reihenfolge vorliegen haben, um eine Rangliste erstellen zu können. 

Verwendet werden solche Algorithmen z.B. bei Suchmaschinen, um die Suchergebnisse nach Wichtigkeit vorliegen zu haben. 

### Bayesian Methods

In gewissen Applikationen und/oder mit gewissen Modellen besitzen wir möglicherweise a-priori Wissen über die möglichen Werte unserer Parameter. Die Idee der *Bayesian Methode* ist genau die, dieses a-priori Wissen zu nutzen, um bessere Ergebnisse zu erzielen. 

## Neuronale Netze und Deep Learning

### Introduction

Künstliche Neuronale Netze nehmen sich das Gehirn zum Vorbild. Das Gehirn besteht aus einer riesigen Anzahl von "Recheneinheiten", den sogenannten Neuronen. Jedes Neuron ist dabei verbunden mit einer großen Anzahl anderer Neuronen. Die Verbindungen zwischen Neuronen sind die sogenannten Synapsen. 

In den 60er Jahren wurde das Perzeptron-Modell zum erstenmal als Modell für die Mustererkennung von Frank Rosenblatt vorgeschlagen. Das Modell bildet ein Netzwerk von künstlichen Neuronen und synaptischen Verbindungen. Jedes Neuron hat einen Aktivierungswert und eine Verbindung von Neuron A nach Neuron B hat ein Gewicht, das den Einfluss von A auf B bemisst. Neuronen können in mehreren Schichten organisiert werden. Was landläufig als *multilayer perceptron* bezeichnet wird. 

**Neuronale Netze und Lern-Algorithmen**

Lernalgorithmen sind es jetzt, die diese Gewichte zwischen zwei Neuronen anpassen. Beim Supervised Learning werden gewisse Neuronen als Eingangs-Neuronen benannt und andere als Ausgangs-Neuronen. Wir definieren jetzt eine Fehler-Funktion, die die Summe der Differenzen zwischen den Ausgangswerten für einen gegebenen Input und den tatsächlich erwarteten Ausgangwert misst. Beim Trainieren passen wir die Gewichte nach und nach an, so dass der Fehler minimiert wird. 

Neuronale Netze, die nur Verbindungen zwischen Layern in einer Richtung besitzen, nennt man *feedforward Netzwerke*. Im Gegensatz zu *recurrent Netzwerke*, die auch Verbindungen zwischen Neuronen innerhalb eines Layers besitzen dürfen (inkl. Verbindungen zu sich selbst) und sogar Verbindungen zu Neuronen aus vorherigen Layern. 

In den 80er Jahren wurde der *backpropagation* Algorithmus vorgestellt, mit dem es zum erstenmal möglich war, *multilayer perceptrons* zu trainieren. Während das ursprüngliche Perzeptron-Modell nur in der Lage war, *single-layer* Netzwerke zu trainieren. 

Beim *Multilayer-Netzwerk* startet man mit dem raw input (z.B. Pixel) und jede Schicht führt inkrementell eine komplexere Transformation durch, so dass am Ende ein abstraktes Ergebnis erzielt wird. Die erste Schicht verarbeitet also z.B. nur einzelne Pixel aus einem Bild. Im nächsten Schritt werden daraus Striche und Kanten bis am Ende beispielsweise Zahlen erkannt werden können. Neuronen in den mittleren Schichten werden in diesem Falle als *hidden units* und die mittleren Schichten als *hidden layers* bezeichnet. 

Ein klassisches Multilayer-Netzwerk ist üblicherweise *fully connected*, d.h. jedes Neuron in einer Schicht ist verbunden mit jedem Neuron der nächsten Schicht. Le Cun et al schlugen 1989 in "Backpropagation applied to handwritten zip code recognition" [7] ein anderes Modell vor, in dem Units definiert werden, die nur über einen Teilbereich eines Layers verbunden sind. Dies reduziert die Verbindungen und die Anzahl der Parameter. Diese Netze werden *Convolutional Neural Networks* genannt. 

### Deep Learning

Nach und nach wurden die Ergebnisse vor allem aufgrund von Big Data und genügend Rechenpower besser und besser. Auch die Überwachung und das Lernen selbst wurden daduch immer selbstständiger, was zu den sogenannten *Deep Learning* Algorithmen führte. Die Idee hinter Deep Learning ist, vor allem die *hidden units* mit einem mimimalen menschlichen Einfluss trainieren zu lassen, d.h. die Algorithmen so zu gestalten, dass Features und Attribute selbstständig gelernt werden. Dadurch sind sie heutzutage die attraktivste Form von künstlichen Neuronalen Netzen. 

## Unsupervised Learning

Bei *Unsupervised Learning* Algorithmen sind die Trainingsdaten nicht gekennzeichnet, d.h. es gibt keine vorgegebenen Werte für die Ausgangs-Variable(n) in den Trainingsdaten. Ziel ist es, Objekte anhand ihrer Gemeinsamkeiten und Unterschiede zu Clustern zusammenzufassen. Der Anwender gibt dabei die Cluster-Definitionen nicht vor, sondern überlässt diese Aufgabe dem Computer. 

### Learning Clusters

Ziele des *Unsupervised Learning* sind üblicherweise die Suche nach neuen Clustern oder die Suche nach Anomalitäten. 

### Recommendation Systems

Matrix Decomposition

### Reinforcement Learning

"Algorithmen der Kategorie Reinforcement Learning lernen selbstständig, indem sie versuchen, Belohnungen zu maximieren beziehungsweise Strafen zu minimieren. Dahinter steckt das Prinzip von Try-und-Error, verbunden mit einer Bewertung, die gutes (zielführendes) Verhalten belohnt und schlechte Verhaltensmuster bestraft." [3]

Die bekanntesten Vertreter von Reinforcement Learning sind die genetischen Algorithmen. 

"Reinforcement Learning wird bei Minimierung- und Maximierungsaufgaben verwendet. Desweiteren kommt es bei Lernprozessen, bei denen auf sich verändernde Umwelteinflüsse reagiert werden soll, zum Einsatz." [3]

#### Genetische Algorithmen

Genetische Algorithmen orientieren sich an der Evolutionstheorie von Charles Darwin. Die drei wichtigsten Prinzipien bei Genetischen Algorithmen sind die Begriffe Rekombination, Mutation und Selektion.

**Rekombination** "Bei genetischen Algorithmen ist die Rekombination die Vermischung von  Eigenschaften der Elterngeneration bei der Weitergabe an die  Kindergeneration" [4]

**Mutation** "Bei genetischen Algorithmen sind Mutationen zufällige Veränderungen von Eigenschaften von einzelnen Individuen." [4]

**Selektion** "Bei genetischen Algorithmen findet die Selektion in der Regel durch eine mathematische Bewertungsfunktion statt: die sogenannte Fitnessfunktion." [4]

### k-Means

Der k-Means Algorithmus ist einer der bekanntesten Clustering-Algorithmen im *Unsupervised Learning*. Der *k-Means Algorithmus* besteht aus fünf Schritten.

1. Setze den Wert für die Variable k, d.h. für die Anzahl der Cluster.
2. Wähle k-Punkte als Anfangszentren der Cluster.
3. Ordne jeden Punkt, also jedem Merkmalsträger, jenem Zentrum zu, das ihm am nächsten ist. 
4. Berechne die k-Clusterzentren neu.
5. Hat sich die Position der Clusterzentren geändert? Wenn ja, springe zu Schritt 3, ansonsten fini.

### Temporal Difference Learning

tbd

### Reinforcement Learning Applications

**Games**

Backgammon, Arcade Games like PacMan, Go



## Literatur

[1] Machine Learning: The New AI, Ethem Alpaydin

[2] Maschinelles Lernen: Grundlagen und Algorithmen in Python, Jörg Frochte

[3] Wie Computer lernen, https://www.golem.de/news/kuenstliche-intelligenz-wie-computer-lernen-1810-135633.html, abgerufen am 23.12.2019

[4] Machine Learning anhand von drei Algorithmen erklärt, https://www.golem.de/news/random-forest-k-means-genetik-machine-learning-anhand-von-drei-algorithmen-erklaert-1810-136755.html, abgerufen am 23.12.2019

[5] Algorithmen in Python: 32 Klassiker vom Damenproblem bis zu Neuronalen Netzen, David Kopec

[6] Rosenblatt. 1962. Principles of Neurodynamics. 

[7] LeCun, Boser, Denker, Henderson, Howard, Hubbard, Jackel. 1989. "Backpropagation Applied to Handwritten Zip C'ode Recognition."

[8]  







