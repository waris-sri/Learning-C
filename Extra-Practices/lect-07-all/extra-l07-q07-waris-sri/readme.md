## Lesson 07 (2D-Array) Extra Practice: Q7 (Symmetric Metrix)

Write a program to check whether a matrix of size `nxn` is a **Symmetric Matrix** or not. The program should take a positive integer `n` as input, where `n > 1`. Then, the program should repeatedly input integer values, _one at a time_, and populate a `nxn` matrix with the data. After receiving the matrix, the program should determine whether it is a **Symmetric Matrix or not** and display the result as follows:

* If it is a Symmetric Matrix, the program should output `Symmetric`.
* If it is **not** a Symmetric Matrix, the program should output `Asymmetric`.

**Note:** you can assume that the user will always input a positive integer `n`, where n > 1, and the matrix elements will always be integers.

**FYI: A Symmetric Matrix** is a matrix that remains unchanged when its rows and columns are swapped (transposed).

**Example:**

**A:**

```
1 3 1
3 5 0
1 0 9
```
**A (Transpose):**

```
1 3 1
3 5 0
1 0 9
```

<hr>

**B:**

```
1 0 3
7 5 4
6 2 9
```

**B (Transpose):**

```
1 7 6
0 5 2
3 4 9
```

Therefore, Matrix B is **not** a Symmetric Matrix, while Matrix A is a Symmetric Matrix.

<hr>

**Example 1:**

**Input:** `n = 3`

```
3
1 2 3
1 1 0
3 1 1
```

**Expected output:** The program will display the following result:

```
Asymmetric
```
<hr>

**Example 2:**

**Input:** `n = 2`

```
2
1 2
2 1
```

**Expected output:** The program will display the following result:

```
Symmetric
```
<hr>
