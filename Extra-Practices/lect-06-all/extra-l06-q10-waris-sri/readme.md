## Lesson 06 (1D-Array) Extra Practice: Q10 (Jellyfish RETURN)
Write a program to calculate the **total payment** of a grilled jellyfish order.

Yeah, that as same as `Extra Practice in Lesson 02`, but now our Jellyfish grill shop is **upgrade**.

There are three sizes of jellyfish - **small, medium, and large**. The price of each size is as follows:

* `Small (S)` size is `20 Thai Baht` per skewer
* `Medium (M)` size is `30 Thai Baht` per skewer
* `Large (L)` size is `40 Thai Baht` per skewer

<hr>

Besides, a customer can choose different kinds of sauce:

* `Spicy seafood` sauce is `free`
* `Mala sauce` is `15 Thai Baht` per entire order
* `Teriyaki sauce` is `15 Thai Baht` per entire order

<hr>

The program must **take inputs** from a customer.

But now, We **don't need** to enter the **jellyfish size** now.

First, enters of each **number of skewers** in size `S (Small)` | `M (Medium)` | `L (Large)`, and a **choice of sauce** using a character `S` for `spicy seafood`, `M` for `mala`, and `T` for `teriyaki`. 

Assume that all the inputs entered by a customer are always valid.

**Finally,** the program calculates the total payment of that order including `7% tax`, and prints the result with **2 decimal points** on the screen.

For example, the total amount of the order with `10` skewers of **small** / `20` skewers of **medium** / `5` skewers of **large** grilled jellyfish and **Mala sauce** is `(10 * 20) + (20 * 30) + (5 * 40) + 15 = 1015 Thai Baht`. After including `7%` tax, the total order is `1086.05 Thai Baht`.

**Hint:** You can use **array** in this problem.

<hr>

**Case 1:**

**Inputs:**

```
1 2 3 T
```

**Expected outputs:**

```
Small skewers: 1
Medium skewers: 2
Large skewers: 3
Total: 230.05
```

<hr>

**Case 2:**

**Inputs:**

```
0 5 0 S
```

**Expected outputs:**

```
Small skewers: 0
Medium skewers: 5
Large skewers: 0
Total: 160.50
```

<hr>

**Case 3:**

**Inputs:**

```
4 2 8 M
```

**Expected outputs:**

```
Small skewers: 4
Medium skewers: 2
Large skewers: 8
Total: 508.25
```

<hr>

**Case 4:**

**Inputs:**

```
100 100 100 S
```

**Expected outputs:**

```
Small skewers: 100
Medium skewers: 100
Large skewers: 100
Total: 9630.00
```

<hr>
