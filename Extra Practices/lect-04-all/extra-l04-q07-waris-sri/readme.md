## Lesson 04 Extra Practice: Q7
Write a C program to similate the **7-up games**. The program will display the **series of numbers** from `1 to n`. If the number is `ending with 7` (e.g., 7, 17, 27, …) or the number is `divisible by 7` (e.g., 7, 14, 21, …). The program will **skip** the number and show the subsequent number until n

* If user input negative number or zero, Program will display `Invalid`

<hr>

**Example 1:**
**Input:** `n=10`  
```
10
```
**Expected output:**
```
1 2 3 4 5 6 8 9 10
```
<hr>

**Example 2:**
**Input:** `n=20`  
```
20
```
**Expected output:**
```
1 2 3 4 5 6 8 9 10 11 12 13 15 16 18 19 20
```
<hr>

**Example 3:**
**Input:** `n=44`  
```
44
```
**Expected output:**
```
1 2 3 4 5 6 8 9 10 11 12 13 15 16 18 19 20 22 23 24 25 26 29 30 31 32 33 34 36 38 39 40 41 43 44
```
<hr>

**Example 4:**
**Input:** `n=-5`  
```
-5
```
**Expected output:**
```
Invalid
```
<hr>

**Example 5:**
**Input:** `n=0`  
```
0
```
**Expected output:**
```
Invalid
```
