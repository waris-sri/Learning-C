## Lesson 07 (2D-Array) Extra Practice: Q3 (Identity Metrix)

Write a program to check whether a matrix of size `nxn` is a **Identity Matrix** or not. The program should take a positive integer `n` as input, where `n > 1`. Then, the program should repeatedly input integer values, _one at a time_, and populate a `nxn` matrix with the data. After receiving the matrix, the program should determine whether it is a **Identity Matrix or not** and display the result as follows:

* If it is a Identity Matrix, the program should output `Yes`.
* If it is **not** a Identity Matrix, the program should output `No`.

**Note:** you can assume that the user will always input a positive integer `n`, where n > 1, and the matrix elements will always be integers.

**FYI: A Identity Matrix** is a matrix that the diagonal line of matrix is `1`. Otherwise, it's 0.

**Example:**

```
1 0 0
0 1 0
0 0 1
```
<hr>
```
1 0
0 1
```

<hr>

```
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
```

<hr>

**Example 1:**

**Input:** `n = 3`

```
3
1 0 1
0 1 0
0 0 1
```

**Expected output:** The program will display the following result:

```
No
```
<hr>

**Example 2:**

**Input:** `n = 2`

```
2
1 0
0 1
```

**Expected output:** The program will display the following result:

```
Yes
```
<hr>
