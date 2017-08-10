---
CIS 343 - Structure of Programming Languages

Ira Woodring

***

Language Evaluation Criteria
(Follows the Sebesta Text Chapter 1)
---
We know now that different languages address different domains.  Sometimes that may be enough for us to make a choice.  For instance, we wouldn't want to use Java or Python to make an operating system, as they require an interpreter.

Sometimes though, languages may be more general purpose.  So then, how can we compare them?
---
There are a lot of different criteria. The main ones we will discuss in this class are

- Readability
- Writability
- Reliability
- Expressivity
- Cost
---
We will mostly focus on the first three in this class

- **Readability**
- **Writability**
- **Reliability**
- Expressivity
- Cost
---
Readability
***

Refers to how easily the language can be read and understood.  For instance, here is the source code for the original *Prince of Persia* game:

---?code=code_samples/HIRES.S
https://raw.githubusercontent.com/jmechner/Prince-of-Persia-Apple-II/master/01%20POP%20Source/Source/HIRES.S
---
Readability
***

This Assembly Language code was very low-level.  It lacked things like for-loops and other higher-level constructs.  Because of these deficiencies it is much more cumbersome to express ideas concisely.

However, having higher-level constructs alone does not necessarily make a language more readable.  Consider the following code:
---?code=code_samples/prog.c
Or, this one:
---?code=code_samples/prog2.c
---
Readability
***

Both of these programs are perfectly valid C code.

They include higher-level concepts than Assembly Language typically provides, yet they are anything but readable.

So then, what makes code written in one programming language more readable than another?
---
Readability
***

Simplicity.

- Having a small number of basic constructs

- Feature multiplicity

- Operator overloading
---
Readability - Simplicity
***

**Having a small number of basic constructs**

How many keywords and operators does the language have?  The larger the number the less readable.
---
Readability - Simplicity
***

**Feature multiplicity**

How many different ways can you accomplish the same operation?  For instance, in many languages you may do any of the following to accomplish the same task:
---
```
count = count + 1
count += 1
count++
++count
```

The more ways to accomplish a task, the lower the readability.
---
Readability - Simplicity
***

**Operator Overloading**

How many meanings do the operators have?

Consider the C programming language.  The \* operator can have many meanings.  It can be used for multiplication, to denote a pointer, to dereference a pointer, to help signify a comment, etc.

For instance:
---
```C
#include <stdio.h>
#include <stdlib.h>

/* Let's create some awesome code! */

int main(void){
        int * a = malloc(10 * sizeof(int));
        *(a + 0) = 42;
        *(a + 1) = *a + *a;
        int b = *a + 1;
        printf("%i\n\n", b);

}
```

What does this even output???
---
Readability - Orthogonality
***

Means that a **relatively small set of primitive constructs** can be combined in a **relatively small number of ways** to write code, and that every possible combination of primitives is legal and meaningful.

Eh?
---
Readability - Orthogonality
***

For instance, in the Java programming language it is perfectly legal to return any data type from a function; in other languages though (such as C), attempting to return an array data type from a function is invalid code.

Eg:
---
Java

```Java
public Car[] getCars(){
  Car[] cars = this.my_cars;
  return cars;                // Valid!
}
```
C

```C
int[] getValues(){
  int values[10];
  for(int i=0; i<10; i++)}
    values[i] = i;
  }
  return values;             // Not valid!
}
```
---
Readability - Orthogonality
***

What that means is that in this instance Java is more orthogonal.

Java and C both have a small number of constructs (such as the idea of arrays), but C has limits to how they can be used.  Java has no such restrictions.
---
Readability - Orthogonality
***

Java is therefore more readable; in C we have to use pointers to return an array, but we also use pointers to return pointers from functions.  Understanding the programmer's original intent becomes harder.
---
Readability - Orthogonality
***

But, with everything there is a catch.

Too much orthogonality can be bad too.  For instance, are conditionals allowed on the left side of an assignment statement?

```
5 * a = b           // May be valid (in some languages), but what is the intent?
```
---
Readability - Data Types
***

Are they adequate to describe what needs to be described?

For instance, in Python we have a boolean type, but C does not.  In C we must use an integer type to simulate a boolean:
---
```Python
goAhead = true
```

```C
int goAhead = 1;
```
*Yes, I know there are boolean libraries for C.  They still don't provide full boolean functionality though.  Try using them in an ```if``` statement.*
---
Readability - Syntax
***

Are there easy to use facilities for denoting code groups?

Such as:
+++
Many languages use braces and semi-colons

  ```
  for(int i=0; i<10; i++){ ... }
  ```
+++
Some languages use tabs or spaces

  ```
  for i in range(0,10):
      ....
  ```
+++
Others use matching words

  ```
  if [ $a $eq 1 ]
  then
    ...
  fi
  ```
---
Readability - Syntax
***

Can special words be used as names of variables (hopefully not!)?  Consider how confusing this might be:

```
int while = 10;
while( while < 100 ){
  ...
}
---
Readability - Syntax
***

Form and (fairly) obvious meaning.

Meaning should be apparent from the syntax, without the need for context
---
Consider this C code:

```C
static double pi = 3.14159;         // outside of a function definition;
                                    // means only available to code in
                                    // this file.

int main(int argc, char** argv){
  static int my_val = 1;            // inside a function; static here means
                                    // this is a compile time variable
}
```
---
Now, let's turn to **Writability**.

The same issues that affect Readability also affect Writability.

But, there are a few more.
---
