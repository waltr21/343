---
CIS 343 - Structure of Programming Languages

Ira Woodring

***

Class Overview
---
What's the point?

Why do we study programming languages?
---
Language give us the ability to express what we are thinking.

It can be hard to convey something we don't have a direct translation for.

Using English for instance, how do you describe:
---
The wordless yet meaningful look shared by two people who desire to initiate something, but are both reluctant to start.
+++
Mamihlapinatapei

A Yagan word (a native tribe from Tierra Del Fuego).
---
A relationship by fate or destiny.
+++
Yuanfen

Chinese
---
The act of tenderly running your fingers through someone's hair.
+++
Cafuné

Brazilian Portuguese
---
The happiness of meeting again after a long time.
+++
Retrouvailles

French
---
A person who is willing to forgive abuse the first time; tolerate it the second time, but never a third time.
+++
Ilunga

Bantu
---
The heart-wrenching pain of wanting someone you can’t have.
+++
La Douleur Exquise

French
---
The sense upon first meeting a person that the two of you are going to fall into love.
+++
Koi No Yokan

Japanese
---
A declaration of one’s hope that they’ll die before another person, because of how difficult it would be to live without them.
+++
Ya’aburnee

Arabic
---
The euphoria you experience when you’re first falling in love.
+++
Forelsket

Norwegian
---
The feeling of longing for someone that you love and is lost. Another linguist describes it as a "vague and constant desire for something that does not and probably cannot exist."
+++
Saudade

Portuguese
---
All of these were from http://bigthink.com/harpys-review/the-top-10-relationship-words-that-arent-translatable-into-english
---
On a similar note, the Sami people of Scandinavia and Russia have over 180 words for snow.

They have so many different ways to express snow, each with subtle nuances so that the perfectly express ideas!

Let's consider a computer example:
---
What does this code do?
```
mov eax, $x               // Move the value in $x to the register eax
beginning:
cmp eax, 0x0A             // Compare the value in eax to 0x0A (10)
jg end                    // If they are the same, go to end.
inc eax                   // Increase the value in eax
jmp beginning             // Go to the beginning
end:
mov $x, eax               // Move the value in eax to
```
