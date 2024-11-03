## Pointer Extra Practice: Q6 (Maximum Range)

**Objective:**

Write a program thats calculates the maximum range amount three numbers entered by the user.

**Instructions:**

Given the code, please write a function `find_range` to take in 4 parameters which are three numbers and address of the variable range. The function prototype will be 

```
void find_range(int x, int y, int z, int *range)
```

The program first recieves the value of `n1,n2,n3` from the user. Then, the function `find_range` is called from `main()`. The function `find_range` will find the maximum range amount three numbers and then assign the maximum range value to range variable.

The maximum range is determined by finding the difference between the highest and lowest number. For example, if the input three numbers are `2, 3, -5`, the maximum range is `8`. Since the highest number is `3` and the lowest number is `-5`, the difference between these two number is `8`. The result is printed in the `main()` as a final output.



**Note:**

You are **NOT allowed** to modify the other parts of the code, except the provided sections. Otherwise, you will get a **ZERO** score.

<hr>

**Case 1**

**Sample input:**
```
2
5
1
```
**Sample output:**
```
4
```
<hr>

**Case 2**

**Sample input:**
```
-9
9
10
```
**Sample output:**
```
19
```
<hr>

**Case 3**

**Sample input:**
```
9
9
9
```
**Sample output:**
```
0
```
<hr>

**Case 4**

**Sample input:**
```
-1
-3
-4
```
**Sample output:**
```
3
```
<hr>
