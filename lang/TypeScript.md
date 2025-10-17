# TypeScript

[TOC]

Table of Contents
=================

* [TypeScript](#typescript)
* [Table of Contents](#table-of-contents)
  * [Installation](#installation)
    * [Node.js](#node-js)
    * [TypeScript Compiler](#typescript-compiler)
    * [tsx Modul](#tsx-modul)
  * [Kernkonzepte](#kernkonzepte)
    * [Features](#features)
    * [Prinzipien](#prinzipien)
    * [Hello World](#hello-world)
  * [Cheat Sheet](#cheat-sheet)
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

tsc -v
Version 5.8.2
```

### tsx Modul

If you want to run TypeScript code directly on Node.js without precompiling, you can use the tsx Modul.

```

```



## Kernkonzepte

### Features

TypeScript is a statically typed superset of JavaScript that adds various features like: Static Typing, Type Annotations, Type Inference, Interfaces, Classes and Inheritance, Modules, Namespaces, Generics, Enums, Type Aliases, Union and Intersection Types, Tuples.

Sie wurde von Microsoft entwickelt. Die erste öffentlich verfügbar Version wurde 2012 von Microsoft in der Version 0.8 veröffentlicht. 2023 kam es dann zu TypeScript v5.0. Aktuelle Version (17.10.2025) ist 5.9. 

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

You can compile the TypeScript code using the *tsc* command and afterwards run the code using *node*. 

```shell
tsc hello.ts
node hello.js
```

Note: If you installed the *tsx* module you can just use one command  to run the TypeScript file directly on Node.js. To install the tsx module globally, run the following command from the Terminal. 

```shell
npm install -g tsx
```

Now run the *tsx* command directly on your TypeScript code. 

```bash
tsx hello.ts
```

## Cheat Sheet

### Grundlegende Typen und Operationen mit Typen

```typescript
// Einfaches Interface
interface Person {
    name: string;
    age: number;
    sayHello(): void;
}

const person: Person = {
    name: "Max",
    age: 30,
    sayHello() {
        console.log(`Hello, I'm ${this.name}`);
    }
};

// Deklarationen mergen
interface Animal {
    name: string;
}

interface Animal {
    age: number;
}
// Animal ist {name: string, age: number }

// Resulting type has both properties
const dog: Animal = {
    name: "Buddy",
    age: 5
};

// Globales Windows-Objekt durch Zusammenführen von Deklarationen erweitern
declare global {
    interface Window {
        customProperty: string;
        customMethod(): void;
    }
}

window.customProperty = "Hello";
window.customMethod = () => console.log("Custom method");

// Type Alias
type Point = {
    x: number;
    y: number;
};

type ID = string | number;

const point: Point = { x: 10, y: 20 };
const id: ID = "abc123";

// Generic Types
interface Container<T> {
    value: T;
    getData(): T;
}

const numberContainer: Container<number> = {
    value: 42,
    getData() { return this.value; }
};

// Variadic Tuple Type
type Numbers = [number, number];
type Strings = [string, string];
type Combined<T extends unknown[], U extends unknown[]> = [...T, ...U];

type CombinedTuple = Combined<Numbers, Strings>; // [number, number, string, string]

// Index Type
type PersonKeys = {
    [K: string]: string | number;
};

const person2: PersonKeys = {
    name: "John",
    age: 25,
    city: "Berlin"
};

// Type Query
const user = {
    id: 1,
    name: "Alice",
    role: "admin"
};

type User = typeof user;

// const Assertion
const config = {
    apiUrl: "https://api.example.com",
    timeout: 5000
} as const;

// Now properties are readonly and have literal types


// Index Type Query
interface Book {
    title: string;
    author: string;
    pages: number;
}

type BookProperties = keyof Book; // "title" | "author" | "pages"

// Union Type
type Status = "pending" | "approved" | "rejected";
type NumberOrString = number | string;

let status: Status = "pending";
let value: NumberOrString = "hello";
value = 42; // also valid

// Objekttypen mit Unions indexieren
type Animals = {
    dog: { bark(): void };
    cat: { meow(): void };
};

type AnimalSounds = Animals[keyof Animals]; // Union of all value types

// Objekttypen mit ihren eigenen Keys indexieren
interface Config {
    appName: string;
    port: number;
    debug: boolean;
}

type ConfigValue = Config[keyof Config]; // string | number | boolean

// Intersection Type
type HasName = { name: string };
type HasAge = { age: number };
type Person2 = HasName & HasAge;

const person3: Person2 = {
    name: "Emma",
    age: 28
};

// Union und Intersection Types kombinieren
type StringOrNumber = string | number;
type NumberAndBoolean = { num: number } & { flag: boolean };

type Combined = (StringOrNumber) & { id: string };
// Can be either { id: string, value: string } or { id: string, value: number }
```

### Type Guards und Type Assertions

```typescript
let message: string = 'Hello, World'

console.log(message);

// Type Guard
type House = {
    floorArea: number;
};

function isHouse(x: any): x is House {
    return x && x.floorArea === "number"; 
}

// Assertion Signatur
function assertHouse(x: any): asserts x is House {
    if (!x || x.floorArea !== "number") {
        throw new TypeError;
    }
}

// Discrimated Unions
type Car = {
    readonly type: "CAR";
    topSpeed: number;
}; 

type House2 = {
    readonly type: "HOUSE";
    floarArea: number;
}

const myThing: Car | House2 = getRandomThing();
if (myThing.type === "CAR") {
    // myThing ist eingegrenzt auf Car
} else {
    // myThing ist eingegrenzt auf House
}
```

### Typen für Funktionen

```typescript
// Generic Function
function identity<T>(arg: T): T {
    return arg;
}

// Usage
const num = identity<number>(42);
const str = identity("hello"); // Type inference works too

// Generic Function mit Bedingung im Typparameter
function getLength<T extends { length: number }>(arg: T): number {
    return arg.length;
}

// Usage
const len1 = getLength("hello");     // works with strings
const len2 = getLength([1, 2, 3]);   // works with arrays
const len3 = getLength({ length: 5, value: "test" }); // works with objects that have length
// const error = getLength(42);      // Error: number doesn't have length property

// Generic Variadic Function
function merge<T extends unknown[]>(...arrays: [...T]): T[number][] {
    return arrays.flat();
}

// Usage
const result = merge([1, 2], ["a", "b"], [true, false]);

// Funktionen mit Overload
function process(x: number): number;
function process(x: string): string;
function process(x: number | string): number | string {
    if (typeof x === "number") {
        return x * 2;
    } else {
        return x.toUpperCase();
    }
}

// Usage
const num = process(42);    // returns number
const str = process("hey"); // returns string

// Overloaded Function Type
type ProcessFn = {
    (x: number): number;
    (x: string): string;
};

const process: ProcessFn = (x: number | string): number | string => {
    if (typeof x === "number") {
        return x * 2;
    }
    return x.toUpperCase();
};

// Overloaded Function Type per Intersection Type 
type NumberProcessor = (x: number) => number;
type StringProcessor = (x: string) => string;

type CombinedProcessor = NumberProcessor & StringProcessor;

const process: CombinedProcessor = ((x: string | number) => {
    if (typeof x === "number") {
        return x * 2;
    }
    return x.toUpperCase();
}) as CombinedProcessor;

// Usage
console.log(process(42));    // 84
console.log(process("hey")); // "HEY"

```

### Eingebaute Utility Types

```typescript
// Parial< Type>
interface User {
    id: number;
    name: string;
    email: string;
}

// Makes all properties optional
type PartialUser = Partial<User>;

const updateUser: PartialUser = {
    name: "John" // Other properties are optional
};

// Required< Type>
interface Config {
    host?: string;
    port?: number;
    debug?: boolean;
}

// Makes all properties required
type RequiredConfig = Required<Config>;

const config: RequiredConfig = {
    host: "localhost",  // Must provide all properties
    port: 8080,
    debug: true
};

// Readonly< Type>
interface Point {
    x: number;
    y: number;
}

// Makes all properties read-only
type ReadonlyPoint = Readonly<Point>;

const point: ReadonlyPoint = { x: 10, y: 20 };
// point.x = 30; // Error: Cannot assign to 'x' because it is read-only

// Records<Keys,Type>
type UserRoles = "admin" | "user" | "guest";
type Permissions = {
    read: boolean;
    write: boolean;
};

// Creates an object type with specified keys and value type
type RolePermissions = Record<UserRoles, Permissions>;

const permissions: RolePermissions = {
    admin: { read: true, write: true },
    user: { read: true, write: false },
    guest: { read: true, write: false }
};

// Pick<Type, Key>
interface Article {
    id: number;
    title: string;
    content: string;
    author: string;
    createdAt: Date;
}

// Creates type with only selected properties
type ArticlePreview = Pick<Article, "title" | "author">;

const preview: ArticlePreview = {
    title: "TypeScript Tips",
    author: "John Doe"
};

// Omit<Type, Keys>
interface Product {
    id: number;
    name: string;
    price: number;
    stock: number;
    category: string;
}

// Creates type excluding specified properties
type ProductBasics = Omit<Product, "stock" | "category">;

const basicProduct: ProductBasics = {
    id: 1,
    name: "Laptop",
    price: 999
};

// Exclude<Type, Union>
type AllTypes = string | number | boolean | undefined;
type PrimitiveTypes = string | number | boolean;

// Removes types from Union
type NonPrimitives = Exclude<AllTypes, PrimitiveTypes>;
// Result is 'undefined'

// Extract<Type, Union>
type Status = "success" | "error" | "pending" | number;
type StringStatus = string;

// Extracts types that are assignable to Union
type OnlyStringStatuses = Extract<Status, string>;
// Result is "success" | "error" | "pending"

// NonNullable< Type>
type NullableString = string | null | undefined;

// Removes null and undefined from type
type DefiniteString = NonNullable<NullableString>;
// Result is string

// Parameters< FunctionType>
function greet(name: string, age: number): string {
    return `Hello ${name}, you are ${age} years old`;
}

// Gets parameter types as tuple
type GreetParams = Parameters<typeof greet>;
// Result is [string, number]

const params: GreetParams = ["John", 30];

// ReturnType< FunctionType>
function createUser(name: string, age: number) {
    return {
        id: Date.now(),
        name,
        age
    };
}

// Gets return type of function
type User = ReturnType<typeof createUser>;
// Result is { id: number, name: string, age: number }
```

### Mapped Types

```typescript
// Mapped Type: Basisversion
type StringMap = {
    [K in "id" | "name" | "description"]: string;
};

// Usage
const data: StringMap = {
    id: "123",
    name: "Product",
    description: "A product description"
};

// Mapped Type mit Keys aus einem anderen Objekt
interface Person {
    name: string;
    age: number;
    email: string;
}

type PersonFlags = {
    [K in keyof Person]: boolean;
};

// Usage
const flags: PersonFlags = {
    name: true,
    age: false,
    email: true
};

// Generic Mapped Type
type Optional<T> = {
    [K in keyof T]?: T[K];
};

interface User {
    id: number;
    name: string;
    email: string;
}

// Usage
const partialUser: Optional<User> = {
    name: "John"
    // Other fields are optional
};

// Generic Mapped Type mit zwei Typargumenten
type MapType<T, U> = {
    [K in keyof T]: U;
};

interface Employee {
    name: string;
    salary: number;
    department: string;
}

// Maps all properties to boolean
type EmployeeValidation = MapType<Employee, boolean>;

// Usage
const validation: EmployeeValidation = {
    name: true,
    salary: false,
    department: true
};

// Typen mit Mapped Types klonen und modifizieren
interface Config {
    readonly apiKey: string;
    baseUrl: string;
    timeout: number;
}

type Mutable<T> = {
    -readonly [K in keyof T]: T[K];
};

// Usage
const mutableConfig: Mutable<Config> = {
    apiKey: "123",    // No longer readonly
    baseUrl: "http://example.com",
    timeout: 5000
};

// Select Keys optional machen
interface Product {
    id: number;
    name: string;
    price: number;
    description: string;
}

type MakeOptional<T, K extends keyof T> = {
    [P in keyof T]: P extends K ? T[P] | undefined : T[P];
};

// Usage
type ProductWithOptionalDescription = MakeOptional<Product, "description">;

const product: ProductWithOptionalDescription = {
    id: 1,
    name: "Laptop",
    price: 999
    // description is optional
};
```

### Conditional Types und Recursive Types

```typescript
// Conditional Type
type IsString<T> = T extends string ? true : false;

// Usage
type A = IsString<string>;  // type A = true
type B = IsString<number>;  // type B = false

type MessageOf<T> = T extends { message: unknown } ? T["message"] : never;

// Usage
interface Email {
    message: string;
}
type EmailMessage = MessageOf<Email>;  // type EmailMessage = string

// Conditional Types mit Unions
type ToArray<T> = T extends any ? T[] : never;

// Usage
type StringOrNumberArray = ToArray<string | number>;
// Result: string[] | number[]

type Flatten<T> = T extends Array<infer U> ? U : T;
// Usage
type Flattened = Flatten<string[]>;  // type Flattened = string

// Conditional Types zum Filtern mit never verwenden
type NonNullable<T> = T extends null | undefined ? never : T;

// Usage
type Types = string | number | null | undefined;
type FilteredTypes = NonNullable<Types>;  // string | number

type StringsOnly<T> = T extends string ? T : never;
type OnlyStrings = StringsOnly<"a" | "b" | number | boolean>;  // "a" | "b"

// Sicherstellen, dass "Subtype" ein Subtype von "Supertype" ist
type AssertSubtype<Subtype, Supertype> = 
    Subtype extends Supertype ? Subtype : never;

interface Animal {
    name: string;
}

interface Dog extends Animal {
    breed: string;
}

// Usage
type ValidDog = AssertSubtype<Dog, Animal>;  // type ValidDog = Dog
type InvalidType = AssertSubtype<{ color: string }, Animal>;  // type InvalidType = never

// Rekursive Mapped Types mit Conditional Types 
type DeepReadonly<T> = {
    readonly [P in keyof T]: T[P] extends object 
        ? DeepReadonly<T[P]> 
        : T[P];
};

// Usage
interface NestedObject {
    name: string;
    settings: {
        enabled: boolean;
        config: {
            timeout: number;
        }
    }
}

type ReadonlyNested = DeepReadonly<NestedObject>;

// Typeinferenz in Conditional Types
type GetReturnType<T> = T extends (...args: any[]) => infer R ? R : never;

// Usage
function greeting() {
    return "Hello, World!";
}

type GreetingReturn = GetReturnType<typeof greeting>;  // string

type UnpackArray<T> = T extends Array<infer U> ? U : T;

// Usage
type ItemType = UnpackArray<string[]>;  // string
type NonArray = UnpackArray<number>;    // number
```

### Advanced Utilities 

```typescript
// Eine bestimmte Objektform verlangen
type RequireShape<T, Shape> = T extends Shape 
    ? T 
    : never;

interface BaseShape {
    width: number;
    height: number;
}

// Usage
type Rectangle = RequireShape<
    { width: number; height: number; color: string },
    BaseShape
>;  // Valid type

type Invalid = RequireShape<
    { width: number; color: string },
    BaseShape
>;  // never

// Union zu Intersection
type UnionToIntersection<U> = 
    (U extends any ? (k: U) => void : never) extends 
    ((k: infer I) => void) ? I : never;
// So funktionierts
// Die Kombination von zwei scheinbar nutzlosen Conditionals kann eine Union in eine
// Intersection überführen, indem zunächst jedes Mitglied der Union in das Argument eines
// Funktionstypes gewickelt wird und dann dieses Argument abgeleitet wird. Das erste
// Conditional stellt sicher, dass jedes Mitglied der Union einzeln verpackt wird (Distributive 
// Conditional Types), während das zweite Conditional einen Typ aus einer kontravarianten 
// Position ableitet, was im Typsystem von TypeScript einen Intersection Type ergibt. 

// Usage
type Union = { a: string } | { b: number };
type Intersection = UnionToIntersection<Union>;
// Result: { a: string } & { b: number }

const example: Intersection = {
    a: "hello",
    b: 42
};

// Union aus Keys basierend auf einem Objekt eines bestimmten Typs
type KeysOfType<T, ValueType> = {
    [K in keyof T]: T[K] extends ValueType ? K : never
}[keyof T];

interface Mixed {
    name: string;
    age: number;
    isActive: boolean;
    tags: string[];
}

// Usage
type StringKeys = KeysOfType<Mixed, string>;     // "name"
type ArrayKeys = KeysOfType<Mixed, Array<any>>;  // "tags"

// Tuple aus Union
type UnionToTuple<T> = 
    [T] extends [never] 
        ? [] 
        : [...UnionToTuple<Exclude<T, GetUnionLast<T>>>, GetUnionLast<T>];

type GetUnionLast<T> = 
    UnionToIntersection<
        T extends any 
            ? (x: T) => T 
            : never
    > extends (x: infer R) => any 
        ? R 
        : never;

// Usage
type StringNumberBool = string | number | boolean;
type TupleType = UnionToTuple<StringNumberBool>;
// Result is equivalent to [string, number, boolean]

const tuple: TupleType = ["hello", 42, true];
```

## Literatur

[1] https://www.npmjs.com/, abgerufen am 25.07.2024

[2] https://nodejs.org/en/download/prebuilt-installer, abgerufen am 25.07.2024

[3] https://www.typescripttutorial.net/typescript-tutorial/what-is-typescript/, abgerufen am 30.03.2025

[4] https://www.typescripttutorial.net/typescript-tutorial/setup-typescript/, abgerufen am 08.10.2025

[5] TypeScript-first schema validation with static type inference, https://zod.dev/, abgerufen am 08.10.2025

[6] TypeScript, https://www.typescriptlang.org/, abgerufen am 17.10.2025
