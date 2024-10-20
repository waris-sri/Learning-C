## Function Extra Practice: Q3 (Hamburger Dine-In)

### ======== Please use code template in main.c to start your coding. =========

Write a program to calculate the **total payment** of a hamburger order.

At first, There are four types of patties and the price of each type is as follows:

* `Meat (M)` is `50 Thai Baht` per patties
* `Pork (P)` is `40 Thai Baht` per patties
* `Fish (F)` is `45 Thai Baht` per patties
* `Chicken (C)` is `30 Thai Baht` per patties
* **Otherwise,** there is **no patties** burger.

Customer need to choose **types of patties** and how many **patties** that he/she want.

Besides, a customer can choose how many cheese that he/she want and Cheese is `10 Thai Baht` per sheet.

The program must **take inputs** from a customer.

* **If customer input negative number in `number of patties` or `number of cheese`, Program will display**

```
Can't sell, Good Bye.
```

**and terminate the program.**

**Finally,** the program calculates the total payment of that order including bun price `20 Thai Baht`, and prints the result with **2 decimal points** on the screen.

For example, the total amount of the order with `10` patties of **fish** burger and **5 cheese** is `(45 * 10) + (5 * 10) + 20 = 520.00 Thai Baht`.

**Note:** In this problem, You need to use `cashier` function to complete the code.

<hr>

**Case 1:**

**Inputs:**

```
F 10 5
```

**Expected outputs:**

```
Total Price: 520.00
```

<hr>

**Case 2:**

**Inputs:**

```
A 10 10
```

**Expected outputs:** Because `A` is not in any type of patties, so this burger is **not have any patties**.

```
Total Price: 120.00
```

<hr>

**Case 3:**

**Inputs:**

```
M 20 0
```

**Expected outputs:**

```
Total: 1020.00
```

<hr>
