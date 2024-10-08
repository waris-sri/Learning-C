## Lesson 06 (1D-Array) Extra Practice: Q7 (Standard Deviation)
Write a program that receives numbers of array size `n`. The numbers will be stored in an array. Calculate the average and the standard deviation of the numbers in this array.

You can find the formula for calculating the standard deviation in this link: [Standard Deviation Formula.](https://matteoconverter.com/math/standard-deviation)

The displayed results should be rounded to `2 decimal places`.

To solve this problem, you need to use **loop** only.

Hint: You can use library `math.h` to make your life **easier**.

**Note:** You can assume that the user will input only numbers, and the array must have **at least 2 elements**.

<hr>

**Case 1**

**Input:** `n = 5` and `{1, 2, 3, 4, 5}`
```
5
1
2
3
4
5
```
**Expected output:** 
```
3.00 1.58
```

<hr>

**Case 2**

**Input:** `n = 7` and `{1.5, 10.8, 3.8, -2, -4, 5.5, 12}`
```
7
1.5
10.8 
3.8
-2
-4
5.5
12
```
**Expected output:** 
```
3.94 6.04
```
