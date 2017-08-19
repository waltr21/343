---
CIS 343 - Structure of Programming Languages

Ira Woodring

***

**Syntax and Semantics**
---
### Syntax
***

Written languages are sets of strings from some alphabet.

The strings are called sentences or statements.

Syntax tells us which strings are valid for the language.
---
### Syntax
***

Syntax is the rules of the language.

For instance, in English we have a lot of rules:

- Start sentences with capital letters.

- End sentences with punctuation such as '.', '?', or '!'.

- Names are capitalized

- We use empty space between words.

- etc.
---
### Syntax
***

If we have a string such as

aof;'(#;d,cla908a;sjam;aj;LJKha;e;)

we can say it is an invalid sentence in this language.
---
### Syntax
***

Combinations of characters from the valid alphabet for the language can form lexemes, if those combinations express valid ideas in the language.

In English for example, we have lexemes such as "Go!", "apple", "it" and thousands others that express an idea.

Lexemes in a programming language may be numbers, operators, and special words.
---
### Syntax
***

Lexemes are partitioned into groups.  Each group is given a name or a token.  For instance, variable names may be ```a```, ```student_name```, ```car_two```.  All of these lexemes are different, but they are all the same type of lexeme.  We could label them with the token "identifiers".
---
### Syntax
***

Sometimes a lexeme is the only element in a token.  For instance we might have the operator ```+```.  Because of its specialized meaning we may just give it the token "addition_operator".

The number of possible valid sentences for a language are immense.  Not feasible to provide language learners every possible sentence.
---
### Syntax
***
A mental exercise:

In theory there are two ways we can define a language; by recognition or by generation.
---
### Syntax
***

A Language Recognizer would be some device or software that takes as input strings of characters from a predefined alphabet and outputs whether the string is or is not valid.

This is what syntax analysis in a compiler does.  Not good for learning a language though; must learn through trial and error.
---
### Syntax
***

A Language Generator would be a device used to generate sentences in a language.

Would be only limitedly useful; we could use sample sentences to compare to our own though and begin to learn the language.
---
### Syntax
***

Neither of these methods are good for disseminating the language to others.  We need a formal way to describe syntax.

Enter the Context-Free Grammar
---
### Syntax
***

During the 1950s two researchers, in completely unrelated settings were working on this problem.

Noam Chomsky (a linguist) developed four classes of grammars for languages.  Two of these *context-free*, and *regular* could be applied to programming languages, though these were not his interest.
---
### Syntax
***

John Backus created a notation when designing ALGOL (later modified slightly by Peter Naur).  This notation is called Backus-Naur Form (BNF).

A similar notation was used by Panini (an ancient Sanskrit linguist) to describe Sanskrit between the 4th and 6th centuries BCE.

This notation was very similar to Chomsky's ideas.
---
### Syntax
***

BNF is a **metalanguage** - a language used to describe languages.

It uses abstractions for syntactic structures.  For instance, an assignment statement definition may be give as:

```
<assign> -> <var> = <expression>
```
---
### Syntax
***

What this describes (or really defines) for us is an rule for a valid sentence in a language.  Here we are saying that an assignment statement is defined as a variable followed by an equals sign followed by an expression.
---
### Syntax
***

If we look closely at the statement again, we should make note of a few things:

```
<assign> -> <var> = <expression>
```

Every item we see in this sentence is a token of some sort.  Some are called nonterminal symbols and some are terminal symbols.
---
### Syntax
***

**Nonterminals** - abstractions.  These may be broken down further to other tokens until they can be nothing more than some lexeme.  May have two or more distinct definitions representing possible syntactic forms in the language.

**Terminals** - lexemes.  These cannot be broken down any further.

**Grammars** - are the collections of rules for languages.
---
### Syntax
***

When writing a grammar we may use the "|" symbol to separate multiple definitions of a nonterminal:

```
<if_stmt> -> if ( <logic_expr> ) <stmt>
<if_stmt> -> if ( <logic_expr> ) <stmt> else <stmt>
```

Or:

```
<if_stmt> -> if ( <logic_expr> ) <stmt>
        | -> if ( <logic_expr> ) <stmt> else <stmt>
```
---
### Syntax
***
