## Lesson 06 (1D-Array) Extra Practice: Q9 (Array Comparison)
Write a program to compare two arrays of size `n`. The program should take an input, `n`, which is the size of the arrays, and then iterate to receive the numbers for each 1D array. For example:

**Example:** `n = 3`, `A = [4, 2, 2]`, `B = [5, 2, 1]`

Then, the program should compare the values in the arrays and create a new array C of size `n`:

* If a number in array A is **greater than** the corresponding number in array B, the result in array C should be `1`.
* If a number in array B is **greater than** the corresponding number in array A, the result in array C should be `-1`.
* If the numbers in array A and array B are **equal**, the result in array C should be `0`.

**Note:** You need to know that the user need to input positive integers for `n`. If user input wrong, Program must **recieve new input from user**, and the data in arrays A and B will always be **integers**.

<hr>

**Example:** 
**Input:** `n = 3` , `A = {4, 2, 2}` , `B = {5, 2, 1}`
```
3
4 2 2
5 2 1
```

**Expected output:** Check the results for each pair of indices:

* A[0] = 4 | B[0] = 5 (B is **greater than** A, so the result in array C is `-1`)
* A[1] = 2 | B[1] = 2 (A is **equal** to B, so the result in array C is `0`)
* A[2] = 2 | B[2] = 1 (A is **greater than** B, so the result in array C is `1`)

```
-1 0 1
```

<hr>
