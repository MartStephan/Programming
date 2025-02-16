# Idioms

[TOC]

Table of Contents
=================

* [Idioms](#idioms)
* [Table of Contents](#table-of-contents)
  * [Deep Learning](#deep-learning)
  * [Extrapolation](#extrapolation)
  * [Genetische Algorithmen](#genetische-algorithmen)
  * [k\-means\-Algorithmus](#k-means-algorithmus)
  * [Künstliche Intelligenz](#k%C3%BCnstliche-intelligenz)
  * [Lagrange](#lagrange)
  * [Neuronale Netze](#neuronale-netze)
  * [Overfitting und Underfitting](#overfitting-und-underfitting)
  * [Maschinelles Lernen](#maschinelles-lernen)
    * [Supervised Learning](#supervised-learning)
    * [Unsupervised Learning](#unsupervised-learning)
  * [Ockhams Rasiermesser](#ockhams-rasiermesser)
  * [Runges Phänomen](#runges-ph%C3%A4nomen)
  * [Summe der Fehlerquadrate](#summe-der-fehlerquadrate)
  * [Stützstellen](#st%C3%BCtzstellen)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Deep Learning

Eine Spielart des Maschinellen Lernens, in der tiefe neuronale Netze als Architektur für Modelle genutzt werden. 

Prinzipiell spricht man von Deep Learning sobald man man einem Neuronalen Netzwerk mehr als einen Hidden-Layer hinzufügt. 

## Extrapolation



## Genetische Algorithmen

Genetische Algorithmen werden häufig zum Lösen von Optimierungsproblemen benutzt. Dabei greift man auf Begriffe und Methoden zurück, die aus der Genetik bekannt sind. So kennt man bei den Genetischen Algorithmen z.B. auch die Begriffe Mutation und Rekombination. 

## Generative Pre-trained Transformers (GPT)

Hinter den heutzutage in aller Munde Generative Pre-trained Transformers (GPT) verbirgt sich im Kern ein Neuronales Netzwerk - und zwar in diesem Falle ein sogenanntes Large Language Model. Diesem werden viele Texte zum Training gereicht, sodass es nun weiß, mit welchen Teilwörtern (Tokens) ein Satz ergänzt werden soll. Die richtigen Tokens werden anhand von Wahrscheinlichkeiten ausgewählt. 

### ChatGPT

ChatGPT von OpenAI hat in Version 3.5 ca. 175 Milliarden Parameter. In Version 4.0 sind es schon ca. 100 Billionen Parameter. 

Die APIs hinter den auf LLMs basierenden Chatsystemen sind *stateless*. Daher muss bei jeder neuen Anfrage die komplette Sitzung an das Modell übergeben werden. Allerdings ist heutzutage der Kontext bei einer Anfrage oft auf 4096 oder 8192 Tokens begrenzt. Was ca. 8 DIN-A4 Seiten entspricht. Damit stößt man irgendwann an Grenzen. 

Deswegen gibt es einen zweiten Ansatz - und zwar der der Embeddings. 

### Embeddings

Bei den sogenannten Embeddings wird das Wissen, das ich dem Modell mitgeben möchte, in kleinere Blöcke (sogenannte Chunks) zerlegt. Diese werden dann aufgrund der Bedeutung ihres Inhalts über Vektoren in einen Vektorraum eingebettet (embedded). Dadurch kann ein System nun in diesem Vektorraum über den Abstand der Vektoren nach ähnlichen Blöcken suchen und sie in den Kontext einfügen. 

### Large Language Model (LLM)

Diese Modelle sind eine Ausprägung tiefer neuronaler Netze für die Textmodalität. Heute werden sie oft mit Transformern auf großen Datenmengen vortrainiert, bevor sie als Grundlage weiterer Modelle für spezifische Aufgaben verwendet werden. 

### Prompt Engineering 

Prompt Engineering bezeichnet die Art und Weise (bzw. Tipps und Tricks) wie man mit einer GPT optimal kommuniziert. 

### Retrieval-augmented Generation (RAG)

Mit RAG kann ich eben nicht nur das Sprachverständnis und Wissen einer LLM nutzen, sondern das generische Wissen der LLM durch spezifische Informationen (z.B. interne Unternehmensinformationen) ersetzen. 

Bei RAG werden semantisch passende Infformationsfragmente zu einer Userfrage in einer Vektor-DB gesucht und von der AI zu einer individuellen Antwort zusammengefasst. Diese Umwandlung einer Information in einen Vektor übernimmt das sogenannte Embedding Model (quasi der kleine Bruder einer LLM). 

Diese Embedding-Modelle sind deutlich kleiner als ein LLM und benötigen weniger CPU, RAM und Storage bei der Ausführung. Dafür liefern sie nur einen repräsentierenden Vektor zurück. 

### Transformer

Eine spezielle Architektur neuronaler Netze. 

## k-means-Algorithmus

Unsupervised Algorithmus, der dazu dient, automatisiert Daten in Cluster einzuteilen. Wobei lediglich die Anzahl, nicht die Art der Cluster vorgegeben ist.  

## Künstliche Intelligenz

Die Künstliche Intelligenz ist ein Teilgebiet der Informatik, dessen Ziel es ist, intelligentes Verhalten und Lernen auf künstlichem Weg nachzubilden.

## Lagrange



### Modell

Technisch gesehen ist es eine Berechnungsvorschrift, um auf Basis von Eingabedaten eine Ausgabe zu errechnen. Es kann als Artefakt serialisiert und deserialisiert werden und wird in einer Laufzeitumgebung (oder als Code) operativ. 

## Neuronale Netze

Neuronale Netze sind heutzutage die erfolgreichsten Algorithmen des Maschinellen Lernens. Sie bestehen aus Neuronen, die miteinander in Verbindung stehen. Die Neuronen werden in Schichten aufgeteilt. Üblicherweise unterteilt man Neuronale Netze in drei Schichten: Der Input-Schicht, den Hidden-Layers und der Ausgangs-Schicht. 

## Overfitting und Underfitting

Das sogenannte Overfitting passiert, falls der Algorithmus nicht generalisiert, sondern nur die exakten Werte (aus z.B. den Trainingsdaten) auswendig gelernt hat. 

Das Gegenteil von Overfitting ist Underfitting, bei dem der Algorithmus ebenfalls nicht generalisiert, sondern mehr oder weniger alles wahllos akzeptiert. 

## Maschinelles Lernen

Maschinelles Lernen ist ein Teilgebiet der Künstlichen Intelligenz. Bei Maschinellem Lernen werden aus Daten unter Nutzung von Kostenfunktionen und Optimierung Regelmäßigkeiten extrahiert und in Form von Modellen für die Nutzung bereitgestellt. 

Es gibt zwei Arten von Lernen zu unterscheiden. Supervised Learning und Unsupervised Learning. 

### Supervised Learning

Die KI erhält Feedback von außen, an dem sie sich orientieren und anpassen kann. Beispiele sind Klassifikation und Regressionsanalyse. 

### Unsupervised Learning

Die KI ist sozusagen auf sich allein gestellt. Ein typischer Algorithmus dafür ist das Clustering.

## Ockhams Rasiermesser



## Prompt Engineering



## Runges Phänomen



## Summe der Fehlerquadrate



## Stützstellen



## Literatur

[1] 	Maschinelles Lernen, Grundlagen und Algorithmen in Python, Jörg Frochte

