---
CIS 343 - Structure of Programming Languages

Ira Woodring

***

**Architecture and History**
---
The history of computing goes back much farther than the actual times during which computers existed.

Mathematicians and others were laying the foundations for programming languages far before we had the hardware.
---
Charles Babbage worked on his difference engine; a mechanical device used to calculate polynomial functions.

Ada Lovelave is widely credited with writing the first computer "program"; an algorithm for Babbage's machine.
---?image=./history-and-architecture/images/Babbage_Difference_Engine.jpg&size=auto 90%
---?image=./history-and-architecture/images/Ada_Lovelace_portrait.jpg&size=auto 90%
---
**Konrad Zuse's Plankalkül**
***

Pronounced "Tsoo-zuh".

He was a German scientist working on electromechanical relays.

By 1945 most of his work had been destroyed by Allied bombing.
---
**Konrad Zuse's Plankalkül**
***

Built a computer called the Z4.  He moved it to a Bavarian village and worked alone.

Plankalkül means "Program Calculus".  He developed it for his Ph.D. dissertation.  It was completed in 1945 but not published until 1972.
---
**Konrad Zuse's Plankalkül**
***

Simplest data type was the bit.

Other types, both integer and floating point, were built from bits.

Included arrays and record types, included nested records!

It had an iterative statement much like a ```for```.
---
**Konrad Zuse's Plankalkül**
***

He even wrote 49 pages of algorithms to play chess, even though he was not a chess expert!
---
**Konrad Zuse's Plankalkül**
***

Had (what we would consider) a weird syntax.

```
  | A + 1 => A          // This is an assignment statement.
V | 4        5          // V line is for array subscripts
S | 1.n      1.n        // S line is for the data type,
                        // here an ```int``` of ```n``` bits.
```

This statement group would be written more like

```C
int a[100];
a[5] = a[4] + 1;
```

today.
---?image=./history-and-architecture/images/Konrad_Zuse_1992.jpg&size=auto 90%
---
**Pseudocodes**
***

Not pseudocode as we think of it today.

Rather, was a group of languages from the 40s and 50s.
---
**Pseudocodes**
***

**Short Code** - Developed for the BINAC computer then used on UNIVAC I (the first commercial computer in the U.S.).

Memory had 72 bits grouped as 12 six-bit bytes.

Coded mathematical expressions.
---
**Short Code Codes**

| Byte code | Operation | Byte Code | Operation |Byte Code | Operation |
|-----------|-----------|-----------|-----------|----------|-----------|
| 01 | - | 06 | abs value | 1n | (n+2)nd power |
| 02 | ) | 07 | + | 2n | (n+2)nd root |
| 03 | = | 08 | pause | 4n | if <= n |
| 04 | / | 09 | ( | 58 | print and tab |
---
Variables were byte-pair Codes

```X0 = SQRT(ABS(Y0))```

Becomes

```00 X0 03 20 06 Y0```
---
**Pseudocodes**
***

**Speedcoding**

Created by John Backus (we will hear more about him later this semester).

Extended the IBM 701 machine to allow for floating-point calculations.  Added square root, sine, arc tangent, exponent, and logarithm statements as well as conditional and unconditional branches.
---
INCREDIBLY slow by today's standards.  Quicker than a human though.

An add instruction took 4.2 milliseconds.

Was interpreted; only 700 words of memory left for programs after the interpreter started running.
---
**Pseudocodes**
***

The UNIVAC "Compiling" System

Led by Grace Hopper at UNIVAC.

Expanded pseudocode into machine code.  Made programs MUCH shorter.
---
** Grace Hopper**
***

A hero of Computer Science.  Also a U.S. Navy Rear Admiral.

Was a pioneer of compilers and machine-independent programming languages.  Prior to this time different languages were written for every machine.

She believed that programmers should be able to use English words that a compiler would translate into machine code.
---
** Grace Hopper**
***

Often called "Amazing Grace".

Has a destroy named after her, as well as a supercomputer.

Received 40 honorary degrees from universities around the world, as well as the National Medal of Technology and the Presidential Medal of Freedom.
---?image=./history-and-architecture/images/Grace_Hopper.jpg&size=auto 90%
