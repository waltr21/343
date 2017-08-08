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
