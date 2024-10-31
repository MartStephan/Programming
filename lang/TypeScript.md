# TypeScript

[TOC]

Table of Contents
=================

* [TypeScript](#typescript)
* [Table of Contents](#table-of-contents)
  * [Installation](#installation)
  * [Kernkonzepte](#kernkonzepte)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Installation

TypeScript ist ein typisiertes Superset von JavaScript. TypeScript kompiliert direkt nach JavaScript. 

Um den Compiler zu installieren habe ich mir node.js installiert. node.js beinhaltet den Paket Manager npm. Unter Windows mache ich es mir einfach und installiere node.js via Windows Installer [2]. 

Danach den TypeScript Compiler installieren mit dem Paket Manager npm. Danach überprüfe, ob der Compiler installiert wurde. 

```bash
> C:\Users\Martin>npm --version
10.8.1

> C:\Users\Martin>npm install -g typescript
...

> C:\Users\Martin>tsc --version
Version 5.5.4
```

## Kernkonzepte

### Features

TypeScript is a statically typed superset of JavaScript that adds various features like: Static Typing, Type Annotations, Type Inference, Interfaces, Classes and Inheritance, Modules, Namespaces, Generics, Enums, Type Aliases, Union and Intersection Types, Tuples.

### Prinzipien



```

```

### Hello World

```typescript
let message: string = 'Hello, World!';

console.log(message);

//>> tsc.cmd hello.ts
//>> node .\hello.js
//>> Hello, World!
```



## Literatur  

[1] https://www.npmjs.com/, abgerufen am 25.07.2024

[2] https://nodejs.org/en/download/prebuilt-installer, abgerufen am 25.07.2024
