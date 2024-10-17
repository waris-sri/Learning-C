[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/5-75BWf9)
# Print Triangle

Write a program to print a triangle pattern of height (`h`), where `h>0`.

In particular, the program first receives the height of the triangle (`h`) and then prints out the triangle pattern.

Suppose `h=5`, the program will print the following triangle pattern:

```
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1
```

**Hint**
* Try to decompose the big problem into several sub-problems and solve them one-by-one.
* In this example, you should start by printing the triangle with any value (i.e., no need to worry about `0` and `1` yet).
* Once you have a code to print the triangle, then you change the value in the printf to print `0` and `1`.
* You may find the modulus operator (i.e., `%`) helpful in printing the `0` and `1`.

**Case 1**

Sample input:
```
7
```
Sample output:
```
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 
1 0 1 0 1 0 1 
```

**Case 2**

Sample input:
```
10
```
Sample output:
```
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 
1 0 1 0 1 0 1 
0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1 
0 1 0 1 0 1 0 1 0 1 
```

**Case 3**

Sample input:
```
1
```
Sample output:
```
1 
```
