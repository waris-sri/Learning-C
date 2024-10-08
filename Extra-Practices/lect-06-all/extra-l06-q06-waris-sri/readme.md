## Lesson 06 (1D-Array) Extra Practice: Q6 (Greater, Smaller or Equal?)
Write a program that takes `5` numbers as input using a **loop**. The numbers entered should be stored in array `A`. Then, take input `x` from the user. Compare each number in array `A` with `x` and replace the numbers in array `A` with characters according to the following conditions:

* If the number is greater than `x`, replace it with the letter `g`.
* If the number is less than `x`, replace it with the letter `s`.
* If the number is equal to `x`, replace it with the letter `e`.
Afterward, print the updated list.

**Note:** You can assume that the user will input only numbers.

<hr>

**Case 1**

**Input:** `A = {1, 21, 14, 5.5, -3}` and `x = 5.5`
```
1
21
14
5.5
-3
5.5
```
**Expected output:** 
```
s, g, g, e, s
```

<hr>

**Case 2**

**Input:** `A = {-3.3, 14, 88, 8, 12.5}` and `x = 3`
```
-3.3
14
88
8
12.5
3
```
**Expected output:** 
```
s, g, g, g, g
```

<hr>

**Case 3**

**Input:** `A = {9.8, -4, 11, 25, 6}` and `x = 100`
```
-9.8
-4
11
25
6
100
```
**Expected output:** 
```
s, s, s, s, s
```
