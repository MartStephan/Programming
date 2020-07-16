# C++20

[TOC]

## Modules

For compiling our first C++20 module I used the Clang 10.0.0 compiler. 

```pseudocode
>>> clang++.exe -v
>>> clang version 10.0.0
>>> Target: x86_64-pc-windows-msvc
>>> Thread model: posix
>>> InstalledDir: d:\Program Files\LLVM\bin
```

Now let's go. 

```pseudocode
/// Erzeuge aus der Moduledeklaration math.cppm ein vorcompiliertes Modul math.pcm.
>>> clang++.exe -std=c++20 --precompile math.cppm -o math.pcm 

/// Erzeuge eine Übersetzungseinheit math.o.
>>> clang++.exe -std=c++20 -c math.pcm -o math.o

/// Erzeuge eine ausführbare Datei math oder math.exe. clang++ benötigt hier noch den Pfad zum Modul.
>>> clang++.exe -std=c++20 -fmodules-ts -fprebuilt-module-path=. math.o main.cpp -o math.exe

/// math.exe ist ausführbar - und die Algorithmen sind korrekt. 
>>> math.exe 
>>> gcd 20
>>> lcm 100
```

