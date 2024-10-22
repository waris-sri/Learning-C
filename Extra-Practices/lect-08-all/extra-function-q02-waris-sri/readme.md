## Function Extra Practice: Q2 (Hamburger Pattern)

### ======== Please use code template in main.c to start your coding. =========

Write a C program to print a **delicious hamburger**. First, the program receive an integer, `p`, while `p` must be a positive integer greater than `1`. After that, the program receive an integer, `isCheese` to indicate this burger have cheese or not?

Then, the program must print a delicious hamburger using asterisk (*), as followed:

**Input:** `p = 2 , isCheese = 0`

**Expected output:**

```
    B B B B 
  B B B B B B
  B B B B B B
* * * * * * * *
* * * * * * * *
  B B B B B B
  B B B B B B
```

**Explanation of Example:**

* The upper bun **top width** is `(4 * p) - 4` and **other** is `(4 * p) - 2`.
* The patties will have the **height** of `p` and **width** of `p * 4`.
* The lower bun **width** is `(4 * p) - 2`.
* `isCheese = 0` show that burger doesn't have cheese.

**Note:** You **must** to use function to make burger.

<hr>

**Case 1:** `p = 2 , isCheese = 1`

**Expected output:**

```
    B B B B 
  B B B B B B 
  B B B B B B 
* * * * * * * * 
- - - - - - - - 
* * * * * * * * 
- - - - - - - - 
  B B B B B B 
  B B B B B B 
```

<hr>

**Case 2** `p = 3 , isCheese = 0`

**Expected output:**

```
    B B B B B B B B 
  B B B B B B B B B B
  B B B B B B B B B B
* * * * * * * * * * * * 
* * * * * * * * * * * * 
* * * * * * * * * * * * 
  B B B B B B B B B B 
  B B B B B B B B B B 
```

<hr>

**Case 3** `p = 4 , isCheese = 0`

**Expected output:**

```
    B B B B B B B B B B B B 
  B B B B B B B B B B B B B B 
  B B B B B B B B B B B B B B 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
  B B B B B B B B B B B B B B 
  B B B B B B B B B B B B B B 
```

<hr>

**Case 4** `p = 3 , isCheese = 1`

**Expected output:**

```
    B B B B B B B B 
  B B B B B B B B B B
  B B B B B B B B B B
* * * * * * * * * * * * 
- - - - - - - - - - - - 
* * * * * * * * * * * * 
- - - - - - - - - - - - 
* * * * * * * * * * * * 
- - - - - - - - - - - - 
  B B B B B B B B B B 
  B B B B B B B B B B 
```

<hr>

**Case 4** `p = 4 , isCheese = 1`

**Expected output:**

```
    B B B B B B B B B B B B 
  B B B B B B B B B B B B B B 
  B B B B B B B B B B B B B B 
* * * * * * * * * * * * * * * * 
- - - - - - - - - - - - - - - - 
* * * * * * * * * * * * * * * * 
- - - - - - - - - - - - - - - - 
* * * * * * * * * * * * * * * * 
- - - - - - - - - - - - - - - - 
* * * * * * * * * * * * * * * * 
- - - - - - - - - - - - - - - - 
  B B B B B B B B B B B B B B 
  B B B B B B B B B B B B B B 
```

<hr>
