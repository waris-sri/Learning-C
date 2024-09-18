## Lesson 02 Extra Practice: Q5
A Leap year is a year that has an additional day, i.e., 366 days. To determine a 
leap year, **check the following conditions**:

* If the year is divisible by 400, it is a _**leap**_ year e.g. 2400, 2800
* If the year is divisible by 100 but it is not divisible by 400, it is a **_common_** year 
e.g. 2100, 2200, 2300
* If the year does not match the two criteria above but is divisible by 4, it is a **_leap_** 
year, e.g. 2024, 2028, 2032
* Otherwise, it is a **_common_** year. E.g. 2021, 2022, 2023

Write a C program that **receive a year** from users, determine the type of year, and 
display if it is a `Common` year or `Leap` year.

<hr>

**Example 1:**
**Input:** `year=2000`  
```
2000
```
**Expected output:**
```
Leap
```
<hr>

**Example 2:**
**Input:** `year=1900`  
```
1900
```
**Expected output:**
```
Common
```
<hr>

**Example 3:**
**Input:** `year=2024`  
```
2024
```
**Expected output:**
```
Leap
```
<hr>

**Example 4:**
**Input:** `year=2023`  
```
2023
```
**Expected output:**
```
Common
```
