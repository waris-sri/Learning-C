## Lesson 06 (1D-Array) Extra Practice: Q5 (Move 0s to the end of the array)
Write a program to receive a total of `10 positive integers or 0`, and store them in a array. Then, move all the zeros in this array to the end of the array.

**Note:** You can assume that the user will input only positive integers or 0.

* **This is a tricky question. If you can't do it, it's ok.**

<hr>

**Case 1**

**Input:** `{3, 4, 0, 0, 5, 7, 8, 0, 1, 2}`
```
3
4
0
0
5
7
8
0
1
2
```
**Expected output:** 
```
3, 4, 5, 7, 8, 1, 2, 0, 0, 0
```

<hr>

**Case 2**

**Input:** `{0, 0, 0, 5, 4, 8, 0, 0, 0, 0}`
```
0
0
0
5
4
8
0
0
0
0
```
**Expected output:** 
```
5, 4, 8, 0, 0, 0, 0, 0, 0, 0
```

<hr>

**Case 3**

**Input:** `{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}`
```
0
1
2
3
4
5
6
7
8
9
```
**Expected output:** 
```
1, 2, 3, 4, 5, 6, 7, 8, 9, 0
```
