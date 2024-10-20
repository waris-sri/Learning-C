## Lesson 07 (2D-Array) Extra Practice: Q8 (Taobin)

In a certain **"Taobin"** vendor machine that everyone likes to order drinks from regularly, a special update has been made specifically for special customers.

In this special version of the **"Taobin"**, customers are asked whether they want to **include these ingredients or not (Y/N)?**

* Water
* Milk
* Milk Foam

Once the customer selects the ingredients, the **"Taobin"** will process the input into binary data `(0,1)` as follows:

* If the customer enters Y, it will be converted to 1, 0
* If the customer enters N, it will be converted to 0, 1

After the **"Taobin"** processes the input, it will ask the customer for a secret code to order their drink. The secret code will consist of three numbers together, such as `14, 0, -9`.

Once the input is complete, the **"Taobin"** will process the data by taking the `dot product` of the transformed ingredient data with the customer's entered secret code to determine the final drink order. The rules for determining the drink order are as follows:

* If the result is **greater than 0**, it will make an `Espresso`.
* If the result is **less than 0**, it will make a `Latte`.
* If the result is **equal to 0**, it will make an `Americano`.

After the **"Taobin"** successfully determines **the drink that the customer wants to order**, it will display the following information:

* **The ingredient selection data** that has been converted to binary (Y = 1, 0 | N = 0, 1)
* **The secret code** data (three numbers)
* **The result obtained after the dot product** (4 numbers)
* **The result of the drink order** obtained by combining the numbers obtained from the dot product

**Note:** Students can assume that the user will input water, milk, and milk foam as y or n only.

**FYI:**

The dot product is the multiplication of the corresponding elements in two arrays followed by their addition, according to the following formula:

```
A•B = (A1*B1) + (A2*B2) + (A3*B3) + (A4*B4) + ... + (An*Bn)
```

<hr>

**Example:**

**Input:** `water = y`, `milk = y`, `foam = y`, and `code = [1, 0, -1]`

```
y
y
y
1
0
-1
```

**Expected output:** The program will display the following results:

* **The ingredient selection data** converted to binary (Y = 1, 0 | N = 0, 1)
* **The secret code** data (three numbers)
* **The result obtained after the dot product** (4 numbers)
* **The result of the drink order** obtained by combining the numbers obtained from the dot product

In this example, we will calculate the dot product as follows:
```
[1, 0, 1] • [1, 0, -1] = (1*1) + (0*0) + (1*-1) = 1 + 0 - 1 = 0
```
After obtaining the first dot product, shift the index of the list storing **the ingredient data** to start from the rightmost position by 1.

```
From [1, 0, 1], it becomes [0, 1, 0]
```
Continue this process until the list **matches the rightmost number** in the ingredient data and you'll get **The result obtained after the dot product** (4 numbers).

```
[0, 0, 0, 0]
```
Once you have all 4 numbers, add them together, and you will find that the result is 0, which corresponds to the condition:

* If the result is **equal to 0**, it will make an Americano, resulting in the following final output:
```
1 0 1 0 1 0
1 0 -1
0 0 0 0
Americano
```
<hr>
