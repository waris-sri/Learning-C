[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/6UxRGqXK)
## Simple Linear Search

Write a program that allows a user to search for a particular number in an input array of size `n`.

Suppose a user specifies the input array as follows:

```
6
3 14 5 14 7 -1
```

Then the user specifies the value to be searched for a match in the array.

* If found, the program prints out the **index of the first appearance** (if there are more than one elements that have the same value).
* Otherwise, the program prints `Not found`.

This is an example of when a user inputs a value that is in the array.
```
14
1
```
This is an example of when a user inputs a value that is NOT in the array.
```
42
Not found
```

**Case 1**

Sample input:
```
7
1 2 3 4 5 6 42
42
```
Sample output:
```
6
```