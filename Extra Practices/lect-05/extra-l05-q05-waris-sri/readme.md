## Lesson 05 Extra Practice: Q5 (Bowtie)

Write a program that takes a positive odd integer `n` greater than 1 as input and then displays the pattern as shown in the example for the number of rows `n`.

The program should accept the value of `n` only as a positive odd integer. If the user enters `n` that is not a positive odd integer, such as 0, 1, a negative integer, or an even positive integer, the program should continue to prompt for input until user input a valid positive odd integer `n`.

Once n is obtained, the program should display the result in the form of a pattern using the characters `*` and `-`.

Suppose `n=7`, the program will prints the following pattern:

```
* - - - - - * 
* * - - - * * 
* - * - * - * 
* - - * - - * 
* - * - * - * 
* * - - - * * 
* - - - - - *
```

<hr>

**Case 1**

Sample input:
```
0
-4
42
1
5
```
Sample output:
```
* - - - * 
* * - * * 
* - * - * 
* * - * * 
* - - - * 
```
<hr>

**Case 2**

Sample input:
```
-1
0
3
```
Sample output:
```
* - * 
* * * 
* - *
```
<hr>

**Case 3**

Sample input:
```
13
```
Sample output:
```
* - - - - - - - - - - - * 
* * - - - - - - - - - * * 
* - * - - - - - - - * - * 
* - - * - - - - - * - - * 
* - - - * - - - * - - - * 
* - - - - * - * - - - - * 
* - - - - - * - - - - - * 
* - - - - * - * - - - - * 
* - - - * - - - * - - - * 
* - - * - - - - - * - - * 
* - * - - - - - - - * - * 
* * - - - - - - - - - * * 
* - - - - - - - - - - - * 
```
<hr>

