---
typora-root-url: ./images
---


# Generative Künstliche Intelligenz

[TOC]

Table of Contents
=================

* [Generative Künstliche Intelligenz](#generative-k%C3%BCnstliche-intelligenz)
* [Table of Contents](#table-of-contents)
  * [Definition](#definition)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Generative Pre-trained Transformers (GPT)

Hinter den heutzutage in aller Munde Generative Pre-trained Transformers (GPT) verbirgt sich im Kern ein Neuronales Netzwerk - und zwar in diesem Falle ein sogenanntes Large Language Model (LLM). Diesem werden viele Texte zum Training gereicht, sodass es nun weiß, mit welchen Teilwörtern (Tokens) ein Satz ergänzt werden soll. Die richtigen Tokens werden anhand von Wahrscheinlichkeiten ausgewählt. 

### ChatGPT

ChatGPT von OpenAI hat in Version 3.5 ca. 175 Milliarden Parameter. In Version 4.0 sind es schon ca. 100 Billionen Parameter. 

Die APIs hinter den auf LLMs basierenden Chatsystemen sind *stateless*. Daher muss bei jeder neuen Anfrage die komplette Sitzung an das Modell übergeben werden. Allerdings ist heutzutage der Kontext bei einer Anfrage oft auf 4096 oder 8192 Tokens begrenzt. Was ca. 8 DIN-A4 Seiten entspricht. Damit stößt man irgendwann an Grenzen. 

Deswegen gibt es einen zweiten Ansatz - und zwar der der Embeddings. 

### Embeddings

Bei den sogenannten Embeddings wird das Wissen, das ich dem Modell mitgeben möchte, in kleinere Blöcke (sogenannte Chunks) zerlegt. Diese werden dann aufgrund der Bedeutung ihres Inhalts über Vektoren in einen Vektorraum eingebettet (embedded). Dadurch kann ein System nun in diesem Vektorraum über den Abstand der Vektoren nach ähnlichen Blöcken suchen und sie in den Kontext einfügen. 

Embeddings sind im Wesentlichen eine Technik zur Umwandlung von unstrukturierten Daten in eine Struktur, die von Software leicht verarbeitet werden kann. Sie dienen dazu, komplexe Daten wie Wörter, Sätze oder sogar ganze Dokumente in einen Vektorraum zu transformieren, wobei ähnliche Elemente nahe beieinander liegen. Diese Vektordarstellungen ermöglichen es Maschinen, Nuancen und Beziehungen in den Daten zu erkennen und zu nutzen. 

### Large Language Model (LLM)

Diese Modelle sind eine Ausprägung tiefer neuronaler Netze für die Textmodalität. Heute werden sie oft mit Transformern auf großen Datenmengen vortrainiert, bevor sie als Grundlage weiterer Modelle für spezifische Aufgaben verwendet werden. 

### Prompt Engineering 

Prompt Engineering bezeichnet die Art und Weise (bzw. Tipps und Tricks) wie man mit einer GPT optimal kommuniziert. 

### Retrieval-augmented Generation (RAG)

Mit RAG kann ich eben nicht nur das Sprachverständnis und Wissen einer LLM nutzen, sondern das generische Wissen der LLM durch spezifische Informationen (z.B. interne Unternehmensinformationen) ersetzen. 

Bei RAG werden semantisch passende Infformationsfragmente zu einer Userfrage in einer Vektor-DB gesucht und von der AI zu einer individuellen Antwort zusammengefasst. Diese Umwandlung einer Information in einen Vektor übernimmt das sogenannte Embedding Model (quasi der kleine Bruder einer LLM). 

Diese Embedding-Modelle sind deutlich kleiner als ein LLM und benötigen weniger CPU, RAM und Storage bei der Ausführung. Dafür liefern sie nur einen repräsentierenden Vektor zurück. 

![](/RAG_workflow.png)

### Transformer

Eine spezielle Architektur neuronaler Netze. 

## Amazon AWS

## OpenAI

### Grundlagen und Überblick



### Der TypeScript Client



### Deployment in Azure



### Hands-on Beispiele und Szenarien



## Workshops

### OpenAI API Grundlagen - KI anbinden und verstehen

**Teil 1: Grundlagen und Überblick**

Die technischen Grundlagen und die Architektur der OpenAI APIs verstehen.

Einführung in die API-Strukturen und Authentifizierungsmechanismen, Vergleich der Chat Completions und Assistant APIs.

Unterschiede und Einsatzmöglichkeiten zwischen der Chat Completions API und der Assistant API erkennen.

**Teil 2: Der TypeScript Client**

TypeScript Client für OpenAI nutzen.

Setup und Konfiguration des TypeScript Clients, Demonstration von API-Calls und deren Handhabung.

**Teil 3: Deployment in Azure**

OpenAI-Modelle in Azure zu deployen und zu verwalten.

Anleitung zum Deployment von Modellen, Diskussion der Vorteile/Nachteile von Azure für KI-Anwendungen.

**Teil 4: Hands-on Beispiele und Szenarien**

Durchführung von praktischen Übungen und reale Anwendungsfälle.

### Deep Dive in die OpenAI API - KI in eigene Anwendungen integrieren

**Teil 1: Grundlagen und Überblick**

Grundlegende Funktionen und Authentifizierungsmethoden der OpenAI-API verstehen.

**Teil 2: Der TypeScript Client**

Verwendung der offiziellen SDKs in TypeScript, um die API in eigenen Projekten zu nutzen

**Teil 3: System Prompts**

Entwicklung von System Prompts und mit der Assistant API für benutzerdefinierte Anwendungsfälle zu arbeiten

**Teil 4: Fortgeschrittene Techniken**

Verwendung von fortgeschrittenen Techniken wie Streaming und Funktionsaufrufe.

**Teil 5: Embeddings und RAG Muster**

Verstehe die Nutzung von Embedding-Vektoren und des RAG-Entwurfsmusters.

### Eigene Sprachmodelle erstellen, feintunen und einsetzen

**Teil 1: Überblick** 

Meilensteine der Künstlichen Intelligenz

Sicherheit und Datenschutz

- Risiken durch Künstliche Intelligenz
- Cybersecurity und Künstliche Intelligenz
- Datenschutz und Urheberrecht
- KI on-premise vs. KI in der Cloud

Grundlagen von Machine Learning / Deep Learning

- Funktionsweise von künstlichen neuronalen Netzen
- Machine-Learning-Architekturen
- Funktionsweise von großen Sprachmodellen auf Basis der Transformer-Architektur
- Training der großen Sprachmodelle

Anwendungsbereiche für Machine Learning

- Die großen Sprach- und Bildmodelle, wie ChatGPT, Llama und Stable Diffusion
- Gefahren und Risiken von Deep Learning Modellen
- Einführung in PyTorch

**Teil 2: LLM erstellen mit PyTorch**

Tokenizers

- Tokenizer Types
- Character-level tokenizers
- Other tokenizers

Embeddings

- Embeddings vectors
- Embeddings implementation (from scratch)

Pytorch & Erstellen eines LLM von null auf (Durchführung in Google Colab)

- Tensor statt Arrays
- Lineare Algebra
- Inputs und Targets
- Batch size
- CPU/CUDA
- CPU VS GPU Leistungsvergleich
- Dot product
- Matrix Multiplikation
- Pytorch nnModule
- Gradient Descent
- Optimizer Erklärung
- Optimizer Implementierung
- Loss Function
- ReLU, Tanh, Sigmoid Activations
- Transformer und Self-Attention
- Transformer Architecture
- Multihead Attention und Dot product Attention
- Train/Test split
- Model Pickling
- Training

**Teil 3: Beispiele, Tuning, Einsatz**

- Übersicht über die Open-Source-Plattform für KI Hugging Face
- Übersicht über *pretrained models*
- *Token classification* - Daten anonymisieren
- *Text classification* - Stimmung von Personen erkennen
- *Text summarization* - Übersichten über einen Text erstellen
- *Sentence similarity* - Standard-Chatbot-Anwendungen verbessern
- Vektor-Speicherarchitektur
- Wie kombiniert man ein LLM mit Vektorspeicherdatenbank
- LLM-Feinabstimmung für spezifische Aufgaben



## Literatur

[1] Ethem Alpaydin: *Machine Learning: The New AI*, The Massachusetts Institute of Technology, 2016

[2] Jörg Frochte: *Maschinelles Lernen: Grundlagen und Algorithmen in Python*, 2. aktualisierte Auflage, Hanser, 2019

[3] John D. Kelleher: *Deep Learning*, The Massachusetts Institute of Technology, 2019

[4] Martin Ford: *Die Intelligenz der Maschinen - Mit Koryphäen der Künstlichen Intelligenz im Gespräch*, mitp Verlag, 2019

[5] ChatGPT 4 API: Der komplette Guide für Anfänger, https://www.derinformatikstudent.de/chatgpt-api-guide/, abgerufen am 24.07.2024

[6] https://github.com/rstropek/2024-07-25-starter, 

[7] https://www.npmjs.com/

[8] https://platform.openai.com/docs/overview

[9] https://platform.openai.com/playground/chat?models=gpt-3.5-turbo

[10] https://github.com/rstropek/microsoft-ai-day/

[11] Code LLM Modell-Provider, [ix.de/z1qq](https://ix.de/z1qq), abgerufen am 31. Oktober 2024



