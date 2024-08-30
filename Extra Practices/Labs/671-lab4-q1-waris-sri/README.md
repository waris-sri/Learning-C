[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/djdz5BKK)
# Print Number Sequence (Advanced)

Write a program to print a sequence of increasing numbers according to the given starting point (`start`), the end point (`end`) and the step size (`step`). The program MUST prints the output sequence with `-` between the numbers.

Suppose the user specifies the `start`, `end` and `step` as follows:
```
2 11 2   // start=2, end=11, step=2
```
The program will print out the output as follows:
```
2-4-6-8-10
```
Note: The program does NOT print `12` as `12` is greater than the end point `11`.

**Hint**: You may use `if` statement to check whether the next number is greater than the end point before printing `-`. 

<hr>

**Case 1**

Sample input:
```
1 21 2
```
Sample output:
```
1-3-5-7-9-11-13-15-17-19-21
```

**Case 2**

Sample input:
```
1 12 3
```
Sample output:
```
1-4-7-10
```

**Case 3**

Sample input:
```
1 2 2
```
Sample output:
```
1
```

