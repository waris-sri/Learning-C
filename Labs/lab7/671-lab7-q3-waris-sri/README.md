[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/lnod2jjf)
## Sum of Each Column

Write a program to compute the sum of each column of an input 2-D array.

In particular, the program first receives the number of rows (`n`) and columns (`m`) for the input matrix. Then it asks the user to fill in the values. Finally, it computes the sum of each column of the input matrix, and prints out the results.

Suppose the user inputs the following matrix:
```
3 4
1 2 3 7
6 5 4 1
1 2 3 8
```
The program then computes the sum of each column:
* 1st column `1 + 6 + 1 = 8`
* 2nd column `2 + 5 + 2 = 9`
* 3rd column `3 + 4 + 3 = 10`
* 4th column `7 + 1 + 8 = 16`

and prints out the results
```
8 9 10 16 
```

<hr>


**Case 1**

Sample input:
```
3 2
-8 7
1 0
41 8
```
Sample output:
```
34 15 
```

**Case 2**

Sample input:
```
4 1
1      
3
5
7
```
Sample output:
```
16 
```

**Case 3**

Sample input:
```
1 4
7 -4 5 9
```
Sample output:
```
7 -4 5 9 
```

