## Function Extra Practice: Q8 (Check match target)

### ======== Please use code template in main.c to start your coding. =========

Write a program to check the match `target` in Matrix `5*5` and print coordinate of that number in Matrix `[i, j]`.

At first, Program will recieve `n1` and `n2` to get a range of number. After that, the Program will count odd number by using function `count_odd` and return the counting number to `target`.

After program get target, Scan the 2-D array data by using `scanArrayData()`.

Finally, Write a program that uses the function match to check the match of the data in the array and the target. 

**You are not allowed to compare the value directly without calling the match function.**

**Note:** 

* You are **NOT** allowed to modify the other parts of the code, except the provided sections. (`//////////  Start of your code  //////////` and `//////////  End of your code  //////////`) Otherwise, you will get a **ZERO** score.
* You are **NOT** allowed to create new variables, except for the control variables used in the repetition statement (e.g., `i` or `j`). You **MUST** use the parameters provided in the file.
* You must to use only provided function.
* You must to use only provided variable.
* You are **NOT** allowed to use any built-in C functions.

<hr>

**Case 1:**

**Inputs:**

```
1 5
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
```

**Expected outputs:** (target = 3 because in range [1,5] the odd numbers are `1,3,5`)

```
The target has been found at position[2 0]
The target has been found at position[2 1]
The target has been found at position[2 2]
The target has been found at position[2 3]
The target has been found at position[2 4]
```

<hr>

**Case 2:**

**Inputs:**

```
-1 -1
1 3 5 7 9
3 5 7 9 1
5 7 9 1 3
7 9 1 3 5
9 1 3 5 7
```

**Expected outputs:** (target = 1 because in range [-1,1] the odd number is `-1`)

```
The target has been found at position[0 0]
The target has been found at position[1 4]
The target has been found at position[2 3]
The target has been found at position[3 2]
The target has been found at position[4 1]
```

<hr>

**Case 3:**

**Inputs:**

```
-3 3
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```

**Expected outputs:** (target = 4 because in range [-3,3] the odd numbers are `-3,-1,1,3`)

```
The target has been found at position[0 3]
The target has been found at position[1 3]
The target has been found at position[2 3]
The target has been found at position[3 3]
The target has been found at position[4 3]
```

<hr>
