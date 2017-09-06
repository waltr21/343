---
CIS 343 - Structure of Programming Languages

Ira Woodring

***

**Architecture and History**
(Sebesta Text)
---
The history of computing goes back much farther than the actual times during which computers existed.

Mathematicians and others were laying the foundations for programming languages far before we had the hardware.
---
Charles Babbage worked on his difference engine - a mechanical device used to calculate polynomial functions.

Ada Lovelave is widely credited with writing the first computer "program", an algorithm for Babbage's machine.
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
                        // here an 'int' of 'n' bits.
```

This statement group would be written more like

```C
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

```
X0 = SQRT(ABS(Y0))
```

Becomes

```
00 X0 03 20 06 Y0
```
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

Served as a technical consultant on the creation of COBOL, a language based on her prior FLOW-MATIC language.

Has a navy missile destroy named after her, as well as a supercomputer.

Received 40 honorary degrees from universities around the world, as well as the National Medal of Technology and the Presidential Medal of Freedom.
---?image=./history-and-architecture/images/Grace_Hopper.jpg&size=auto 90%
---
**Fortran and the IBM 704**
***

During the 40s and early 50s there was no floating point hardware; people had to use interpreted systems to do floating point operations.  These were very slow.

The IBM 704 was the first machine that included hardware for both integer and floating point operations.  Fortran statements were very similar to the hardware statements of the 704.
---?image=./history-and-architecture/images/ibm704.jpg&size=auto 90%
---
**Fortran and the IBM 704**
***

Was **the** computer at the time.

Led to the creation of LISP, a musical language called MUSIC, inspired the voice for HAL in *2001: A Space Odyssey* when John Larry Kelly at Bell Labs demonstrated a voice synthesizer program singing "Bicycle Built for Two".

Note:
There seems to be some conflict as to whether it was a 704 or a 7094.
---
https://github.com/irawoodring/343/blob/master/history-and-architecture/images/daisy.mp3
---
**Fortran and the IBM 704**
***

Often credited with being the first compiled high level language (though there are some questions about that).  A lot of folks were working on this issue at that time.

Released first in 1956 (at least the manual for it; it had been around a bit longer).

By 1958, according to surveys, almost half of the code written for the 704 was written in Fortran.
---
**Fortran and the IBM 704**
***

Used no data typing statements at first; if a variable began with an ```I```, ```J```, ```K```, ```L```, ```M```, or ```N``` it was in integer.  Otherwise it was floating point.

Could not compile subroutines separately; any change in code required the entire program to be re-compiled.

All of these issues were fixed with later releases.
---
**Fortran and the IBM 704**
***

Continued growing new capabilities over the decades.  Is still developed.

Hovers around #35 on the Tiobe Index.  Similarly used languages (as of Summer 2017) are Lisp and Lua.
---
```Fortran
! sum.f90
! Performs summations using in a loop using EXIT statement
! Saves input information and the summation in a data file

program summation
implicit none
integer :: sum, a

print*, "This program performs summations. Enter 0 to stop."
open(unit=10, file="SumData.DAT")

sum = 0

do
 print*, "Add:"
 read*, a
 if (a == 0) then
  exit
 else
  sum = sum + a
 end if
 write(10,*) a
end do

print*, "Summation =", sum
write(10,*) "Summation =", sum
close(10)

end
```
Sample Fortran 90/95 code from https://en.wikibooks.org/wiki/Fortran/Fortran_examples#Summations_with_a_DO_loop
---
**LISP**
***

Was the first functional programming language.

Function here refers to the concept of a mathematical function, not a "subroutine" or process abstraction.

Stands for **LIS**t **P**rocessor.
---
**LISP**
***

Written for artificial intelligence.  Many people were interested in natural language processing and modeling the human brain.

Was preceded by a great deal of work at RAND, IBM, and other research houses.
---
**LISP**
***

Only has two data structures - atoms and lists.

Atoms are either symbols (identifiers) or numbers.

For instance:

```LISP
(A B C D)               // A list of 4 atoms
(A (B C) D (E (F G)))   // A list of 4 elements (some being lists!)
```
---
**LISP**
***

As a functional programming language, all computation is accomplished by applying functions to arguments (which may be other functions).

Does not have assignment statements.

Makes heavy use of recursion; loops are unneeded.
---
**LISP**
***

Completely dominated artificial intelligence for over a quarter of a century.

Code can be compiled (now).

Today, functional languages are taking off (for good reason!).
---
```LISP
;  LISP Example function
;  The following code defines a LISP predicate function
;  that  takes two lists as arguments and returns True
;  if the two lists are equal, and NIL (false) otherwise
   (DEFUN equal_lists (lis1 lis2)
    (COND
      ((ATOM lis1) (EQ lis1 lis2))
      ((ATOM lis2) NIL)
      ((equal_lists (CAR lis1) (CAR lis2))
(T NIL) )
)
```

