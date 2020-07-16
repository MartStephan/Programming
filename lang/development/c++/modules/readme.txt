>>> clang++.exe -v
>>> clang version 10.0.0
>>> Target: x86_64-pc-windows-msvc
>>> Thread model: posix
>>> InstalledDir: f:\Program Files\LLVM\bin

/// Erzeuge aus der Moduledeklaration math.cppm ein vorcompiliertes Modul math.pcm.
>>> clang++.exe -std=c++20 --precompile math.cppm -o math.pcm 

/// Erzeuge eine Übersetzungseinheit math.o
>>> clang++.exe -std=c++20 -c math.pcm -o math.o

/// Erzeuge eine ausführbare Datei math oder math.exe. clang++ benötigt hier noch den Pfad zum Modul.
>>> clang.exe -std=c++20 -fmodules-ts -fprebuilt-module-path=. math.o main.cpp -o math.exe
