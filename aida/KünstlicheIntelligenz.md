---
typora-copy-images-to: images
typora-root-url: images
---

# Künstliche Intelligenz

## Wahrscheinlichkeitstheorie

Unsicherheiten modellieren wir mit Hilfe der Wahrscheinlichkeitstheorie. 

Beispiel: Bei einem Münzwurf gehen wir davon aus, dass die Wahrscheinlichkeit auf Kopf oder Zahl bei 50:50 liegt. 

## Statistik

Falls wir aber diese Wahrscheinlichkeiten nicht kennen, bewegen wir uns im Bereich der Statistik. Wir können z.B. die Münze 6-mal werfen und erhalten 4-mal Kopf + 2-mal Zahl. 

--> Die Wahrscheinlichkeit von Kopf ist dann (statistisch) 2/3.

--> Die Wahrscheinlichkeit von Zahl ist (statistisch) 1/3.

## Supervised Learning

In der Statistik wird das Schätzen eines Ausganswertes auf Basis von Eingangswerten Regression genannt. Bei einem linearen Modell nennen wir es dann lineare Regression.

Regression ist eine Art von *Supervised Learning*. Lernen bezeichnet hier die Anpassung der Parameter, so dass das Modell 'optimal' ist. 

Beachte: Das Ziel von *Maschinellem Lernen* ist die (korrekte) Vorhersage von neuen Fällen. Alles andere wäre *memorisation*. 

Beim Lernen sehen wir nur einen Bruchteil aller möglichen Fälle und wir wollen darauf aufbauend verallgemeineren. Wie gut ein Modell aus vorhandenen Daten das Resultat vorhersagt, nennt man die *Fähigkeit zur Verallgemeinerung*. 



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

## Literatur

[1] Machine Learning: The New AI, Ethem Alpaydin

[2] Maschinelles Lernen: Grundlagen und Algorithmen in Python, Jörg Frochte

[3] Wie Computer lernen, https://www.golem.de/news/kuenstliche-intelligenz-wie-computer-lernen-1810-135633.html, abgerufen am 30.11.2019

[4] Machine Learning anhand von drei Algorithmen erklärt, https://www.golem.de/news/random-forest-k-means-genetik-machine-learning-anhand-von-drei-algorithmen-erklaert-1810-136755.html, abgerufen am 30.11.2019





