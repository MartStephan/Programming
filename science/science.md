# Idioms

[TOC]

Table of Contents
=================

* 

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Größter gemeinsamer Teiler



## Hamming

Hamming-Code und Hamming-Distanz sind nach dem US-amerikanischen Mathematiker Richard Wesley Hamming benannt und sind Begriffe aus der Nachrichtentechnik und Informationstheorie.

Die Hamming-Distanz beschreibt die Distanz zwischen zwei Codewörtern. Die geringste Distanz zwischen zwei Codewörtern in einem Code nennt man die Hamming-Distanz des Codes. Codes mit einer größeren Hamming-Distanz sind Fehlern gegenüber robuster. Der Nachteil ist, dass die Codewörter größer werden. 

Die Hamming-Distanz wird zur Fehlererkennung und zur Fehlerkorrektur benutzt. Mit (h=Hamming-Distanz) h=2 können alle 1-Bit Fehler erkannt werden. Mit h=3 können alle 1-Bit Fehler erkannt und korrigiert werden. 

In der Programmierung verwendet man für Binärzahlen eine XOR-Operation mit anschließendem Abzählen der resultierenden Einsen.

Hamming war ein Kollege von *Shannon*. Hamming kam letztendlich auf eine Idee, die heute als *Hamming-Code* bezeichnet wird. Um die 'wertvolle' Rechenzeit auf den damaligen Rechnern nicht unnötig aufgrund einer fehlerhaften Übertragung zu strapazieren entwickelte Hamming folgenden Code: 

Jede Nachricht wurde auf Blöcken von 3 Symbolen heruntergebrochen:

111 010 101 ...

Der Hamming-Code ist eine Regel, um jeden dieser 3-Stellen Blöcke in einen 7-Stellen-Block umzuwandeln:

000 --> 0000000

001 --> 0010111

010 --> 0101011

011 --> 0111100

101 --> 1011010

110 --> 1100110

100 --> 1001101

111 --> 1110001

Und diese acht Code-Wörter sind die einzigen, die erlaubt sind. Bekommt der Empfänger irgendein anderes Code-Wort, ist irgendetwas schiefgelaufen. Beispiel: Der Empfänger erhält 1010001. Dieses Code-Wort existiert nicht. Es ist also etwas schiefgelaufen. Und noch besser: Dieses Code-Wort 1010001 unterscheidet sich nur an einer Stelle von 1110001. Und es gibt kein anderes Code-Wort, welches sich exakt nur an einer Stelle unterscheidet, d.h. der Empfänger kann mit hoher Wahrscheinlichket davon ausgehen, dass 1110001 gemeint war und damit kann der Empfänger selbstständig die fehlerhafte Übertragung korrigieren. 

```python
#!/usr/bin/python

def make_flag(bit_pos):
   """ This function creates a flag by setting a single bit inside a value.
   Ex1: MKFLAG(0) ---> 0000 0000 0000 0000 0000 0000 0000 0001 
   Ex1: MKFLAG(1) ---> 0000 0000 0000 0000 0000 0000 0000 0010 
   where bit_pos is the start position of the bit starting with bit 0."""
   return 1 << bit_pos

def extract_bit(bit_pos, bit_field):
   """ Extract specified number of bits from given value.
   bit_pos position of bit to get (starting with bit 0)
   bit_field bitfield from which to extract bits"""
   return bit_field & make_flag(bit_pos)


if __name__ == '__main__':
   hamming = 0
   for i in range(31,-1,-1):
       print("make_flag(", i, ") is ", make_flag(i))

       b1 = 7 & make_flag(i)
       b2 = 15 & make_flag(i)
       hamming += not(b1==b2)

   print("hamming distance ", hamming)

#>hamming distance  1
```

## Kleinstes gemeinsames Vielfaches



## Primzahlen

Primzahlen sind schon seit der Antike bekannt, z.B. bei Euklid und Eratosthenes. Schon diese erkannten zahlreiche mathematische Eigenschaften rund um Primzahlen. In der Informatik besitzen Primzahlen vor allem in der Kryptographie hohe Bedeutung. 

