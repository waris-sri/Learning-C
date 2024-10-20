## Lesson 07 (2D-Array) Extra Practice: Q1 (1,0 Matrix)

Write a program that takes an integer input to create a matrix filled with zeros **(a matrix where all the inner values are 0)** of size `mxn` (`m` = number of rows and `n` = number of columns).

The program will first receive two positive integer values, `m` (number of rows) and `n` (number of columns). Then, it will create a 2D array and fill it with 0 values in order.

Afterwards, the program will receive a value `x` **for each column** of the matrix, indicating which columns in each row should be changed from `0` to `1`.

Once all the input is received, the program will display the **2D Array** and the **resultant matrix** as output, following the provided examples.

**Note:** 
* Assume that the user will input only integer values, and `m` and `n` will be `greater than 0`.
* The value of `x` must be within the valid **range of row indices**. If the user enters an **invalid value**, the program should prompt for a **new input**.

<hr>

**Example 1:**
**Input:** `m = 3` , `n = 3` and `x = [2,1,0]`

```
3
3
2 1 0
```

**Expected output:** The program will display the following output, which is the **Resultant Matrix**.
```
0 0 1 
0 1 0 
1 0 0 
```
<hr>

**Example 2:**
**Input:** `m = 3` , `n = 4` and `x = [2,1,2,0]`
```
3
4
2 1 2 0
```
**Expected output:**  The program will display the following output, which is the **Resultant Matrix**.
```
0 0 0 1 
0 1 0 0 
1 0 1 0 
```
<hr>
