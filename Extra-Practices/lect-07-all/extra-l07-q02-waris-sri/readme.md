## Lesson 07 (2D-Array) Extra Practice: Q2 (Det)

Write a program to take an integer input `n` between **2 and 3**, then receive numbers to create matrices `A` of size `nxn`, and calculate the determinant of `A`.

You can find the method for multiplying matrices at this link: [Determinant of matrix](https://www.geeksforgeeks.org/determinant-of-a-matrix/)

**Note:** You can assume that the user will input only integer numbers, and `n` will be `greater than 1`.

<hr>

**Case 1**

**Input:**
```
2
1 2
3 4
```
**Expected output:** `Det(A) = (1*4) - (2*3) = 4 - 6 = -2`
```
-2
```

<hr>

**Case 2**

**Input:** 
```
3
1 0 2
3 1 5
-1 2 4
```
**Expected output:** `Det(A) = 1 * [(1 * 4) - (5 * 2)] - 0 * [(3 * 4) - (-1 * 5)] + 2 * [(3 * 2) - (1 * -1)] = -6 - 0 + 14 = 8`
```
8
```

<hr>

**Case 3**

**Input:** 
```
2
1 0
0 1
```
**Expected output:** `Det(A) = (1*0) - (0*1) = 0 - 0 = 0`
```
0
```

<hr>