Definition: Eine Primzahl ist eine natürliche Zahl, die genau zwei unterschiedliche Teiler hat: Die Zahl 1 und sich selbst. 

Dadurch ist z.B. die 1 keine Primzahl (da sie nicht zwei unterschiedliche Teiler hat).

Ein einfacher Algorithmus zum Finden von Primzahlen ist z.B. der sogenannte *Sieb des Eratosthenes*.

## Primfaktorzerlegung



## Shannon

Stelle dir vor, die Apollo13 wolle die wichtige Nachricht "Houston, we've had a problem here" zur Erde senden. Der Code dafür lautet z.B. 

1110101....

Aufgrund kosmischer Strahlung kam aber folgender Code auf der Erde an:

1010101...

Dieser Code bedeutet aber "Houston, we have a problem". Diese fehlerhafte Übertragung würde also nur Stress und zu Herzinfarkten führen. Um das zu verhindern könnte man z.B. 00 anstelle von 0 und 11 anstelle von 1 übertragen. 

11 11 11 00 11 00 11 ....

Jezt passiert der gleiche Fehler nochmals und wir erhalten:

10 11 11 00 11 00 11 ...

Da nur 11 oder 00 gültige Codes sind, weiss man jetzt, dass in der Übertragung irgendetwas schief gelaufen ist. Nur was? Startet die Nachricht jetzt mit 11 oder mit 00? Auch das kann man lösen, indem man den Code nochmals um ein Bit erweitert. Also:

111 111 111 000 111 000 111 ...

Und aufgrund kosmischer Strahlung erhalten wir:

101 111 111 000 111 000 111 ...

Jetzt kann man mit hoher Wahrscheinlichkeit davon ausgehen, dass anstelle von 101 eben 111 gemeint ist und die ursprüngliche Nachricht "Houston, we've had a problem here" wiederherstellen. 

Man kann die Gewissheit jetzt nochmals erhöhen, indem man nochmals ein zusätzliches Bit pro Codewort spendiert. 

Allerdings hat das Ganze einen (in der Praxis oft nicht zu vernachlässigenden) Nachteil: Die Übertragung dauert umso länger, je länger die Nachricht ist, d.h. umso 'sicherer' die Übertragung sein soll (und damit je länger die Nachricht), umso langsamer die Übertragung. 

Die Idee und Theorie hinter diesem 'Error Correction Code' und praktisch fast alles aus der Informationstheorie kommt von Claude Shannon's Arbeit von 1948 mit dem Titel "A Mathematical Theory of Communication." [4].

Aber einfach nur zusätzliche Bits zur Nachricht hinzuzufügen, um Nachrichten abzusichern, ist sicherlich nicht die optimale Lösung. Und damit kommt Hamming ins Spiel. Er hatte eine bessere (bzw. optimierte) Idee. Siehe unter *Hamming*.

## Sieb des Eratosthenes 

Um Primzahlen zu finden, kann man das sogenannte Sie des Eratosthenes durchführen. 

Zuerst wird die Zahl 1 gestrichen. Die Zahl 2 wird umkreist und dann alle Vielfachen von ihr gestrichen. Dann wird die nach der 2 nächste nicht gestrichene Zahl, die 3, umkreist und alle Vielfachen von ihr gestrichen. Jetzt wird die nach der 3 nächste freie Zahl umkreist (die 5) und ihre Vielfachen gestrichen usw. 

Alle Zahlen, die 'umkreist' wurden, sind Primzahlen. 

## Literatur

[1] Fermats letzter Satz: Die abenteuerliche Geschichte eines mathematischen Rätsels, Simon Singh, 2000

[2] Gödel, Escher, Bach - ein Endlos Geflochtenes Band, Douglas Hofstadter, 2019

[3] How not to be wrong, Jordan Ellenberg, 2014

[4] A Mathematical Theory of Communication, Claude Shannon, 1948

[5] Die Zahl, die aus der Kälte kam, Rudolf Taschner, 2013










