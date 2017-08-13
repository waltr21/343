---
CIS 343 - Structure of Programming Languages

Ira Woodring

***

The C Programming Language
---
**History**
***

You can read this history, from the author!
https://www.bell-labs.com/usr/dmr/www/chist.html
---
**History**
***

- Was written in the early 70's by Dennis Ritchie at Bell Labs.

- Was written for Unix development (original Unix was written in Assembly)

- Was based on BCPL, a language with no types, and B.  C added types and other features.
---
**History**
***

Contrary to what we think now, it was not written for portability!

Interest in portability came later.
---
**History**
***

- Popularized syntax we use still today, such as brackets for array accesses (which was uncommon at the time!)

- Introduced the operators ```++``` and ```--``` (invented by Ken Thompson!)
---
**History**
***

- It is an imperative procedural language

  - Imperative means it gives commands to change state

  - Procedural means it provides the ability to structure code and call procedures
---
**History**
***

- By around 1973 the basics were complete enough to rewrite the Unix kernel in the language.

- Toward the end of the 70's work began on making it portable.

  - This means we can take the same code and compile it on different architectures to the same effect.
---
**History**
***

- After it became portable the popularity soared.

- During the 80's compilers were written for nearly every architecture and OS.

- In 1983 work began on standardizing the language.
---
**Overview**
***

C is a high-level language that provides very low level capabilities.

Data types are very closely related to underlying hardware.

Many higher-level languages don't provide the capabilities that C has for interacting so closely with hardware.  This makes C a better choice for systems programming and speed-intensive tasks.
---
**Overview**
***

Every computer processor has an instruction set.  This set of instructions are the ONLY things a processor knows how to do.  Different brands and types of processors have different instruction sets.

C requires the use of a compiler to create the libraries and executables needed to run a program.

The compiler translates higher-level C code into machine code that a processor can understand.
---
**Overview**
***

In this class we will use either the Clang compiler or the GCC compiler.  Both are on EOS, and freely available should you wish to install them on your own machines.
---
**Overview**
***

A program written in C is some executable code (usually) linked to other libraries.

These libraries are usually pieces of code written by a community of advanced programmers, and provide facilities such as I/O, memory management, etc.

Usually these libraries have been in development for many years, are very robust, efficient, and secure code.  We should use them.
---
**Overview**
***

C gives us facilities to separate out our code into interface and implementation files.

Interface files describe data types, functions, etc. that may be used in a library.  The do not usually provide the implementation.  Interface files are \*.h files.

Implementation files are the actual code files that provide the instructions needed to complete some task.  They are provided in \*.c files.
---
**Overview**
***

The C compiler compiles every file separately.  So if we write a program that makes use of a library, we need to tell C that we are using the library correctly.  For instance:
---
Say I have a file called ```my_prog.c```.  I wish to use a function called ```handyFunction(42);```.

While compiling ```my_prog.c``` the compiler needs to know if I am using ```handyFunction()``` correctly.  Am I providing the correct type and number of parameters?  Does it return the expected type?

The compiler is given this information from the \*.h file.
---
We will say my library is called ```library```.  So I should have ```library.h``` and ```library.c``` files.  The \*.h file, the interface, might look like this:

```C
int handyFunction(int num);
```

This tells the compiler that there is a definition for ```handyFunction``` that takes an ```int``` and returns an ```int```.
---
At the top of my ```my_prog.c``` file, I can tell the compiler about the library file with the command:

```C
#include "library.h"
```

**Note**: when importing libraries we use "" around personal libraries.  If we were importing a system library we would use <> such as:

```C
#include <library.h>
```
---?code=./samples/my_prog.c
---?code=./samples/library.h
---?code=./samples/library.c
---
We compile this code with the command

```
clang my_prog.c library.c
```

or

```
gcc my_prog.c library.c
```

This will output a file called ```a.out```.  We run that with the command

```
./a.out
```
---
By the way, ```a.out``` stands for "assembly out".  It is a holdover from the early days at Bell Labs.  It was kept through the B, BCPL, and early C phases because folks were used to it.

You can provide an optional executable name with the ```-o FILENAME``` flag such as:

```
clang my_prog.c library.c -o my_executable
```

Same syntax applies to GCC.
---
