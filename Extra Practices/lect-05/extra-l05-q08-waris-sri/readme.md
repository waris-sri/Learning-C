## Lesson 05 Extra Practice: Q8 (Zigzag)

Write a program to print a zigzag pattern of size `m (row)`.

Program will recieve 2 input:

* Size of zigzag pattern `m`.
* How many zigzag pattern do you want? `n`.

Suppose `m=4,n=2`, the program will prints the following pattern:

```
> - - -
- > - -
- - > -
- - - > 
- - > -
- > _ _
> - - -
> - - -
- > - -
- - > -
- - - >
- - > -
- > - -
> - - -
```

* If user input **negative integer or zero**, Program will display `Please input a positive integer!` and end the program.

**Note**: User can assume that m is integer only.

<hr>

**Case 1**

Sample input:
```
6
3
```
Sample output:
```
> - - - - -
- > - - - -
- - > - - -
- - - > - - 
- - - - > -
- - - - - >
- - - - > - 
- - - > - -
- - > - - -
- > - - - -
> - - - - -
> - - - - -
- > - - - -
- - > - - -
- - - > - - 
- - - - > -
- - - - - >
- - - - > - 
- - - > - -
- - > - - -
- > - - - -
> - - - - -
> - - - - -
- > - - - -
- - > - - -
- - - > - - 
- - - - > -
- - - - - >
- - - - > - 
- - - > - -
- - > - - -
- > - - - -
> - - - - -
```

**Case 2**

Sample input:
```
-5
3
```
Sample output:
```
Please input a positive integer!
```

**Case 3**

Sample input:
```
8
4
```
Sample output:
```
> - - - - - - - 
- > - - - - - - 
- - > - - - - - 
- - - > - - - - 
- - - - > - - - 
- - - - - > - - 
- - - - - - > - 
- - - - - - - > 
- - - - - - > - 
- - - - - > - - 
- - - - > - - - 
- - - > - - - - 
- - > - - - - - 
- > - - - - - - 
> - - - - - - - 
> - - - - - - - 
- > - - - - - - 
- - > - - - - - 
- - - > - - - - 
- - - - > - - - 
- - - - - > - - 
- - - - - - > - 
- - - - - - - > 
- - - - - - > - 
- - - - - > - - 
- - - - > - - - 
- - - > - - - - 
- - > - - - - - 
- > - - - - - - 
> - - - - - - - 
> - - - - - - - 
- > - - - - - - 
- - > - - - - - 
- - - > - - - - 
- - - - > - - - 
- - - - - > - - 
- - - - - - > - 
- - - - - - - > 
- - - - - - > - 
- - - - - > - - 
- - - - > - - - 
- - - > - - - - 
- - > - - - - - 
- > - - - - - - 
> - - - - - - - 
> - - - - - - - 
- > - - - - - - 
- - > - - - - - 
- - - > - - - - 
- - - - > - - - 
- - - - - > - - 
- - - - - - > - 
- - - - - - - > 
- - - - - - > - 
- - - - - > - - 
- - - - > - - - 
- - - > - - - - 
- - > - - - - - 
- > - - - - - - 
> - - - - - - -
```
