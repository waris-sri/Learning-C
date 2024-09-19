[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/SD_X23-R)
## Search for a Number in a 2D Array

Write a program that allows a user to search for a particular number in a 2-D array (or a matrix) of size `n*m`.

In particular, the program first receives the number of rows (`n`) and columns (`m`) for the matrix. Then it asks the user to fill in the values. Next, it asks the user to input a number that he/she is looking for (`num`). Finally, it prints out ALL of the indices that have the same value as `num`.

Suppose the user inputs the following matrix:
```
3 3
1 2 3
1 2 3
1 2 5
```
Then the user specifies the value to be searched for a match in the array.

* If found, the program prints out the **ALL of the indices**. 
```
3
[0,2] [1,2]
```
Here the value 3 are at the 1st-row/3rd-col (i.e., `[0,2]`) and the 2nd-row/3rd-col (i.e., `[1,2]`).

* Otherwise, the program prints `Not found`. For example, 
```
42
Not found
```

<hr>

**Case 1**

Sample input:
```
3 3
1 2 3
1 2 3
1 2 5
5
```
Sample output:
```
[2,2]
```

**Case 2**

Sample input:
```
3 3
1 2 3
1 2 3
1 2 5
3
```
Sample output:
```
[0,2] [1,2]
```

**Case 3**

Sample input:
```
3 3
1 2 3
1 2 3
1 2 5
42
```
Sample output:
```
Not found
```