LISP sample code from our textbook.
Note:
Have them notice what is happening here - we are chaining together functions.
---
**LISP**
***

Today programmers use either Scheme or Common LIPS (clisp).

Many other functional languages are being used today such as Clojure and Haskell.
---
**ALGOL**
***

One of the single most important languages ever created.  Many programmers have never heard of it.

Was created to be a universal programming language for science.

Generalized many of Fortran's features, but also added new features and constructs.
---
**ALGOL**
***

Formalized the idea of the data type.

Syntax is still commonly used in academic literature when defining algorithms.  

You may have noticed it before without knowing, if you saw an algorithm that included assignment statements as such:
---
```ALGOL
y := 0;
```

Instead of the near ubiquitous

```C
y = 0;
```
---
For instance:
```ALGOL_60
for j=2 to A.length
  key = A[j]
  // Insert A[j] into the sorted
      sequence A[1..j-1].
  i = j - 1
  while i > 0 and A[i] > key
    A[i + 1] = A[i]
    i = i - 1
  A[i + 1] = key
```
Insertion sort pseudocode from the 3rd edition of *Introduction to Algorithms* by Cormen, Lieserson, Rivest, and Stein.
---
Or, if you've looked at ALGOL code before:

```ALGOL_60
procedure Absmax(a) Size:(n, m) Result:(y) Subscripts:(i, k);
    value n, m; array a; integer n, m, i, k; real y;
comment The absolute greatest element of the matrix a, of size n by m,
    is transferred to y, and the subscripts of this element to i and k;
begin
    integer p, q;
    y := 0; i := k := 1;
    for p := 1 step 1 until n do
        for q := 1 step 1 until m do
            if abs(a[p, q]) > y then
                begin y := abs(a[p, q]);
                    i := p; k := q
                end
end Absmax
```
From https://en.wikipedia.org/wiki/ALGOL_60
---
**ALGOL**

Over the years different versions of ALGOL added many interesting new features.

- it was the first imperative language to allow recursion

- it allowed passing parameters to subprograms by value or by name

- in introduced block structure (scoping rules)
---
**ALGOL**
***

It never achieved widespread use in the U.S. (did in Europe).

However, many concepts it introduced are still seen in programming languages today.
---
**COBOL**
***

**Co**mmon **B**usiness **O**riented **L**anguage

Came out of a meeting sponsored by the Department of Defense on designing a common language for business applications.
---
**COBOL**
***

According to our text COBOL has been used more than any other language, but oddly never affected the programming world the way ALGOL did.

So in some ways, they are very opposite of one another.
---
**COBOL**
***

Designers wanted to use English statements as much as possible, wanted it to be easy to use (even if that meant it was less powerful), and thought it should be designed in a way to remove as much implementation restrictions as possible.
---
**COBOL**
***

Provided the first implementation of "record" types (though Plankalkül had them).

Very good language for working with data.  Process abstraction not as good.

Was the first programming language mandated for use by the Department of Defense, even though early compilers had poor performance.
---
```COBOL
$ SET SOURCEFORMAT"FREE"
IDENTIFICATION DIVISION.
PROGRAM-ID.  Multiplier.
AUTHOR.  Michael Coughlan.
* Example program using ACCEPT, DISPLAY and MULTIPLY to
* get two single digit numbers from the user and multiply them together

DATA DIVISION.

WORKING-STORAGE SECTION.
01  Num1                                PIC 9  VALUE ZEROS.
01  Num2                                PIC 9  VALUE ZEROS.
01  Result                              PIC 99 VALUE ZEROS.

PROCEDURE DIVISION.
DISPLAY "Enter first number  (1 digit) : " WITH NO ADVANCING.
ACCEPT Num1.
DISPLAY "Enter second number (1 digit) : " WITH NO ADVANCING.
ACCEPT Num2.
MULTIPLY Num1 BY Num2 GIVING Result.
DISPLAY "Result is = ", Result.
STOP RUN.
```
From http://www.csis.ul.ie/cobol/examples/Accept/Multiplier.htm
(A longer example is in your text).
---
**BASIC**

**B**eginners **A**ll **P**urpose **I**nstruction **C**ode

Created at Dartmouth.  Technical students were able to use Fortran and Algol but the rest of the liberal arts student body had trouble.

They wanted the language to be usable on terminals for time-sharing.
---
**BASIC**
***

The language needed to

- be easy for non-tech students to use and learn

- be pleasant and friendly

- provide fast turnaround for homework

- allow free and private access

- consider user time more important than computer time
---
**BASIC**
***

Was the first widely used language that was used remotely.

Widely criticized for poor program structure.

