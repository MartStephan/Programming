# TypeScript

[TOC]

Table of Contents
=================

* [TypeScript](#typescript)
* [Table of Contents](#table-of-contents)
  * [Installation](#installation)
    * [Node.js](#node-js)
    * [TypeScript Compiler](#typescript-compiler)
  * [Kernkonzepte](#kernkonzepte)
    * [Features](#features)
    * [Prinzipien](#prinzipien)
    * [Hello World](#hello-world)
  * [Literatur](#literatur)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Installation

TypeScript ist ein typisiertes Superset von JavaScript. TypeScript kompiliert direkt nach JavaScript. 

### Node.js

Um den Compiler zu installieren habe ich mir node.js installiert. node.js beinhaltet den Paket Manager npm. Unter Windows mache ich es mir einfach und installiere node.js via Windows Installer. 

- Go to the [Node.js download page](https://nodejs.org/en/download/).
- Download the suitable Node.js version for your platform such as Windows, macOS, or Linux.
- Execute the downloaded Node.js package or execution file. The installation is quite straightforward.
- Verify the installation by opening the Terminal on macOS and Linux or the Command Prompt on Windows and typing the command `node -v`, you should see the installed version of Node.js.

```bash
node -v
v22.14.0
```

### TypeScript Compiler

Danach den TypeScript Compiler installieren mit dem Paket Manager npm. Danach überprüfe, ob der Compiler installiert wurde. 

```bash
npm install -g typescript 

changed 1 package in 6s
npm notice
npm notice New major version of npm available! 10.9.2 -> 11.2.0
npm notice Changelog: https://github.com/npm/cli/releases/tag/v11.2.0
npm notice To update run: npm install -g npm@11.2.0
npm notice

tsc --v
Version 5.8.2
```

### tsx Modul

If you want to run TypeScript code directly on Node.js without precompiling, you can use the tsx Modul.

```

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

//>> compile the "Hello, World" application  by typing:
//>> tsc.cmd hello.ts
//>> (or just by typing tsc hello.ts)

//>> You'll see a new file hello.js which you can run using node
//>> node hello.js

//>> Hello, World!
```

Note: If you installed the *tsx* module you can just use one command  to run the TypeScript file directly on Node.js.

```bash
tsx hello.ts
```

## Literatur  

[1] https://www.npmjs.com/, abgerufen am 25.07.2024

[2] https://nodejs.org/en/download/prebuilt-installer, abgerufen am 25.07.2024

[3] https://www.typescripttutorial.net/typescript-tutorial/what-is-typescript/, abgerufen am 30.03.2025
