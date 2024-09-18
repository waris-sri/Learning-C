## Lesson 02 Extra Practice: Q2
Write a C program to check if the value of `X` **matches** the following criteria, 
including:
* `X` is **“Negative”** or **“Positive”** or **“Zero”**
* `X` is **“Odd”** or **“Even”**
* `X` is **ending** with “7”
* `X` is **divisible** by “3” or “5”
The program must print all criteria that `X` match.

**Note:** You can use library `stdlib.h` in this question if you want.

<hr>

**Example 1:**
**Input:** `x=10`  
```
10
```
**Expected output:**
```
Positive
Even
Divisible by 5
```
<hr>

**Example 2:**
**Input:** `x=-7`  
```
-7
```
**Expected output:**
```
Negative
Odd
Ending with 7
```
<hr>

**Example 3:**
**Input:** `x=-5`  
```
-5
```
**Expected output:**
```
Negative
Odd
Divisible by 5
```
<hr>

**Example 4:**
**Input:** `x=3`  
```
3
```
**Expected output:**
```
Positive
Odd
Divisible by 3
```
<hr>

**Example 5:**
**Input:** `x=27`  
```
27
```
**Expected output:**
```
Positive
Odd
Ending with 7
Divisible by 3
```
<hr>

**Example 6:**
**Input:** `x=0`  
```
0
```
**Expected output:**
```
Zero
Even
Divisible by 3 and 5
```
