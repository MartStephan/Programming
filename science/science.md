# Science

[TOC]

Table of Contents
=================

* [Science](#science)
  * [Euklidischer Algorithmus](#euklidischer-algorithmus)
  * [Fibonacci-Folge](#fibonacci\-folge)
  * [Graphentheorie](#graphentheorie)
  * [Größter gemeinsamer Teiler](#gr%C3%B6%C3%9Fter-gemeinsamer-teiler)
  * [Hamming](#hamming)
  * [Integral- und Differentialrechnung](#integral\-und\-differentialrechnung)
  * [Kleinstes gemeinsames Vielfaches](#kleinstes-gemeinsames-vielfaches)
  * [Komprimierung](#komprimierung)  
  * [Primzahlen](#primzahlen)
  * [Primfaktorzerlegung](#primfaktorzerlegung)
  * [Shannon](#shannon)
  * [Sieb des Eratosthenes](#sieb-des-eratosthenes)
  * [Statistik und Wahrscheinlichkeitstheorie](#statistik-und-wahrscheinlichkeitstheorie)
    * [Zufallsexperiment, Ereignis, Häufigkeit, Laplace\-Experiment](#zufallsexperiment-ereignis-h%C3%A4ufigkeit-laplace-experiment)
    * [Wahrscheinlichkeit](#wahrscheinlichkeit)
      * [Additionsregel](#additionsregel)
    * [Bedingte Wahrscheinlichkeit](#bedingte-wahrscheinlichkeit)
      * [Multiplikationssatz](#multiplikationssatz)
      * [Bayes](#bayes)
  * [Kombinatorik](#kombinatorik)
      * [Permutationen](#permutationen)
      * [Kombinationen](#kombinationen)
  * [Verschlüsselung](#verschl%C3%BCsselung)
    * [Symmetrische Verschlüsselung](#symmetrische-verschl%C3%BCsselung)
    * [Asymmetrische Verschlüsselung](#asymmetrische-verschl%C3%BCsselung)
    * [Hash\-Funktionen](#hash-funktionen)
    * [Zertifikate, Signaturen und Co\.](#zertifikate-signaturen-und-co)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Euklidischer Algorithmus 

Mit dem Euklidischen Algorithmus lässt sich der *größte gemeinsame Teiler* zweier natürlicher Zahlen berechnen. 

## Fibonacci-Folge

Die Fibonacci-Folge ist eine Folge von Zahlen, in der jede Zahl außer der ersten und der zweiten die Summe ihrer beiden Vorgänger ist. 

```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
```

Man kann folgende Formel verwenden, um den Wert jeder beliebigen Fibonacci-Zahl n in der Reihe zu erhalten.
$$
fib(n)=fib(n-1)+fib(n-2)
$$
Die Fibonacci-Folge eignet sich hervorragend für einen rekursiven Ansatz. Allerdings ist dieser Ansatz nicht der effizienteste. Eine automatische Memoisation schafft hier Abhilfe. Wie der Python-Code unten schön veranschaulicht. 

```python
#!/usr/bin/python

# see https://gertingold.github.io/pythonnawi/profiling.html on how to measure runtime

import time
from typing import Dict

# returns the n-th-fibonacci number whereas n is the parameter starting with 0 
def fib(n: int) -> int:
    if n < 2:
        # Abbruchbedingung
        return n

    # Rekursion
    return fib(n-2) + fib(n-1)

# this is our Memoisation dictionary already containg Fibonacci numbers for 0 and 1 
memo: Dict[int, int] = {0: 0, 1: 1}
def fibmemo(n: int) -> int:
    if n not in memo:
        memo[n] = fibmemo(n-2) + fibmemo(n-1)
    return memo[n]

if __name__ == '__main__':
    print("Hello World")

    start = time.time()
    print(fib(0))
    print(fib(25))
    end = time.time()
    print('{:5.4f}s'.format(end-start))

    start = time.time()
    print(fibmemo(0))
    print(fibmemo(25))
    end = time.time()
    print('{:5.4f}s'.format(end-start))

#>> Hello World
#>> 0
#>> 75025  
#>> 0.0211s
#>> 0
#>> 75025
#>> 0.0040s
```

## Graphentheorie

Aus []: "Ein Graph ist ein abstraktes mathematisches Konstrukt, das zur Modellierung eines praktischem Problems verwendet wird, indem das Problem in eine Menge verknüpfter Knoten unterteilt wird. Eine Verbindung zwischen einem Knoten (Englisch vertex) und dem nächsten wird Kante (Englisch edge) genannt." 

Die Graphentheorie ermöglicht es uns Such- und Optimierungsverfahren performant anzuwenden, z.B. ist das "Haus vom Nikolaus" ein Graphenproblem. Ein frühes bekanntes Beispiel ist das 

[Königsberger Brückenproblem]: https://www.spektrum.de/lexikon/mathematik/die-wurzeln-der-graphentheorie/9636

, welches Leonhard Euler 1736 gelöst hat. 

Euler konnte beweisen, dass man genau dann alle Kanten eines Graphen exakt einmal ablaufen kann, wenn jeder Knoten bloß eine gerade Anzahl von Verbindungen besitzt - oder wenn es genau zwei Knoten mit ungeraden Verbindungen gibt. Falls Letzteres gilt, ist der eine Knoten der Start- und der andere der Endpunkt der Route. 

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

## Integral- und Differentialrechnung

Isaac Newton und Gottfried Wilhelm Leibniz kamen zwischen 1660 und 1690 unabhängig voneinander auf die gleiche bahnbrechende Idee. Sie hatten ein neues Gebiet der Mathematik erfunden: Die Integral- und Differentialrechnung. Sie konnten berechnen, wie schnell sich etwas verändert (Differentialrechnung) und wie viel sich nach einer gewissen Zeit verändert hat (Integralrechnung). 

## Kleinstes gemeinsames Vielfaches





## Komprimierung



## Primzahlen

Primzahlen sind schon seit der Antike bekannt, z.B. bei Euklid und Eratosthenes. Schon diese erkannten zahlreiche mathematische Eigenschaften rund um Primzahlen. In der Informatik besitzen Primzahlen vor allem in der Kryptographie hohe Bedeutung. 

Definition: Eine Primzahl ist eine natürliche Zahl, die genau zwei unterschiedliche Teiler hat: Die Zahl 1 und sich selbst. 

Dadurch ist z.B. die 1 keine Primzahl (da sie nicht zwei unterschiedliche Teiler hat).

Ein einfacher Algorithmus zum Finden von Primzahlen ist z.B. der sogenannte *Sieb des Eratosthenes*.

## Primfaktorzerlegung

Mit Hilfe der Primfaktorzerlegung lassen sich sowohl das *kleinste gemeinsame Vielfache* als auch der *größte gemeinsame Teiler*  berechnen. 

Beispiel mit den Zahlen 12 und 18. 

kgv(12,18) = 36

ggt(12,18) = 6

| Zahl | Primfaktor 1 | Primfaktor 2 | Primfaktor 3 | Primfaktor 4 |
| ---- | ------------ | ------------ | ------------ | ------------ |
| 12   | 2            | 2            | 3            | -            |
| 18   | 2            | -            | 3            | 3            |

Regeln: 

1. Führe für jede Zahl eine Primfaktorzerlegung durch. Schreibe die Primfaktoren wie oben gezeigt in eine Tabelle. Identische Primfaktoren werden dabei untereinander geschrieben. Falls kein identischer Primfaktor mehr vorhanden ist, bleibt die Zelle frei. 

2. kgv(): Nimm jeweils exakt einen Primfaktor aus jeder Spalte und multipliziere diese. Hier: 2 * 2 * 3 * 3 = 36
3. ggt(): Nimm jeweils exakt einen Primfaktor aus jeder Spalte, in der Primfaktoren für beide Zahlen vorhanden sind und multipliziere diese. Hier: 2 * 3 = 6.

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

## Statistik und Wahrscheinlichkeitstheorie

Wahrscheinlichkeitstheorie und Statistik werden oft gleichbedeutend benutzt. Wobei die Statistik die angewandte Version der Wahrscheinlichkeitsrechnung ist. Blaire Pascal und Pierre de Fermat waren die Ersten, die sich intensiver mit Wahrscheinlichkeiten auseinandersetzten. 

Später war Bernoulli der Erste, der versuchte, eine Wahrscheinlichkeit zu berechnen, ohne alle möglichen Resultate zu kennen. 

Aus den Ideen des Mathematikers Abraham de Moivre ergaben sich die Experimente mit dem Münzwurf. 

Der Mathematiker Thomas Simpson wiederum wartete mit einer neuen Idee auf: Auf die Wahrscheinlichkeit, dass das Ergebnis eines wissenschaftlichen Experiments nicht stimmt. 

Darauf aufbauend wiederum entwickelte Thomas Bayes weitere Ideen. Heutzutage auch als Bayes-Regel bekannt. Bayes konnte plötzlich mit Wahrscheinlichkeiten rechnen, ohne an eine bestimmte Einschätzung gebunden zu sein. 

### Zufallsexperiment, Ereignis, Häufigkeit, Laplace-Experiment

*Definition*

Die Menge aller möglichen (sich gegenseitig ausschließenden) Ergebnisse des Zufallsexperiments wird Ergebnismenge genannt und üblicherweise mit dem griechischen Buchstaben "Omega" bezeichnet.

Gegeben sind die Ereignisse A,B als Teilmengen von der Ergebnismenge:

- Das Ergebnis A **und** B entspricht dem Durchschnitt 

  - $$
    A \cap B
    $$

- Das Ergebnis A **oder** B entspricht der Vereinigung

  - $$
    A \cup B
    $$

### Wahrscheinlichkeit

Wir führen ein Zufallsexperiment *n-mal* nacheinander aus. Wenn jedes Ergebnis dabei gleich wahrscheinlich ist, nennt man das **Laplace-Experiment**. Tritt ein Ereignis *E* genau *k-mal* ein, so heißt *k* die **absolute Häufigkeit** und *k/n* die **relative Häufigkeit** des Ereignisses *E*. 
$$
P(E) = \frac{k}{n}
$$
mit k = Anzahl der für E **günstigen Fälle**; n = Anzahl der **möglichen Fälle**

- Beispiel: Die Wahrscheinlichkeit mit zwei Würfeln einen Pasch zu werfen ist 

$$
P(E) = \frac{6}{36} = \frac{1}{6}
$$
da die Anzahl der möglichen Ergebnisse 36 ist. Davon sind 6 Ergebnisse ein Pasch. 

#### Additionsregel

Für die Wahrscheinlichkeit eines Ereignisses wird die **Summenregel (Additionssatz)** angewandt.

Für zwei unvereinbare Ereignisse A und B ist die Wahrscheinlichkeit, dass das Ereignis "A" oder "B" eintritt, gleich der Summe der Wahrscheinlichkeiten von A und B. 
$$
P(A \cup B)=P(A)+P(B), falls A \cap B=0
$$

- Beispiel: Man wirft zwei Münzen. Wie hoch ist die Wahrscheinlichkeit, dass das Ergebnis ein Pasch ist (also entweider zweimal Zahl oder zweimal Wappen).


P(Zahl-Pasch) = 1/3; P(Wappen-Pasch) = 1/3; P(kein Pasch) = 1/3
$$
P(E) = \frac{1}{3} + \frac{1}{3} = \frac{2}{3}
$$
Für das gegenteilige Ereignis gilt:
$$
P(\overline{E})=1-P(E)
$$

- Beispiel: Wie hoch ist die Wahrscheinlichkeit, dass das Ergebnis kein Pasch ist?

$$
P(\overline{E})=1-\frac{2}{3}=\frac{1}{3}
$$

### Bedingte Wahrscheinlichkeit

#### Multiplikationssatz

*Bei mehrstufigen Zufallsexperimenten wird die **Produktregel (Multiplikationssatz)** angewandt.* 

Die Wahrscheinlichkeit eines Ergebnisses erhält man, indem man die Wahrscheinlichkeiten jedes eintretenden Ereignisses A und B miteinander multipliziert. Die Ereignisse A und B müssen statistisch unabhängig sein.
$$
P(A \cap B)=P(A)*P(B|A)
$$
- Beispiel: Wie hoch ist die Wahrscheinlichkeit, zweimal hintereinander mit einem Würfel eine '6' zu würfeln?

$$
P(A \cap B)=\frac{1}{6}*\frac{1}{6}=\frac{1}{36}
$$
*Beachte*: Bei Experimenten ohne Zurücklegen (z.B. beim Ziehen der Lottozahlen) ändern sich die Wahrscheinlichkeiten beim zweiten Zug.

#### Bayes



## Kombinatorik

#### Permutationen

Geg: n-Dinge

Ges: Anzahl z der möglichen Anordnungen

Anzahl der möglichen Reihenfolgen aller N-Dinge (*Permutationen*)
$$
z = n! = 1 * 2 * 3 ... n
$$

- Beispiel: In einer Urne befinden sich 6 Lose mit den Nummern von 1 bis 6. Wieviele mögliche Reihenfolgen gibt es, falls die Lose nacheinander ohne Zurücklegen gezogen werden?

$$
z = 6! = 720
$$

#### Kombinationen 

Anzahl der möglichen Gruppierungen von k Elementen aus n Dingen (*Kombinationen*)

- mit Wiederholung, mit Berücksichtigung der Reihenfolge

$$
n^k
$$

- Beispiel: Wir haben zwei Ziffern 0 und 1. Wieviele Kombinationen 4. Ordnung sind möglich (also 0000, 0001, 00010, 0011, ...)?

$$
n^k=2^4=16
$$



- mit Wiederholung, ohne Berücksichtigung der Reihenfolge

$$
\binom{n+k-1}{k}=\frac{(n+k-1)(n+k-2)...(n+1)n}{1*2...k}
$$

- ohne Wiederholung, mit Berücksichtigung der Reihenfolge

$$
n*(n-1)*(n-2)...(n-k+1)=\frac{n!}{(n-k)!}
$$

- ohne Wiederholung, ohne Berücksichtigung der Reihenfolge

$$
\binom{n}{k}=\frac{n!}{k!(n-k)!}
$$

## Verschlüsselung

Oder in anderen Worten: Kryptographie. Kryptographie setzt sich aus den beiden altgriechischen Wörtern *kryptos* und *graphein* zusammen. Diese bedeuten *geheim* und *schreiben*.

Als schlechter Stil der Verschlüsselung gilt, den Verschlüsselungsalgorithmus geheimzuhalten. Besser ist es, auf den französischen Mathematiker Auguste Kerckhoff zu hören, der bereits Ende des 19. Jahrhunderts folgendes formulierte: Die Sicherheit eines Kryptosystems soll nur von der Geheimhaltung des Schlüssels, nicht jedoch von der des Algorithmus abhängen. Das ist das sogenannte *Kerckhoffs' Prinzip*.

### Symmetrische Verschlüsselung

Bei symmetrischen Verschlüsselungsverfahren wird für die Ver- und Entschlüsselung einer Nachricht derselbe Schlüssel verwendet. Ein sehr einfaches Beispiel wäre z.B. jeden Buchstaben des Klartextes durch einen Buchstaben zu ersetzen, der 13 Positionen danach folgt. Diese Art von Verschlüsseling wird auch Caesar-Verschlüsselung genannt.

Sicherer ist ein Schlüssel, der wie ein Passwort aufgebaut ist, d.h. aus beliebigen Zeichen in einer willkürlichen Reihenfolge. Noch sicherer wird es, indem man lange Schlüssel benutzt. Als sicher gilt ein zufälliger Schlüssel, dessen Länge der Nachrichtenlänge entspricht und der nur ein einziges Mal verwendet wird. In der Praxis nennt man solche Schlüssel *One-Time-Pads*. 

Es gilt dann nur noch das Problem zu lösen, wie der Schlüssel zum Empfänger transportiert wird. 

Ein simples Beispiel für einen Schlüssel aus beliebigen Zeichen in einer willkürlichen Reihenfolge kann mittels *XOR* demonstriert werden.

```python
#!/usr/bin/python

""" Example of a One-Time-Pad Cryptograhie """

import string
from secrets import token_bytes
from typing import Tuple

def random_key(length: int) -> int:
   # generate a random number with length 'length' by using 'token_bytes' from secrets
   random_bytestring: bytes = token_bytes(length)
   # this works as an int in Python can have any (arbitrary) length
   return int.from_bytes(random_bytestring, "big")

def encrypt_xor(message: str) -> Tuple[int, int]:
   """ One-Time-Pad encryption
   Returns the key and the encrypted message """
   # encode string as UTF-8 bytes object
   message_bytes: bytes = message.encode()
   key: int = random_key(len(message_bytes))
   message_ints: int = int.from_bytes(message_bytes, "big")
   # encrypt using XOR with key and message
   encrypted: int = message_ints ^ key 
   return key, encrypted

def decrypt_xor(key1: int, key2: int) -> str:
   """ One-Time-Pad decryption using XOR"""
   decrypted: int = key1 ^ key2
   bytestream: bytes = decrypted.to_bytes((decrypted.bit_length()+7) // 8, "big")
   # decode UTF-8 bytes back to a string
   return bytestream.decode()

def rot_13(message: str):
   """ This function replaces each letter in the input by 
   the letter 13 positions after it in the alphabet.
   This is a symmetric encryption and an example for a
   Caesar cipher. """
   result = ""
   for char in message:
      # ASCII table: 65: A ... 90: Z - 97: a ... 122: z
      if 65 <= ord(char) <= 90 or 97 <= ord(char) <= 122:
         # capitalized letters
         if 65 <= ord(char) <= 90:
            if ord(char) + 13 > 90:
               char = chr(ord(char) + 13 - 90 + 65 - 1)
            else:
               char = chr(ord(char) + 13)
         # lowercase letters
         else:
            if ord(char) + 13 > 122:
               char = chr(ord(char) + 13 - 122 + 97 - 1)
            else:
               char = chr(ord(char) + 13)
      else:
         pass

      result += char

   return result


if __name__ == '__main__':
   # chiffre - rotate-by-13
   enc = rot_13("hello")
   print("rot_13(hello) is ", enc)

   # chiffre - encrypt with one-time-pad using XOR
   key1, key2 = encrypt_xor("One Time Pad!")
   print("key:     ", key1)
   print("message: ", key2)

   # chiffre - decrypt using XOR
   msg: str = decrypt_xor(key1, key2)
   print("Message: ", msg)

#> rot_13(hello) is  uryyb
#> key:      16791963154501998582585035768554
#> message:  12409003956335922730723896174283
#> Message:  One Time Pad!
```

Ein heutiger de-facto Standard für eine symmetrische Verschlüsselung ist der sogenannte AES-Algorithmus in den Varianten AES-128, AES-192 und AES-256.

### Asymmetrische Verschlüsselung

Die Grundlagen für asymmetrische Verschlüsselungsverfahren wurden erst in der zweiten Hälfte der 1970er Jahre publiziert [10]. Asymmetrische Verschlüsselung beruht darauf, dass die Nachrichten mit einem Schlüssel verschlüsselt und mit einem anderen Schlüssel entschlüsselt werden. Dabei lässt sich allerdings der inverse Schlüssel nicht auf praktische Weise aus dem anderen berechnen. 

In der Praxis spricht man dabei oft von einem *Private-Key* und einem *Public-Key*. 

Und hier kommt die Mathematik ins Spiel. Mathematisch liegt der asymmetrischen Verschlüsselung nämlich zugrunde, dass es Funktionen gibt, deren Umkehrfunktion vergleichsweise viel Rechenaufwand erfordert. Zum Beispiel ist es verhältnismäßig einfach, das Produkt zweier großer *Primzahlen* zu errechnen, aber deutlich aufwändiger, die beiden Faktoren allein anhand des Produkts zu finden.

Ein bekannter asymmetrischer Algorithmus ist zum Beispiel der RSA-Algorithmus. Er kommt heutzutage allerdings in der Praxis nicht mehr sehr häufig vor. Primär werden heutzutage Verschlüsselungen auf Basis elliptischer Kurven verwendet. 

### Hash-Funktionen

Ein Problem, das alle Verschlüsselungen haben: Wie ist sichergestellt, dass die eigentliche, verschlüsselte, Nachricht nicht manipuliert wurde? Dafür werden sogenannte *Hash-Funktionen* benutzt. Es wird also zusätzlich zur (verschlüsselten) Nachricht auch noch ein *Hash-Wert* beim Sender berechnet. Dieser wird mitübertragen und der Empfänger kann diesen *Hash-Wert* neu berechnen und mit dem übertragenen vergleichen.

Man findet heutzutage im Wesentlichen zwei *Hash-Verfahren*: Zum einen die *Message-Digest-Varianten (MD)*; zum anderen die *Secure-Hash-Algorithmen (SHA)*. Die MD-Varianten gelten heutzutage als unsicher. Weswegen man auf *SHA256*, *SHA512* oder *SHA3* zurückgreifen sollte. 

Und es geht noch weiter: Wie kann man sicherstellen, dass der *Hash-Wert* nicht manipuliert wurde? Dafür gibt es den sogenannten *Message Authentication Code (MAC)*. Ein *MAC* ist im Prinzip ein *Hash-Wert* zusammen mit einem geheimen Schlüssel. Dieser geheime Schlüssel (*shared key*) muss beiden Kommunikationspartnern bekannt sein. Dadurch kann sichergestellt werden, dass der *MAC* nicht manipuliert wurde.

### Zertifikate, Signaturen und Co.

Bleibt noch die Frage, wie das alles im Internet funktioniert: Zum einen muß die Übertragung verschlüsselt übertragen werden. Zum anderen muß man als Client sicherstellen können, dass man mit dem richtigen Sender (Server) kommuniziert. 

Die Verschlüsselung erfolgt heutzutage über eine symmetrische Verschlüsselung, üblicherweise *TLS/SSL*, welches dann über *http* getunnelt wird - das sogenannte *https*. Für den initialen Schlüsselaustausch wird ein Ad-hoc Schlüssel generiert, z.B. mit dem *Diffie-Hellman Key Exchange* Vefahren.

Die Authentifizierung des Servers ist hingegen etwas aufwändiger. Die Grundidee ist, dass der Server mit Hilfe asymmetrischer Verschlüsselung nachweisen kann, daß er es tatsächlich ist. Dazu besitzt er den privaten Schlüssel. Clients können sich den öffentlichen Schlüssel dazu besorgen. Der öffentlich Schlüssel wird um weitere Daten ergänzt - damit erhält man ein sogenanntes *Zertifikat*. 

Der Server verschlüsselt also seine Nachricht mit seinem privaten Schlüssel. Jeder, der den öffentlichen Schlüssel besitzt, kann die Nachricht des Servers wieder entschlüsseln. Die Idee dahinter ist, dass man bei Nachrichten, die man entschlüsseln kann, sichergehen kann, dass diese vom korrekten Server verschlüsselt wurden. Nur dieser besitzt nämlich den privaten Schlüssel - das ist die sogenannte *digitale Signatur*.

Wie kann man jetzt der *digitalen Signatur* trauen? Auch dafür gibt es wieder Zertifikate. Und zwar von vertrauenswürdigen Instanzen - den sogenannten *Certificate Authorities (CA)*. Am Ende der Kette stehen die sogenannten *Root-CA-Zertifikate*. Und diese werden tatsächlich direkt von den Betriebssystemherstellern bzw. Browser-Herstellern mitgeliefert. Fini.

## Literatur

[1] Fermats letzter Satz: Die abenteuerliche Geschichte eines mathematischen Rätsels, Simon Singh, 2000

[2] Gödel, Escher, Bach - ein Endlos Geflochtenes Band, Douglas Hofstadter, 2019

[3] How not to be wrong, Jordan Ellenberg, 2014

[4] A Mathematical Theory of Communication, Claude Shannon, 1948

[5] Die Zahl, die aus der Kälte kam, Rudolf Taschner, 2013

[6] Weizenbaum J., Die Macht der Computer und die Ohnmacht der Vernunft. Suhrkamp, Frankfurt am Main, 1977

[7] Statistische Methoden und ihre Anwendungen, Erwin Kreyszig, 1991

[8] Algorithmen in Python, David Kopec, 2020

[9] Mathematik für Informatiker, Band 2, Analysis und Statistik, Gerald Teschl, Susanne Teschl, 2014

[10] The Code Book. The Secret History of Codes and Codebreaking, Simon Singh, 2000

[11] Was man über Kryptografie wissen sollte, https://www.heise.de/developer/artikel/Was-man-ueber-Kryptografie-wissen-sollte-5001908.html, abgerufen am 26.01.2021

[12] The Missing Semester of Your CS Semester, https://missing.csail.mit.edu/, abgerufen am 05.02.2021

[13] SHA256 algorithm, https://sha256algorithm.com/, abgerufen am 07.02.2022

[14] Das unmögliche Haus vom Nikolaus, Manon Bischoff, https://www.spektrum.de/kolumne/graphentheorie-die-mathematik-hinter-dem-haus-vom-nikolaus/2081799, abgerufen am 13.12.2022

