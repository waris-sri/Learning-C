[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/oHMV1kCO)
## Dot Product

Write a program to compute a dot product operation.

First, the program receives an integer, `n` (assume that `n>0`), and creates two arrays of size `n`. Then it asks the user to fill in **integer numbers** for both arrays (one-by-one). Then, compute and print out the dot-product between the two arrays.

Suppose we specify two arrays: `A={1,2,3,4,5}` and `B={8,1,2,3,4}` as follows:
```
5
1 2 3 4 5
8 1 2 3 4
```

The dot-product between these two arrays can be computed as follows:

```
A•B = (A1*B1) + (A2*B2) + (A3*B3) + (A4*B4) + (A5*B5)
    = (1*8) + (2*1) + (3*2) + (4*3) + (5*4)
    = 48
```

**Note**: You must use arrays to store the input numbers and perform the operations from the arrays, otherwise, you will get a ZERO score. 

<hr>

**Case 1:**

Sample input:
```
5
2 4 4 -6 -3
-4 0 3 7 -1
```
Sample output:
```
-35
```

**Case 2:**

Sample input:
```
1
13
13
```
Sample output:
```
169
```