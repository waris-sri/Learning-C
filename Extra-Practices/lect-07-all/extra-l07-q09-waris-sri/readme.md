## Lesson 07 (2D-Array) Extra Practice: Q9 (Replace a Match Column in the Matrix)

Write a program to **replace a match column** with **new values** in an input matrix.

**In particular**, the program first receives the number of `rows` and `columns`, and then asks a user to fill in values. Then the program prints out the following sentence Input values to search for a column match to ask the user to input the values for a column to be replaced.

If the input values to search **match** with any column in the input matrix, the program will then ask the user to input the **new values** to replace such column.

**Finally,** it will prints out the **outputs**.

* **Otherwise,** the program will just prints `Not found a match`.

**Note:** You can assume that there will be only one column that matches with the input values.

<hr>

**Case 1 - Found a match**

Suppose the user inputs the following matrix:

```
3 6
5 7 7 5 2 8 
6 3 8 2 7 8 
7 9 4 6 6 8
```

Then the user inputs the following values:

```
Input values to search for a column match
7 8 4
```

These input values match with the column index `2`. The program then ask the user to input the new values to replace such column:

```
Found a match at column 2
Input new values
0 0 0
```

Finally, the program will print out the following outputs:

```
5 7 0 5 2 8 
6 3 0 2 7 8 
7 9 0 6 6 8
```

<hr>

**Case 2 - Not found**

Suppose the user inputs the following matrix:

```
3 4
3 0 7 6 
2 6 8 6 
4 4 0 9
```

Then the user inputs the following values:

```
Input values to search for a column match
6 4 0
```

These input values **do not match** with any columns in the matrix. The program then print

```
Not found a match
```

<hr>
