## Lesson 06 (1D-Array) Extra Practice: Q1 (Sum of 'k' elements)
Write a program to calculate the sum of the numbers in a array.

The program will take a positive integer `k` as the initial input. Then, the program will continuously receive inputs and store them in a array `A`.

Once the input is complete, the program will calculate the sum of the numbers in the array `A` .

**Calculation example:** When `k = 2` and `A = {-3, 4}`
The sum of the numbers (-3 and 4) in the array is (-3) + 4 = 1

**Note:**
* If user input **negative integer or zero** in `k`, program need to receive new input until it's positive integer.

<hr>

**Case 1**

**Input:** `k = 3` and `A = {1,-2,3}`
```
3
1
-2
3
```
**Expected output:** The sum of numbers in array A is `1+(-2)+3 = 2`
```
2
```

<hr>

**Case 2**

**Input:** `k = 7` and `A = {11,5,2,-3,-4,-7,50}`
```
7
11
5
2
-3
-4
-7
50
```
**Expected output:** The sum of numbers in array A is `11+5+2+(-3)+(-4)+(-7)+50 = 54`
```
54
```

<hr>

**Case 3**

**Input:** `k = -5,0,1` and `A = {2}`
```
-5
0
1
2
```
**Expected output:** The sum of numbers in array A is `2`
```
2
```

<hr>
