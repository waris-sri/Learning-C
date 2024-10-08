## Lesson 06 (1D-Array) Extra Practice: Q4 (Find pairs that sum to 'x')
Write a program to receive integer inputs to the array size `n`. The entered numbers should be stored in a 1D array. After that, receive an integer input `x` and then print the array of entered numbers. Use a **nested loop** to find all pairs of numbers in the array whose sum equals `x`.

Note:

* Students can assume that the user will only **input integers**, and the numbers in the list **will not be duplicates**.

<hr>

**Case 1**

**Input:** `n = 6` , `{2, 1, 9, 5, 8, 10}` and `x = 10`
```
6
2
1
9
5
8
10
10
```
**Expected output:** 
```
2, 1, 9, 5, 8, 10
2 8
1 9
```

<hr>

**Case 2**

**Input:** `n = 11` , `{10, -3, 0, 5, 9, 1, 7, -2, -4, -5, 6}` and `x = 7`
```
11
10
-3
0
5
9
1
7
-2
-4
-5
6
7
```
**Expected output:** 
```
10, -3, 0, 5, 9, 1, 7, -2, -4, -5, 6
10 -3
0 7
9 -2
1 6
```

<hr>

**Case 3**

**Input:** `n = 7` , `{8, -2, 0, -1, -4, 10, 20}` and `x = 1`
```
7
8
-2
0
-1
-4
10
20
1
```
**Expected output:** Because there are no pairs of numbers in the list whose sum equals 1, no pairs of numbers are printed.
```
8, -2, 0, -1, -4, 10, 20
```
