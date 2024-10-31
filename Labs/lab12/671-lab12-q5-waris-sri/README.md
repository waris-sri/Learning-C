[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/69si5mtN)
Write a program to sort THREE input values in _ascending_ order. You **MUST** define and use _two_ self-defined functions, named `swap` and `sort_values`, as follows:

```
void swap(int *x, int *y);
void sort_values(int *x, int *y, int *z);
```

**Note:**

- The `swap` function is used to swap the values of two input variables.
- The `sort_values` function is used to sort the input values.
- In the `sort_values` function, you **MUST** use the swap function to sort the input values. Otherwise, you will receive a **ZERO** score.

**Case 1**
Sample input:
```
3 2 1
```
Sample output:
```
1 2 3
```

**Case 2**
Sample input:
```
2 99 8
```
Sample output:
```
2 8 99
```