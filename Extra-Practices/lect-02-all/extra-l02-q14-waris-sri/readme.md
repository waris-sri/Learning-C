## Lesson 02 Extra Practice: Q14
Write a C program to display the type of coffee drink based on the input ingredients:
- water `(water:Y/N)`
- milk `(milk:Y/N)`
- milk foam `(foam:Y/N)`
in that order.

| Drink Name | Water | Milk | Milk Foam |
|:---------:|----|----|-------|
|  Espresso |  N |  N |   N   |
| Americano |  Y |  N |   N   |
|   Latte   |  N |  Y |   N   |
|Cappuccino |  N |  N |   Y   |

After receiving the input, the program will check the ingredients according to the table and output the drink's name. If the provided ingredients cannot be matched to any drink in the table, the program should display the message `No matched drink`.

**Note:** Assume that the user will only input 'Y' or 'N'.

<hr>

**Example 1:**
**Input:** `water = 'Y'`, `milk = 'N'`, and `foam = 'N'`  
```
Y N N
```
**Expected output:**
```
Americano
```
<hr>

**Example 2:**
**Input:** `water = 'Y'`, `milk = 'Y'`, and `foam = 'N'`  
```
Y Y N
```
**Expected output:**
```
No matched drink
```
<hr>
