## Lesson 06 (1D-Array) Extra Practice: Q3 (Count character appearance)
Write a program that takes characters as input until the user inputs `1`, and stores these characters in a 1D array. Then, count the occurrences of each character in the array.

* User are required to use a **nested loop** to solve this problem

**Hint:**

* A array can be used to store individual characters or the count of characters.
* You can use a nested loop to search for and count each character.
* You can use library `ctype.h` to solve this problem.
* You need to count **both uppercase and lowercase alphabet**.

<hr>

**Case 1**

**Input:** `{'a', 'b', 'a', 'c', 'c', 'a', 'd', 'e', 'f', 'f', 'b', 'g'}`
```
a
b
a
c
c
a
d
e
f
f
b
g
1
```
**Expected output:** 
```
a=3 b=2 c=2 d=1 e=1 f=2 g=1
```

<hr>

**Case 2**

**Input:** `{'x', 'y', 'a', 'a', 'x', 'x', 'x', 'c'}`
```
x
y
a
a
x
x
x
c
1
```
**Expected output:** 
```
a=2 c=1 x=4 y=1
```
