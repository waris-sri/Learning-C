## Lesson 03 Extra Practice: Q12
Write a C program to calculate the sum of numbers divisible by 7 from `n` input numbers.

The program should take an integer `n` as input from the user. If `n` is a negative integer or equals 0, the program should terminate and display the message `Invalid input`.

If `n` is valid, the program will start receiving `n` numbers as input.
After all the inputs have been received, the program will calculate the sum of the numbers that are divisible by 7 from the `n` inputs.

**Example 1:**
**Input:** `n = -10` 
```
-10
```
**Expected output:** Since `n` is a **negative integer**, the program will display the result as
```
Invalid input
```
<hr>

**Example 2:**
**Input:** `n = 5` and then the program will receive 5 numbers as input: `7, 3, 1, 14, and 20`, respectively.
```
5
7
3
1
14
20
```
**Expected output:** After receiving all 5 numbers, the program will calculate the sum of the numbers divisible by 7 and display the result as
```
21
```
<hr>

**Example 3:**
**Input:** `n = 3` and then the program will receive 3 numbers as input: `-1, 0 and 1`, respectively.
```
3
-1
0
1
```
**Expected output:** 
```
0
```
<hr>

**Example 4:**
**Input:** `n = 2` and then the program will receive 3 numbers as input: `-7 and 7`, respectively.
```
2
-7
7
```
**Expected output:** 
```
0
```
<hr>
