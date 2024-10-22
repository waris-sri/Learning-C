## Function Extra Practice: Q9 (Lotto Function)

Imagine a simple lotto system where users choose two numbers between 1 and 10 (inclusive). A user wins the lotto if the sum of their chosen numbers matches a pre-defined winning sum.

When the program starts, it will prompt the user to enter three integers: `num1`, `num2`, and `winningSum`. If `num1` or `num2` are not in the range of 1 to 10, the program should ask the user to re-enter the number until the value is within this range.

Write a function in C named `isWinner` that determines if a participant wins the lotto based on the numbers they chose.

### Function Prototype

```c
int isWinner(int num1, int num2, int winningSum);
```

The function should return 1 if the sum of num1 and num2 equals winningSum. Otherwise, it should return 0.

**Hint**: 
* num1 (1 ≤ num1 ≤ 10): The first number input by the user.
* num2 (1 ≤ num2 ≤ 10): The second number input by the user.

<hr />

**Case 1**

Sample input:
```
3
7
10
```

Sample output:
```
1
```

**Case 2**

Sample input:
```
4
3
9
```

Sample output:
```
0
```
**Case 3**

Sample input:
```
-5
3
-8
5
15
```

Sample output:
```
0
```

**Case 4**

Sample input:
```
-2
4
-6
6
-9
```

Sample output:
```
0
```

<hr>
