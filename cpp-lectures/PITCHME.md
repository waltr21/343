---
CIS 343 - Structure of Programming Languages

Ira Woodring

***

**The C++ Programming Language**
---
**History**
***

Created by Bjarne Stroustrup.  He started working on it in 1979 calling it "C with Classes".  He found a need for this when programming for his Ph.D. thesis.  Basically, he had found that Simula provided great programming facilities but was too slow, and BCPL was fast but not advanced enough.

In 1983 the name was changed to C++.
---
**Paradigm**
***

C++ allows us to program using the Object Oriented paradigm, but it doesn't impose a restriction that says we *must* use OO.  We could just create imperative procedural code.

This is primarily because C++ is a superset of C; anything legal in C is legal in C++.
---
**Warning!**
***

There are C ways of doing things and C++ ways of doing things.  These conventions, even if they are not expressly stated, are usually assumed by other programmers.

For instance, it is perfectly valid for us to use the <stdio.h> library in C++.  However, this library does not solve problems "the C++ way".  It doesn't use streams for input and output, doesn't have objects, etc.  Using it may compile ok but could add confusion for other programmers (or even for you later on!).
---
**Program Structure**
***

We are going to concentrate on Object Oriented C++.  Therefore we will structure our programs much like Java code we have written in the past.

The difference between Java is that the **Syntactic Unit** for an object's definition (the class) is contained in a single file.  In C++ it *can* be in a single file, but we usually split the class into an interface (\*.h file), and the implementation (\*.cpp file).
---
**Program Structure**
***

For instance, if we were going to create a car object we might have two files:

```Car.h``` which holds the function signatures (the declarations), and ```Car.cpp``` that holds the code (or definitions).
---
```Car.h```:

```C++

```
---
**Memory Management**
***

Just like in C, C++ manages memory for static (compile time, on the stack) objects only.  Dynamically created memory (run-time, on the heap) must be managed by the programmer.
