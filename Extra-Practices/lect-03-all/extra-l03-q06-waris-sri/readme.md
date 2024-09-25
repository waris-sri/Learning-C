## Lesson 03 Extra Practice: Q6
Write the program to count how many **“Vowel”** and **“Consonant**” user have 
inputs until they input `0`. The program must repetitively take the input alphabets until 
receiving `0`. 

Then, the program count how many **vowels ('a', 'e', 'i', 
'o' and 'u')** and **consonants** ( e.g., 'b', 'c', 'd', …) and display the outputs.
* You can assume the user will input only the lowercase alphabets and `0 - 9`
* If users inputs `0`, the program **stops** taking inputs and displays the output.
* If users inputs `1-9`, the program will not count that as consonant or vowel, and **skip** it to input next character.

**Requirement:** The program must use **_while_** loop

<hr>

**Example 1:**
**Input:**  
```
a
b
c
0
```
**Expected output:**
```
vowel:1
consonant:2
```
<hr>

**Example 2:**
**Input:** 
```
i
i
u
0
```
**Expected output:**
```
vowel:3
consonant:0
```
<hr>

**Example 3:**
**Input:** 
```
0
```
**Expected output:**
```
vowel:0
consonant:0
```
<hr>

**Example 4:**
**Input:**  
```
j
y
n
x
4
5
0
```
**Expected output:**
```
vowel:0
consonant:4
```
