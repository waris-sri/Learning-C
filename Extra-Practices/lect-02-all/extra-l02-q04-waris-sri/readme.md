## Lesson 02 Extra Practice: Q4
There are 4 quadrants in the coordinate plane. Write a C program to determine 
to the quadrants of the given point `(x, y)`. The program should receive a x and y
values then use the following graph below to determine the quadrant and show, `"Q1", 
"Q2", "Q3" or "Q4"` according to its quadrant. If the point lies on the axis, i.e., any 
x or y has 0 value, print out `"No quadrant"`

| Quadrant | Coordinate |
|:--------:|:----------:|
|    Q1    |    (+,+)   |
|    Q2    |    (-,+)   |
|    Q3    |    (-,-)   |
|    Q4    |    (+,-)   |

<hr>

**Example 1:**
**Input:** `x=1, y=0`  
```
1
0
```
**Expected output:**
```
No quadrant
```
<hr>

**Example 2:**
**Input:** `x=1, y=1`  
```
1
1
```
**Expected output:**
```
Q1
```
<hr>

**Example 3:**
**Input:** `x=-2, y=2`  
```
-2
2
```
**Expected output:**
```
Q2
```
<hr>

**Example 4:**
**Input:** `x=-1, y=-3`  
```
-1
-3
```
**Expected output:**
```
Q3
```
<hr>

**Example 5:**
**Input:** `x=3, y=-3`  
```
3
-3
```
**Expected output:**
```
Q4
```
