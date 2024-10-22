## Function Extra Practice: Q1 (Quadratic Equation)

### ======== Please use code template in main.c to start your coding. =========

Write a program that creates and uses a self-defined function, named `quadratic`, that receives three input numbersand then calculate the roots (Display in **TWO** decimal places number).

`D` or `Discriminant` is the quantity that is used to determine the nature of roots, you can find D by using the following equation:

```
D = b^2 - (4 * a * c) 
```

* If `D > 0` you can use the following two equations to find roots:

```
root = (-b + sqrt(D)) / (2 * a)
```

and

```
root = (-b - sqrt(D)) / (2 * a)
```

*  If `D = 0` you can use the following equation to find root:

```
output = (-b) / (2 * a)
```

* Otherwise, the program will display this message to the user, and end the program.

```
Invalid discriminant, can't compute in real number.
```


**Note:**

 * `^` is the power operation. Finally, the program prints the output with TWO decimal places.
 * **sqrt = square root**.
 * Assume that `a, b, c` are integer.

**Hint**: You may use the built-in function in `math.h` to make your life **easier**.

<hr>

**Case 1**

Sample input:
```
1 -7 12
```

Sample output:
```
Roots: 4.00 3.00
```

<hr>

**Case 2**

Sample input:
```
3 6 3
```

Sample output:
```
Root: -1.00
```

<hr>

**Case 3**

Sample input:
```
1 5 8
```

Sample output:
```
Invalid discriminant, can't compute in real number.
```

<hr>
