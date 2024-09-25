## Lesson 05 Extra Practice: Q3 (Print (x,y))

Write a program to print displays the positions of a matrix of size `nxn` up to a specified position Eg. `(x,y)`.

The program should take integer inputs for `n`, `x`, and `y` in the following order:

* `n` is the size of the matrix.
* `x` and `y` are any positions within the row and column, respectively. Note that **the positions of the matrix** start from `(0,0)` and go up to `(n-1,n-1)`.

Once you've received these inputs, the program should display the matrix positions starting from `(0,0)` up to `(x, y)`, and then stop.

Example: n=3, x=1, y=2
For a `3x3` matrix, the program should display positions from `(0,0)` up to `(1,2)` and then stop the program:

```
(0,0) (0,1) (0,2) 
(1,0) (1,1) (1,2)
```

**Note**: 
* User can assume that `x<n` and `y<n`.
* `break` is used to break only "one" loop (In case: If you break inner loop, outer loop must be continue).

<hr>

**Case 1**

Sample input: `n=3`,`x=1`,`y=1`
```
3
1
1
```
Sample output:
```
(0,0) (0,1) (0,2) 
(1,0) (1,1)
```

**Case 2**

Sample input: `n=3`,`x=2`,`y=2`
```
3
2
2
```
Sample output:
```
(0,0) (0,1) (0,2) 
(1,0) (1,1) (1,2) 
(2,0) (2,1) (2,2)
```

**Case 3**

Sample input: `n=3`,`x=0`,`y=0`
```
3
0
0
```
Sample output:
```
(0,0)
```
