## Lesson 02 Extra Practice: Q10
Write a C program to receive the values of **a, b, and c**, which are the interior angles of a triangle.

The program should display **the type of triangle** based on the angles:

- If one of the interior angles is a **right angle**, the program should display `Right triangle`.
- If one of the interior angles is an **obtuse angle** (any angle greater than 90 degrees), the program should display `Obtuse triangle`.
- If all the interior angles are **acute**, the program should display `Acute triangle`.
- If the sum of all 3 angles is not equal to **180** or at least the one of these 3 angles is **negative**, the program should display `Not a triangle`.

**Note:**
- Do not use other **built-in functions** as this is a practice in thinking processes. Only **basic operators** are allowed.

<hr>

**Example 1:**
**Input:** `a = 90, b = 45, c = 45`  
```
90
45
45
```
**Expected output:**
```
Right triangle
```
<hr>

**Example 2:**
**Input:** `a = 100, b = 40, c = 40`  
```
100
40
40
```
**Expected output:**
```
Obtuse triangle
```
<hr>

**Example 3:**
**Input:** `a = 60, b = 60, c = 60`  
```
60
60
60
```
**Expected output:**
```
Acute triangle
```
<hr>

**Example 4:**
**Input:** `a = 60, b = 60, c = 60`  
```
70
30
50
```
**Expected output:**
```
Not a triangle
```
<hr>

**Example 5:**
**Input:** `a = 90, b = 100, c = -10`  
```
90
100
-10
```
**Expected output:**
```
Not a triangle
```
<hr>

