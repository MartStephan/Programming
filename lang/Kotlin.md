# Kotlin

[TOC]

Table of Contents
=================

* [Kotlin](#kotlin)
* [Table of Contents](#table-of-contents)
  * [Overview](#overview)
  * [Features](#features)
    * [Entwicklungswerkzeuge](#entwicklungswerkzeuge)
    * [Hello World](#hello-world)
    * [Basics I](#basics-i)
    * [Basics II](#basics-ii)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Overview

Kotlin is an open source, cross-platform, statically typed,  general-purpose programming language with type inference that is fully  interoperable with Java. Currently there is the Kotlin Foundation taking care of the language. 

## Features

-  	Cross-platform 
-  	Java interoperable
-  	statically typed
-  	general purpose language
-  	type inference	
-  	Object Oriented
-  	Exception Handling
-  	Functional Programming (Lambdas, Higher Order Functions)

### Entwicklungswerkzeuge

| Build                    |                           |
| ------------------------ | ------------------------- |
| Gradle                   | Build-Management Werkzeug |
| Maven                    | Build-Management Werkzeug |
| **Entwicklungsumgebung** |                           |
| IntelliJ IDEA            |                           |
| Eclipse                  |                           |
| Android Studio           |                           |
| Command Line             |                           |
| **Quelltext-Werkzeuge**  |                           |
|                          |                           |
|                          |                           |
|                          |                           |
|                          |                           |
| **Programmanalyse**      |                           |
|                          |                           |
|                          |                           |
|                          |                           |



### Hello World

```kotlin
fun printHello () {
	println("Hello World")
}
 
printHello()
//> Hello World
```

### Basics I

**Documentation**

http://kotlinlang.org/docs/reference/

**Operators**

```kotlin
// use primitive 'int' as an object
1.toLong()

// or: put in a box
val boxed: Number = 1
```

Two types of variables: changeable and unchangeable. 

```kotlin
// Values are unchangeable
val aqua = 1
// aqua = 2 --> not allowed

// Variables are changeable 
var fish = 2
fish = 50
```

Kotlin uses a strong typechecking

```kotlin
// ok - literals are checked and 1 is Byte
val b: Byte = 1

// illegal as types are not matching
val i: Int = b // ERROR
// error: type mismatch: ...

// but you can cast and make it explicit
val i: Int = b.toInt()

```

Nullability

```kotlin
// a value cannot be null 
val rocks : Int = null // ERROR
// error: null cannot be a value ....

// but you can use the question mark operator to tell that it can be null
var color = null
var marbles : Int? = null
var numbers = listOf(null, null)
var list: List<Int?> = listOf(null, null)
```

Methods

```kotlin
2.plus(71).plus(233).minus(13).div(30).plus(1)
//> res8: kotlin.Int = 10
```

Elvis operator

```kotlin
println(nullTest?.inc() ?:0)
```

boolean operators

```kotlin
val i = 5
val j = 5
i == j
i != j
```

Conditions

```kotlin
// we have if..else and 
// ranges and 
// when - which is Kotlins way of switching
val fifty = 50
val thirty = 30

// if..else
if (fifty > thirty) println("Correct")
else 
	println("Wrong")

// ranges
if (fifty in 1..100) println(fifty)

// when
when (fifty) {
    0 -> println("empty")
    50 -> println("exactly")
    else -> println("forgetly")
}
```

**Strings**

```kotlin
// this is a string
"Hello"
// concatenate
"Hello" + "Martin"
// use a dollar variable ..
val money = 1000
"I have $money dollar"
```

### Basics II

**Main**

As in other languages there is a *main* function which is the entry point for execution. The main-function can have an array of strings as parameter. 

```kotlin
import java.util.*
import java.util.Calendar.DAY_OF_WEEK

fun main(args: Array<String>) {
    dayOfWeek()
}

fun dayOfWeek() {
    println("What day it is today?")
    val day = Calendar.getInstance().get(DAY_OF_WEEK)
    println(when(day) {
        1 -> "Sunday"
        2 -> "Monday"
        3 -> "Tuesday"
        4 -> "Wednesday"
        5 -> "Thursday"
        6 -> "Friday"
        7 -> "Saturday"
        else -> "OMG"
    })
}
```

**Arguments**

Einer Main-Funktion in Kotlin kann man ein String-Array übergeben. 

```kotlin
fun main(args: Array<String>) {
    val hour = args[0].toInt();
    if (hour < 12) println("Good morning") else println("Good night")
}
```

**Functions**

A function starts with *fun* and can have parameters and a return value. Like in other languages too.

```kotlin
import java.util.*

fun main(args: Array<String>) {
    val cookie = getFortuneCookie()
    println("$cookie")
}

fun getFortuneCookie() : String {
    val cookies = listOf("You will have a great day!",
        "Things will go well for you today.",
        "Enjoy a wonderful day of success.",
        "Be humble and all will turn out well.",
        "Take it easy and enjoy life!",
        "Treasure your friends, because they are your greatest fortune.")
    print("Enter the day of your birthday: ")
    val birthday = readLine()?.toIntOrNull() ?: 1
    println("$birthday")
    return cookies[birthday.rem(cookies.size)]
}
```

**for**

You can use the keyword *for* when implementing a loop.

```kotlin
import java.util.*

// the main function can have a string array as parameter
fun main(args: Array<String>) {
    for (i in 1..3) {
        val cookie = getFortuneCookie()
        println("$cookie")
    }
}

// a function starts with keyword 'fun' followed by function name
// the return type follows after a colon
fun getFortuneCookie() : String {
    val cookies = listOf("You will have a great day!",
        "Things will go well for you today.",
        "Enjoy a wonderful day of success.",
        "Be humble and all will turn out well.",
        "Take it easy and enjoy life!",
        "Treasure your friends, because they are your greatest fortune.")
    print("Enter the day of your birthday: ")
    val birthday = readLine()?.toIntOrNull() ?: 1
    println("$birthday")
    return cookies[birthday.rem(cookies.size)]
}
```

**when**

In Kotlin gibt es eine Alternative zu einem switch-Statement. Die *when*-Alternative ist dabei oft flexibler und ausdrucksstärker als das switch-Statement, wie man es von Java oder C++ kennt.

```kotlin
// the main function can have a string array as parameter
fun main() {
    for (i in 1..3) {
        val cookie = getFortuneCookie(getBirthday())
        println("$cookie")
    }
}

// a function starts with keyword 'fun' followed by function name
// the return type follows after a colon
fun getFortuneCookie(day: Int) : String {
    var res = "I'm sorry, nothing left"
    // look how to use the when-statement
    when (day) {
        28, 31 -> res = "Things will go well for you today."
        1, 3 -> res = "Enjoy a wonderful day of success."
        2, 5 -> res = "Be humble and all will turn out well."
        3, 6, 8 -> res = "Take it easy and enjoy life!"
        4 -> res = "Treasure your friends, because they are your greatest fortune."
        in 9..20 -> res = "Waiting..."
        else -> res = "Nothing to sell."
    }

    return res
}

fun getBirthday() : Int {
    // use the keyword 'val' for the declaration of a variable
    print("Enter the day of your birthday: ")
    val birthday =readLine()?.toIntOrNull() ?: 1
    return birthday
}

```

**Default Parameter**



## Literatur

[1] https://kotlin.christmas/, abgerufen am 17.12.2019

[2] Getting Started with IntelliJ IDEA, https://kotlinlang.org/docs/tutorials/getting-started.html, abgerufen am 17.12.2019

[3] Kotlin Bootcamp for Programmers, https://classroom.udacity.com/courses/ud9011, abgerufen am 05.02.2022

[4] Android Kotlin Fundamentals, https://developer.android.com/courses/kotlin-android-fundamentals/overview#prerequisites, abgerufen am 07.06.2021