Newer versions (such as VB.NET) allow full object-oriented programming.
---
```BASIC
REM  BASIC Example Program
REM  Input:  An integer, listlen, where listlen is less
REM          than 100, followed by listlen-integer values
REM  Output: The number of input values that are greater
REM          than the average of all input values
  DIM intlist(99)
  result = 0
  sum = 0
  INPUT listlen
  IF listlen > 0 AND listlen < 100 THEN
REM  Read input into an array and compute the sum
    FOR counter = 1 TO listlen
      INPUT intlist(counter)
      sum = sum + intlist(counter)
    NEXT counter
REM  Compute the average
    average = sum / listlen
REM  Count the number of input values that are > average
    FOR counter = 1 TO listlen
      IF intlist(counter) > average
        THEN result = result + 1
    NEXT counter
REM  Print the result
    PRINT "The number of values that are > average is:";
           result
  ELSE
    PRINT "Error—input list length is not legal"
END IF END
```
From our textbook.
---
**PL/I**
***

Was another IBM invention.

By the early 60s languages were written either for science or business.

IBM wanted to have a general purpose "language for everyone".
---
**PL/I**
***

Included best of:

- ALGOL 60 with recursion, block structure
- Fortran IV with separate compilation, global data
- COBOL 60 - data structures, I/O, and report generation, and new constructs.
---
**PL/I**
***

In addition,

  - Had the ability to have concurrently executing Subprograms
  - Could detect and gracefully handle 23 types of exceptions
  - Pointers
  - Referencing of cross-sections of arrays (for instance the third row of a multi-dimensional array could be referenced as if it was a single-dimensional array)
---
**PL/I**
***

Was a little over ambitious.  Included too many features to be useful for programmers.

Also had many poorly designed constructs (although it was the first for some which should be considered).

Was used somewhat in the 70s then sort of died.  Was still in the 50-100 languages section from TIOBE index as of Fall 2017.
---
```PL/I
/* PL/I PROGRAM EXAMPLE
INPUT:  AN INTEGER, LISTLEN, WHERE LISTLEN IS LESS THAN
        100, FOLLOWED BY LISTLEN-INTEGER VALUES
OUTPUT: THE NUMBER OF INPUT VALUES THAT ARE GREATER THAN
        THE AVERAGE OF ALL INPUT VALUES   */
PLIEX: PROCEDURE OPTIONS (MAIN);
 DECLARE INTLIST (1:99) FIXED.
 DECLARE (LISTLEN, COUNTER, SUM, AVERAGE, RESULT) FIXED;
 SUM = 0;
 RESULT = 0;
 GET LIST (LISTLEN);
IF (LISTLEN > 0) & (LISTLEN < 100) THEN
DO;
/* READ INPUT DATA INTO AN ARRAY AND COMPUTE THE SUM */
    DO COUNTER = 1 TO LISTLEN;
      GET LIST (INTLIST (COUNTER));
      SUM = SUM + INTLIST (COUNTER);
    END;
/* COMPUTE THE AVERAGE */
    AVERAGE = SUM / LISTLEN;
/* COUNT THE NUMBER OF VALUES THAT ARE > AVERAGE */
    DO COUNTER = 1 TO LISTLEN;
      IF INTLIST (COUNTER) > AVERAGE THEN
        RESULT = RESULT + 1;
    END;
/* PRINT RESULT */
    PUT SKIP LIST ('THE NUMBER OF VALUES > AVERAGE IS:');
    PUT LIST (RESULT);
    END;
  ELSE
    PUT SKIP LIST ('ERROR—INPUT LIST LENGTH IS ILLEGAL');
END PLIEX;
```
---
**Early Dynamic Languages**
***

These languages weren't that popular, but they provided dynamic typing and storage allocation.  Meaning?

- Variables were given a type when assigned a value
- Storage was only allocated when a value was assigned
---
**Early Dynamic Languages**
***

**APL** also from IBM.  Not originally made to be a programming language; instead was meant to describe computer architecture.

Had a large number of symbols that required an odd character set.  Made some things easy; a single operator could do a matrix transpose.  But was hard to read.
---
https://en.wikipedia.org/wiki/APL_syntax_and_symbols
---
**Early Dynamic Languages**
***

Still used, though not widely.  Oddly enough it hasn't changed much in its 50 years.
---
Can try it here!

http://tryapl.org/
---
**Early Dynamic Languages**
***

**SNOBOL** was a Bell Labs invention.  Made for text processing.  Still around though not widely used.

