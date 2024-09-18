[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Ne_pnfKu)
## Find Minimum and Maximum of 1D Array

Write a program to first receive a 1D array (e.g., `arr`) of size `n`. Then it finds **the minimum of the odd elements** (i.e., the minimum of `arr[1]`,`arr[3]`, ... ) and **the maximum of the even elements** (i.e., the maximum of `arr[0]`,`arr[2]`, ... ) in the input array. Finally, the program prints the minimum and the maximum, respectively.

Suppose the user inputs the following array:
```
7
1 9 -3 4 5 3 9
```

The program then determines the minimum of the odd elements and the maximum of the even elements, and prints out the minimum and the maximum, respectively:
```
3 9
```

**Hint**: You can use the modulus operation (`%`) to select which elements will be used to find the minimum and the maximum values.

<hr>

** Case 1 **

Sample input:
```
15
5 8 9 -10 -6 -9 -5 -8 -10 9 -8 9 9 7 -3
```

Sample output:
```
-10 9
```

** Case 2 **

Sample input:
```
2
9 10
```

Sample output:
```
10 9
```