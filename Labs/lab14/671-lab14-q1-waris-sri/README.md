[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/V__h3V7_)
Write a program to summarize all items that the manager has in the company. Assume that there are currently 2 items in stocks.

The program first creates a structure, named `Item`, to store item information including:

- *id*: a unique number  e.g. 1,2,3
- *name*: a general name of item (no white space), e.g. "book", "pen", "pencil"
- *qty*: quantity of item
- *price*: item's price e.g. 100.50, 50.00 

Then, the program asks the user to input their item one by one (from Item#1 to Item#2). Finally, the program shows the information of all items.

**Note**: If you do not use `struct` to store `Item` info, you will get a ZERO score.

**Case 1:**

Sample input:
```
1
book
150
2
2
pencil
10
15.50
```
Sample output:
```
Item(#1)named book qyt: 150 (with price 2.00)
Item(#2)named pencil qyt: 10 (with price 15.50)
```

**Case 2:**

Sample input:
```
3
eraser 
6
9.0
4
pen
30
5.0
```
Sample output:
```
Item(#3)named eraser qyt: 6 (with price 9.00)
Item(#4)named pen qyt: 30 (with price 5.00)
```