**S**tri**N**g **O**riented and sym**BO**lic **L**anguage
---
```SNOBOL
*	WORDSIZE.SNO
*
*	Program to read a file and display the number of words of
*	various word lengths.  To make the program more interesting,
*	we shall only consider word lengths between 3 and 9.  This allows
*	us to demonstrate the use of an array with subscripts offset from
*	1, as well as array failure.
*
*	The file being scanned is read from standard input.  For example,
*	to scan the file TEXT.IN, type:
*
*		SNOBOL4 WORDSIZE <TEXT.IN
*
*	Trim trailing blanks from input
*
	&TRIM	=	1

*	Define pattern for words.  A word consists of upper- and lower-case
*	letters, apostrosphe and hyphen.
*
	WORDPAT	=	BREAK(&LCASE &UCASE) SPAN(&LCASE &UCASE "'-") . WORD

*	Define the array to hold the word counts.  Valid subscripts must be
*	in the range 3 through 9; all others will cause the array reference
*	to fail.  Array elements are initialized to zero instead of the normal
*	default, which is the null string.  This causes a zero to be produced
*	in the printed output if a particular array entry is never incremented.
*
	COUNT	=	ARRAY('3:9',0)

*	Read a line from the input file.  Fail if end-of-file.
*
READ	LINE	=	INPUT				:F(DONE)

*	Find the next word in LINE, and remove it to WORD.  Fail when
*	no more words remain in the line.
*
NEXTW	LINE WORDPAT =					:F(READ)

*	Increment the appropriate array element for words of this
*	size.  The statement quietly fails if the size is outside
*	the range 3 through 9.
*
	COUNT<SIZE(WORD)> = COUNT<SIZE(WORD)>+ 1	:(NEXTW)

*	Upon end of file, print the values in the array.  Print heading first.
*
DONE	OUTPUT	=	"WORD LENGTH     NUMBER OF OCCURRENCES"
	I	=	2

*	Index through array starting at element 3.  When we reach element
*	10, the array reference fails, and we fall through to END.
*
PRINT	I	=	I + 1
	OUTPUT	=	LPAD(I,5) LPAD(COUNT<I>,20)	:S(PRINT)

END
```
From http://groups.engin.umd.umich.edu/CIS/course.des/cis400/snobol/word.html
---
**SIMULA 67**
***

Written in Norway at the Norwegian Computing Center between '62 and '64.  Was written for system simulation but quickly grew to be general purpose.

Was the first language to provide data abstraction.  Used the class construct.  Provided the foundation of OO programming.
---
**ALGOL 68 and ALGOL Descendants**
***

Many other languages based upon these early ones began to pop up, with different design focuses.
---
ALGOL 68 stressed orthogonality.
```ALGOL_68
PROC gcd = (INT a, b) INT: (
  IF a = 0 THEN
    b
  ELIF b = 0 THEN
    a
  ELIF a > b  THEN
    gcd(b, a MOD b)
  ELSE
    gcd(a, b MOD a)
  FI     
);
test:(
  INT a = 33, b = 77;
  printf(($x"The gcd of"g" and "g" is "gl$,a,b,gcd(a,b)));
  INT c = 49865, d = 69811;
  printf(($x"The gcd of"g" and "g" is "gl$,c,d,gcd(c,d)))
)
```
---
Pascal, designed for teaching programming, stressed simplicity and expressivity.

```Pascal
function gcd_iterative(u, v: longint): longint;
  var
    t: longint;
  begin
    while v <> 0 do
    begin
      t := u;
      u := v;
      v := t mod v;
    end;
    gcd_iterative := abs(u);
  end;
```
---
C stressed flexibility and became the *lingua franca* of Computer Science.

```C
int
gcd_iter(int u, int v) {
  if (u < 0) u = -u;
  if (v < 0) v = -v;
  if (v) while ((u %= v) && (v %= u));
  return (u + v);
}
```
---
Other languages began to come along that stressed completely different paradigms from the imperative model.
---
**Prolog**
***

In the early '70s Prolog was created to allow programmers to program via formal logic.

Is nonprocedural; programs don't provide steps for completing a task.  Instead, they provide the form and characteristics of the desired result.
---
**Prolog**
***

For instance, the programmer provides facts or rules:

```Prolog
mother(joanne, jake).
father(vern, joanne).
```
---
**Prolog**
***

And rules:

```Prolog
grandparent(X, Z) :- parent(X, Y), parent(Y, Z).
```
---
**Prolog**
***

Then the system may be queried with a goal statement:

```Prolog
father(bob, darcie).
```

This statement asks the system to determine if ```bob``` is the father of ```darcie```.  The system will respond with ```true``` if it can prove this, or ```false``` otherwise.
---
**Prolog**
***

At one time, some computer scientists thought logic programming would overtake other forms of programming as the dominant paradigm.  This never happened, likely because

  - logic programs are often highly inefficient compared to other programs.
  - we have determined it is not an effective paradigm for certain domains (primarily A.I. and databases are the best for it).
---
**Ada**
***

Developed for the Department of Defense.  
