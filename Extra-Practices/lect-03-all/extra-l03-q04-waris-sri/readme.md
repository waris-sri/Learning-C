## Lesson 03 Extra Practice: Q4
Write a C program to count the number of integers in the given range, **[x, y]**, 
that can be **divisible by d**. 

The program takes three inputs: `x`, `y`, and `d`:
* `x`is the start number of the range (inclusive)
* `y` is the ending number of the range (inclusive)
* `d` is the divider **that must not be 0**

* If `x > y` or `d = 0`, Program will display `"Unable to count"`
* Otherwise, Program will count and display the number in range **[x,y]** that can be **divisible by d**.

**Requirement:** The program must use `for` loop

<hr>

**Example 1:**
**Input:** `x=5, y=21, d=3`  
```
5 21 3
```
**Expected output:**
```
6 9 12 15 18 21 
count=6
```
<hr>

**Example 2:**
**Input:** `x=10, y=10, d=4`  
```
-10 10 4
```
**Expected output:**
```
-8 -4 0 4 8 
count=5
```
<hr>

**Example 3:**
**Input:** `x=3, y=9, d=0`  
```
3 9 0
```
**Expected output:**
```
Unable to count
```
<hr>

**Example 4:**
**Input:** `x=15, y=3, d=5`  
```
15 3 5
```
**Expected output:**
```
Unable to count
```
