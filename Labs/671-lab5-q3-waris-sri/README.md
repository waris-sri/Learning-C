# Print Star Triangle

Write a program to print a star triangle pattern of size `n`.
Suppose `n=5`, the program will print the following pattern:

```
        * 
      * * 
    * * * 
  * * * * 
* * * * *
```

**Hint**: This problem can be solved using multiple inner loops.
- One inner loop responsible for printing spaces (` `).
- Another inner loop responsible for printing stars (`*`).

You should try to take note in the paper how the numbers of space and `*` change according to the row number. Then work out the starting point and the end point of each of the inner loops.

<hr>

**Case 1**

Sample input:
```
1
```
Sample output:
```
* 
```

**Case 2**

Sample input:
```
9
```
Sample output:
```
                * 
              * * 
            * * * 
          * * * * 
        * * * * * 
      * * * * * * 
    * * * * * * * 
  * * * * * * * * 
* * * * * * * * * 
```

**Case 3**

Sample input:
```
2
```
Sample output:
```
  * 
* * 
```
