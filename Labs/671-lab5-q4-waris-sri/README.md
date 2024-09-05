[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/iOAyzQLh)
# Print Sequence of Prime Numbers

Write a program to print all prime numbers up to a number `n`, where `n` must be in the range of `[2,1000]`.

In particular, the program first receives the number `n`. Then it validates whether `n` is between `2` and `1000` inclusively. After the validation, the program prints out all prime numbers up to `n`.

**Hint**: 
* To print all prime numbers up to `n`, you should use the nested loop that do the following:
    * Outer Loop: Go through each number between 2 and n.
    * Inner Loop: Check whether each number can only be divisible by 1 and itself (i.e., a prime number).
        * If so, the program prints out that number.

*If you actually would like to pass this subject, please avoid copying the code from the Internet.*

<hr>

**Case 1**

Sample input:
```
97
```
Sample output:
```
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
```

**Case 2**

Sample input:
```
1 
1001 
2
```
Sample output:
```
2 
```

**Case 3**

Sample input:
```
-1
200
```
Sample output:
```
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 
```
