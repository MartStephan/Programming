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
  * [Ansonsten](#ansonsten)
    * [Ethik](#ethik)
    * [Recht](#recht)
      * [DSVGO](#dsvgo)
      * [AI Act (AIA)](#ai-act-(aia))
  * [Bibliotheken](#bibliotheken)
    * [Matplotlib](#matplotlib)
    * [TensorFlow](#tensorflow)
    * [scikit-learn](#scikit-learn)
    * [PyTorch](#pytorch)
    * [SymPy](#sympy)
    * [Chainer](#chainer)
    * [Pandas](#pandas)
    * [LangChain](#langchain)
    * [Jupyter](#jupyter)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

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

In den 60er Jahren wurde das Perzeptron-Modell zum erstenmal als Modell für die Mustererkennung von Frank Rosenblatt [6] vorgeschlagen. Das Modell bildet ein Netzwerk von künstlichen Neuronen und synaptischen Verbindungen. Jedes Neuron hat einen Aktivierungswert und eine Verbindung von Neuron A nach Neuron B hat ein Gewicht, das den Einfluss von A auf B bemisst. Neuronen können in mehreren Schichten organisiert werden. Was landläufig als *multilayer perceptron* bezeichnet wird. 

**Neuronale Netze und Lern-Algorithmen**

Lernalgorithmen sind es jetzt, die diese Gewichte zwischen zwei Neuronen anpassen. Beim *Supervised Learning* werden gewisse Neuronen als Eingangs-Neuronen benannt und andere als Ausgangs-Neuronen. Wir definieren jetzt eine Fehler-Funktion, die die Summe der Differenzen zwischen den Ausgangswerten für einen gegebenen Input und den tatsächlich erwarteten Ausgangwert misst. Beim Trainieren passen wir die Gewichte nach und nach an, so dass der Fehler minimiert wird. 

Neuronale Netze, die nur Verbindungen zwischen Layern in einer Richtung besitzen, nennt man *feedforward Netzwerke*. Im Gegensatz zu *recurrent Netzwerke*, die auch Verbindungen zwischen Neuronen innerhalb eines Layers besitzen dürfen (inkl. Verbindungen zu sich selbst) und sogar Verbindungen zu Neuronen aus vorherigen Layern. 

In den 80er Jahren wurde der *backpropagation* Algorithmus vorgestellt, mit dem es zum erstenmal möglich war, *multilayer perceptrons* zu trainieren. Während das ursprüngliche Perzeptron-Modell nur in der Lage war, *single-layer* Netzwerke zu trainieren. 

Beim *Multilayer-Netzwerk* startet man mit dem raw input (z.B. Pixel) und jede Schicht führt inkrementell eine komplexere Transformation durch, so dass am Ende ein abstraktes Ergebnis erzielt wird. Die erste Schicht verarbeitet also z.B. nur einzelne Pixel aus einem Bild. Im nächsten Schritt werden daraus Striche und Kanten bis am Ende beispielsweise Zahlen erkannt werden können. Neuronen in den mittleren Schichten werden in diesem Falle als *hidden units* und die mittleren Schichten als *hidden layers* bezeichnet. 

Ein klassisches Multilayer-Netzwerk ist üblicherweise *fully connected*, d.h. jedes Neuron in einer Schicht ist verbunden mit jedem Neuron der nächsten Schicht. Le Cun et al schlugen 1989 in "Backpropagation applied to handwritten zip code recognition" [7] ein anderes Modell vor, in dem Units definiert werden, die nur über einen Teilbereich eines Layers verbunden sind. Dies reduziert die Verbindungen und die Anzahl der Parameter. Diese Netze werden *Convolutional Neural Networks* genannt. 

Ein Spezialfall eines *multilayer networks* ist der sogenannte *Autoencoder*. Eine Eigenschaft des Autoencoder ist, dass er weniger hidden units in den Zwischenschichten besitzt, als er am Eingang besitzt. Er implementiert quasi einen Encoder, der einen n-dimensionalen Eingang encodiert und in eine Schicht mit weniger *hidden units* umwandelt. Am Ende wiederum wandelt ein Decoder die komprimierten *hidden units* wieder in den n-dimensionalen Vektor um, wie er am Eingang bestand. Der *Autoencoder* ist ein Beispiel eines *Unsupervised Learning* Algorithmus.

### Deep Learning

Nach und nach wurden die Ergebnisse vor allem aufgrund von Big Data und genügend Rechenpower besser und besser. Auch die Überwachung und das Lernen selbst wurden daduch immer selbstständiger, was zu den sogenannten *Deep Learning* Algorithmen führte. Die Idee hinter *Deep Learning* ist, vor allem die *hidden units* mit einem mimimalen menschlichen Einfluss trainieren zu lassen, d.h. die Algorithmen so zu gestalten, dass Features und Attribute selbstständig gelernt werden. Dadurch sind sie heutzutage die attraktivste Form von künstlichen Neuronalen Netzen. 

Die Idee hinter *Deep Learning* basiert auf *Multilayer*-Netzwerken, wie oben beschrieben. Man startet mit dem raw input (z.B. Pixel) und jede Schicht führt inkrementell eine komplexere Transformation durch, so dass am Ende ein abstraktes Ergebnis erzielt wird. Die erste Schicht verarbeitet also z.B. nur einzelne Pixel aus einem Bild. Im nächsten Schritt werden daraus Striche und Kanten bis am Ende beispielsweise Zahlen erkannt werden können.

### Wissenschaft

Im Jahr 2000 konnte der Biochemiker Eric Kandel einen Nobelpreis für seine Arbeit zum Nervensystem von Meeresschnecken entgegennehmen. Meeresschnecken besitzen rund 20000 Neuronen. Vollständig rekonstruiert wurde das Gehirn des Fadenwurms C. elegans, welches 300 Neuronen besitzt. In einem Artikel [24] und [25] wurde von einem Forscherteam das Gehirn einer Fruchtfliege rekonstruiert, welches ca. 140.000 Neuronen besitzt. Im Schnitt besitzt jede Nervenzelle rund 360 Verbindungen zu anderen Nervenzellen. 

Der Mensch besitzt ca 140.000.000.000 Neuronen im Gehirn. 

## Unsupervised Learning

Bei *Unsupervised Learning* Algorithmen sind die Trainingsdaten nicht gekennzeichnet, d.h. es gibt keine vorgegebenen Werte für die Ausgangs-Variable(n) in den Trainingsdaten. Ziel ist es, Objekte anhand ihrer Gemeinsamkeiten und Unterschiede zu *Clustern* zusammenzufassen. Der Anwender gibt dabei die Cluster-Definitionen nicht vor, sondern überlässt diese Aufgabe dem Computer. 

Anwendungen des Unsupervised Learning sind z.B. *document clustering* oder Anwendungen in der Bioinformatik.

Auch im Bereich des *Supervised Learning* werden Ähnlichkeiten zu Clustern zusammengefasst. Das kann dann geschehen, falls man Ähnlichkeiten im voraus definieren kann. Diese Applikationen werden im Fachjargon oft unter dem Namen *kernel functions* zusammengefasst. Ein bekannter Algorithmus daraus ist z.B. die *Support Vector Machine*.

### Learning Clusters

Ziele des *Unsupervised Learning* sind üblicherweise die Suche nach neuen Clustern oder die Suche nach Anomalitäten. 

### Recommendation Systems

Matrix Decomposition

### Reinforcement Learning

"Algorithmen der Kategorie Reinforcement Learning lernen selbstständig, indem sie versuchen, Belohnungen zu maximieren beziehungsweise Strafen zu minimieren. Dahinter steckt das Prinzip von Try-und-Error, verbunden mit einer Bewertung, die gutes (zielführendes) Verhalten belohnt und schlechte Verhaltensmuster bestraft." [3]

Die bekanntesten Vertreter von *Reinforcement Learning* sind die genetischen Algorithmen. 

"*Reinforcement Learning* wird bei Minimierung- und Maximierungsaufgaben verwendet. Desweiteren kommt es bei Lernprozessen, bei denen auf sich verändernde Umwelteinflüsse reagiert werden soll, zum Einsatz." [3]

Ein einfaches Beispiel eines *Reinforcement Learning* Algorithmus ist der *K-Armed Bandit*. 

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

Ein typisches Beispiel für eine Anwendung des *Temporal Difference Learning* ist ein Fußball spielender Roboter. Nicht nur die letztendliche Bewegung, die zu einem Tor führt, soll bewertet werden. Sondern eigentlich müssten alle Spielzüge von Anfang an bewertet werden und am Ende eines Spielzuges (also Spielzug führte zu einem Tor oder nicht) in die Gesamtbewertung mit einfließen. Solche Art von Algorithmen nennt man *Temporal Difference Learning (TD)*.

### Reinforcement Learning Applications

**Games**

Backgammon, Arcade Games like PacMan, Go



## Ansonsten

### Ethik

In einer Studie von Europol geht man davon aus, dass bis 2026 bis zu 90 Prozent des Web-Contents von KI generiert wird [15].

 

Wichtige Herausforderungen sind:

**Datenschutz**

Daten müssen effektiv geschützt werden und die Privatsphäre der Nutzer respektiert werden.

**Autonomie**

Wie autonom sollen KIs agieren? Vor allem im Bereich der kritischen Infrastruktur?

**Kontrolle**

Es bedarf Möglichkeiten menschlicher Kontrolle bzw. Möglichkeiten, nachzuvollziehen, was zu bestimmten Entscheidungen  geführt hat.

 

**Bias**

Mit dem Bias meint man die Voreingenommenheit der Modelle. Auf [16] kann man schön den Bias verschiedener Modelle testen.

 

**Regulierung**

In Europa versucht man mit dem KI Act und der DSVGO KI zu regulieren. Aber wie so oft haben Regulierungen positive als auch negative Effekte.

 

**Alignment**

Mit Alignment bezeichnet man die Möglichkeit, dass  künstliche Intelligenz menschliche Werte und Absichten kennt und darauf  ausgerichtet werden kann.

 

Die Firma Aleph Alpha aus Deutschland versucht mit  Attention Manipulation (AtMan []) einen Weg zu gehen, um transparent zu  machen, wie das Modell zu den entsprechenden Ergebnissen kommt.

 

### Recht und Datenschutz

(Mindestens) in Europa bilden vor allem die Datenschutz-Grundverordnung (DSVGO) und der AI Act der Europäischen Union (AIA) die Leitplanken der Regelungen zur Gestaltung der digitalen Zukunft und hier besonders der Künstlichen Intelligenz. 

#### DSVGO

Die Ziele der DSVGO [18] sind klar: Den Bürgern die Kontrolle über ihre Daten zurückzugeben und ein einheitliches Datenschutzniveau in der gesamten EU sicherzustellen. Praktisch hat das für KI-Entwickler/entwickelnde Firmen Auswirkungen. 

So braucht man die Einwilligung der Nutzer für die Verwendung zu Trainingszwecken. 

Sobald man eine Anwendung, wie bspw. OpenAI via API, anbindet und den Nutzern über einen eigenen Service zur Verfügung stellt, ist man selbst zur Sicherstellung der DSVGO verpflichtet. 

Wie im vorherigen Kapitel schon einmal beschrieben: Eine Herausforderung beim Einsatz vortrainierter Modelle besetht darin, dass sie die Voreingenommenheit (Bias), die man nicht genau kennt, mitgeliefert bekommt und erst nachträglich feststellt, welche Auswirkungen das für den Entwickler und die Nutzer in der Praxis hat.  

#### AI Act (AIA) 

Im Grundsatz geht es beim AI Act [19] darum, ein Umfeld zu schaffen, in dem KI zum Wohl aller eingesetzt wird. Das bedeutet, dass KI-Systeme auch ttransparent, verantwortungsbewusst und ohne Diskriminierung arbeiten sollten. Anders gesagt: das Hauptziel besteht in der Etablierung ethischer Standards. 

Folgende Prinzipien sind in der KI-VO (AI Act) verankert: 

- menschliches Handeln/menschliche Aufsicht
- technische Robustheit und Sicherheit
- Privatsphäre
- Daten-Governance
- Transparenz/Informationspflichten
- Vielfalt
- Nichtdiskriminierung/Fairness
- soziales und ökologisches Wohlergehen
- technische Dokumentation/Rechenschaftspflicht

Die drei wichtigsten Aspekte sind: 

- *Risikokategorien:* Der AI Act klassifiziert KI-Systeme nach ihrem Risiko für Grundrechte und Sicherheit
- *Qualität der Trainingsdaten:* Qualität und Herkunft der Trainingsdaten müssen fair, repräsentativ und ohne Diskriminierung sein. 
- *Transparenzanforderungen:* KI-Systeme sollten transparent in ihrer Funktionsweise sein. 

Es gibt insgesamt vier Risikogruppen/-kategorien im AI Act.

- Unacceptable Risk (inakzeptables/unannehmbares Risiko)
- High Risk (hohes Risiko) - stark regulierter Bereich
- Limited Risk (begrenztes Risiko)
- Minimal/No Risk (minimales oder kein Risiko)

Ein *unahnnembares Risiko* wird in folgenden Fällen angenommen: 

- unterschwellige Beeinflussung
- Ausnutzung der Schwäche oder Schutzbedürftigkeit von Personen
- biometrische Kategorisierung
- Bewertung des sozialen Verhaltens
- biometrische Echtzeit-Fernidentifizierungssysteme
- Risikobeurteilung von natürlichen Personen
- Datenbanken zur Gesichtserkennung
- Ableitung von Emotionen natürlicher Personen
- Analyse von aufgezeichneten Bildmaterial

Zum *Hochrisikobereich* zählen dagegen die folgenden KI-Technologien:

- biometrische Identifizierung
- Verwaltung und Betrieb kritischer Infrastrukturen (KRITIS)
- allgemeine und berufliche Bildung
- Beschäftigung, Personalmanagement und Zugang zur Selbständigkeit
- Zugänglichkeit und Inanspruchnahme grundlegender privater und öffentlicher Dienste und Dienstleistungen (z.B. Wohnen, Strom, Heizung, Internet, Ärzte, ...)
- Strafverfolgung
- Migration, Asyl und Grenzkontrolle
- Rechtspflege und demokratische Prozesse 

## Bibliotheken

### Matplotlib

Eine Open-Source-Bibliothek, die häufig für die Visualisierung von Daten mit Hilfe von Diagrammen verwendet wird. Mit nur wenigen Codezeilen können Grafiken, Tortendiagramme, Streudiagramme, Histogramme usw. erstellt werden.

### TensorFlow

Ein beliebtes Open-Source-Deep-Learning-Framework für numerische Berechnungen. Die Bibliothek wird auch für maschinelles Lernen verwendet. TensorFlow wurde von den Forschern des Google-Brain-Teams innerhalb der Google-AI-Organisation entwickelt und wird heute von vielen Wissenschaftlern eingesetzt. 

### scikit-learn

Eine Bibliothek für maschinelles Lernen. Sie kann für eine Vielzahl von Anwendungen verwendet werden, darunter Klassifizierung, Regression, Clustering und Modellauswahl.  Wird also überwiegend für statistische Verfahren verwendet. Darüber hinaus bietet sie aber auch eine Möglichkeit zum Trainieren neuronaler Netze, Sie eignet sich für den schnellen Einstieg in Datentransformation und Machine-Learning-Algorithmen.   

![](https://github.com/MartStephan/Programming/blob/master/lang/images/scikit-learn-cheatsheet.png)

Image is from scikit-learn. You can find the clickable original under https://scikit-learn.org/stable/tutorial/machine_learning_map/index.html

### PyTorch

PyTorch ist das wohl populärste Framework, um künstliche neuronale Netze zu definieren, zu trainieren und anzuwenden. Es verbirgt die komplexen KI-Algorithmen unter einer entwicklerfreundlichen Programmierschnittstelle.  

### SymPy

Eine Bibliothek, die umfassende Methoden für symbolische Berechnungen bietet und im Sinne eines Computer-Algebra--Systems genutzt werden kann. Symbolisches Rechnen ermöglicht das Lösen von Gleichungen, z.B. die Auflösung nach einer bestimmten Variable. Dabei wird eine exakte Lösung ermittelt und nicht nur ein numerischer Näherungswert bestimmt Symbolisches Rechnen gilt mit Blick auf den Einsatz am Computer als deutlich komplexer als die Verwendung von Näherungsverfahren. Derartige Algorithmen selbst zu entwickeln ist sehr anspruchsvoll.

### Chainer

Eine Bibliothek, um Deep-Learning-Modelle zu erstellen. Die drei Hauptschwerpunkte sind: Transportsysteme (autonomes Fahren), Fertigungsindustrie (Objekterkennung, Optimierung, Robotik) und Gesundheitsvorsorge (Bildanalyse). 

### Pandas

Pandas ist eine der am häufigsten verwendeten Python-Bibliotheken im Bereich Datenanalyse, -manipulation und -visualisierung. Es kann Daten aus verschiedenen Quellen wie JSON-, CSV-, Excel- und SQL-Dateien lesen. 
Hervorzuhebende Eigenschaften von Pandas sind: 

- Einfache Datenverarbeitung
  Pandas kann Daten aus einer Vielzahl von Quellen lesen und in ein einheitliches Format umwandeln. 
- Flexibilität bei der Verwaltung von Daten
  Daten können gefiltert, sortiert, gruppiert und transformiert werden. 
- Effektive Datenanalyse 
  Die Bibliothek wurde entwickelt, um große Datenmengen parallel zu verarbeiten. 
- Flexibilität bei der Visualisierung von Daten
  Pandas beinhaltet eine große Anzahl von Diagrammtypen zur Visualisierung wie Boxplots, Balkendiagramme und Streudiagramme. 

### LangChain

Python-Framework zur Erstellung und Benutzung von Generativen KIs (LLMs). Es ist das führende Framework derzeit für Use-Cases im Bereich der Generativen AI. 

### Jupyter

Notebooks wie Jupyter ermöglichen die Kombination von Notizen, Grafiken, Videos und dergleichen mit editier- und ausführbarem Code. Jupyter stellt dabei unterschiedliche Kernels zur Verfügung. Unter einem Kernel versteht man in diesem Zusammenhang einen Prozess, der interaktiven Code in einer bestimmten Sprache ausführt. 

Bei Start von Jupyter befindet man sich in einer sogenannten Zelle. Es gibt verschiedene Arten von Zellen z.B. Codezellen oder Textzellen. 

Die nächste Generation von Jupyter-Benutzeroberfächen ist das sogenannte *JupyterLab*. 

Ergänzende Werkzeuge für die Arbeit mit Notebooks: 

*nbstripout*: Jedes Notebook speichert alle Daten in einer Datei. nbstripout sorgt hier für Ordnung und entfernt alle generierten (Meta-)Daten. 

*RISE*: RISE ist ein Generator für reveal.js-basierte HTML-Slideshows. 

*JupyterHub*: Erweitert Jupyter für mehrere Benutzer inkl. Authentifizierung, Container-Unterstützung und zentralisiertem Deployment. 

## Literatur

[1] Machine Learning: The New AI, Ethem Alpaydin

[2] Maschinelles Lernen: Grundlagen und Algorithmen in Python, Jörg Frochte

[3] Wie Computer lernen, https://www.golem.de/news/kuenstliche-intelligenz-wie-computer-lernen-1810-135633.html, abgerufen am 23.12.2019

[4] Machine Learning anhand von drei Algorithmen erklärt, https://www.golem.de/news/random-forest-k-means-genetik-machine-learning-anhand-von-drei-algorithmen-erklaert-1810-136755.html, abgerufen am 23.12.2019

[5] Algorithmen in Python: 32 Klassiker vom Damenproblem bis zu Neuronalen Netzen, David Kopec

[6] Rosenblatt. 1962. Principles of Neurodynamics. 

[7] LeCun, Boser, Denker, Henderson, Howard, Hubbard, Jackel. 1989. "Backpropagation Applied to Handwritten Zip Code Recognition."

[8] https://matplotlib.org/, abgerufen am 19.11.2023

[9] https://www.tensorflow.org/, abgerufen am 19.11.2023

[10] https://scikit-learn.org/stable/index.html, abgerufen am 19.11.2023

[11] https://pytorch.org/, abgerufen am 19.11.2023

[12] https://www.sympy.org/en/index.html, abgerufen am 19.11.2023

[13] https://chainer.org/, abgerufen am 19.11.2023

[14] https://pandas.pydata.org/, abgerufen am 19.11.2023

[15] [ https://www.europol.europa.eu/publications-events/publications/facing-reality-law-enforcement-and-challenge-of-deepfakes](https://www.europol.europa.eu/publications-events/publications/facing-reality-law-enforcement-and-challenge-of-deepfakes), abgerufen am 27.08.2024

[16] [ https://huggingface.co/spaces/society-ethics/DiffusionBiasExplorer](https://huggingface.co/spaces/society-ethics/DiffusionBiasExplorer), abgerufen am 27.08.2024

[17] [ https://docs.aleph-alpha.com/docs/category/explainability/](https://docs.aleph-alpha.com/docs/category/explainability/), abgerufen am 27.08.2024

[18] https://eur-lex.europa.eu/legal-content/DE/TXT/HTML/?uri=CELEX:32016R0679, abgerufen am 05.10.2024

[19] https://eur-lex.europa.eu/legal-content/DE/TXT/HTML/?uri=CELEX:52021PC0206, abgerufen am 05.10.2024

https://blog.iao.fraunhofer.de/spielarten-der-kuenstlichen-intelligenz-maschinelles-lernen-und-kuenstliche-neuronale-netze/

https://www.spektrum.de/news/hat-kuenstliche-intelligenz-wie-chatgpt-ein-bewusstsein/2193018

https://www.wolfgang-wahlster.de/wwdata/Gutenberg_Stiftungsprofessur_Mainz_2017/Lernende_Maschinen.pdf

https://www.plattform-lernende-systeme.de/files/Downloads/Publikationen/AG3_WP_KI_Datenschutz_Datenschatz.pdf

[24] https://www.mdr.de/wissen/psychologie-sozialwissenschaften/fruchtfliege-gerhin-komplett-kartiert-100.html, abgerufen am 27.10.2024

[25] https://www.nature.com/articles/s41586-024-07558-y, abgerufen am 27.10.2024

[26] AI Act - die KI-Verordnung ist endlich da, entwickler magazin, Ausgabe 07.2024

[27] Bundesverband IT-Sicherheit, https://www.stand-der-technik-security.de/startseite/, abgerufen am 05.11.2024

[28] https://the-decoder.de/, abgerufen am 29.11.2024 

[29] https://www.langchain.com/, abgerufen am 29.11.2024

[30] https://paperswithcode.com/, abgerufen am 29.11.2024

[31] Project Jupyter, https://jupyter.org, abgerufen am 16.02.2025

[32] JupyterLab Documentation, https://jupyterlab.readthedocs.io/en/latest/, abgerufen am 16.02.2025

[33] nbstripout, https://github.com/kynan/nbstripout, abgerufen am 16.02.2025

[34] RISE, https://github.com/damianavila/RISE, abgerufen am 16.02.2025

[35] JupyterHub, https://github.com/jupyterhub/jupyterhub, abgerufen am 16.02.2025







