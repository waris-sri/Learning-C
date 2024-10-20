## Lesson 07 (2D-Array) Extra Practice: Q6 (Remove a Match Row in the Matrix)

Write a program to **remove a match row** in an input matrix.

**In particular**, the program first receives the number of `rows` and `columns`, and then asks a user to fill in values.

To search for a row match, program will ask the user to input the value for a row to be removed.

If the input value to search **match** with any number in that row in the input matrix, the program will remove that row.

**Finally,** it will prints out the **outputs**.

* **If program remove every row,** the program will just prints `The Matrix is empty after removal`.

**Note:** You need to create new matrix to receive values after matrix remove, **If you ignore and use loop to skip printing row, your score will be deducted to 0.**

<hr>

**Case 1 - Found a match**

Suppose the user inputs the following matrix:

```
5 3
1 5 19
5 10 15
19 3 2
1 2 3
0 4 8
```

Then the user input the following value:

```
19
```

These input value **match** with the number in the row index `0,2`. The program then remove row index `0,2` and finally, the program will print out the following outputs:

```
5 10 15
1 2 3
0 4 8
```

<hr>

**Case 2 - Every row removed**

Suppose the user inputs the following matrix:

```
3 3
0 0 1
0 1 0
1 0 0
```

Then the user input the following value:

```
1
```

These input value **match** with the number in **every row**. The program then remove **every row** and finally, the program will print out the following outputs:

```
The Matrix is empty after removal
```

<hr>

**Case 3 - No matched**

Suppose the user inputs the following matrix:

```
3 3
0 0 1
0 1 0
1 0 0
```

Then the user input the following value:

```
2
```

These input value **not match** with the number in **every row**. The program then not remove anything and finally, the program will print out the following outputs:

```
0 0 1
0 1 0
1 0 0
```

<hr>
