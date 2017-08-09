---
CIS 343 - Structure of Programming Languages

Ira Woodring

***

Language Evaluation Criteria
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

Refers to how easily the language can be read and understood.  For instance, how here is the source code for the original *Prince of Persia* game:

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

Both of these programs are perfectly valid C code.  They include higher-level concepts than Assembly Language typically provides, yet they are anything but readable.  So then, what makes code written in one programming language more readable than another?
---
Readability
***

Simplicity.

1 - Having a small number of basic constructs
2 - Feature multiplicity
3 - Operator overloading
---
Readability - Simplicity
***

**Having a small number of basic constructs**

How many keywords and operators does the language have?  The larger the number the less readable.
---
Readability - Simplicity
***

**Feature multiplicity.**  How many different ways can you accomplish the same operation?  For instance, in many languages you may do any of the following to accomplish the same task:
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

**Operator Overloading**  How many meanings do the operators have?  Consider the C programming language.  The \* operator can have many meanings.  It can be used for multiplication, to denote a pointer, to dereference a pointer, to help signify a comment, etc.

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

What does this even print???
---
