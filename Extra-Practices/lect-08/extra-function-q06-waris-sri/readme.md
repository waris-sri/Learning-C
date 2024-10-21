## Function Extra Practice: Q6 (Distance Calculation)

### ======== Please use code template in main.c to start your coding. =========

Write a program to calculate 3D distance using a function called `cal_dist`, which accepts **6** parameters in the following order: `x1, y1, z1, x2, y2, z2`. 

Within the `cal_dist` function, calculate the 3D distance using the formula:

```
distance = sqrt((x1 - x2)^2 + (y1 - y2)^2 + (z1 - z2)^2)
```

After calculating the distance, round it to **two decimal places** and return the result.


**Note:** 

* You can use library `math.h` to make your life **easier**.
* Assume that number that input in every variable is **0 - 9** only.

<hr>

**Case 1**

**Input:** `x1 = 1, y1 = 2, z1 = 18, x2 = 1, y2 = 2, z2 = 0` 
```
1
2
18
1
2
0
```
**Expected output:** 
```
18.00
```

<hr>

**Case 2**

**Input:** `x1 = 1, y1 = 2, z1 = 3, x2 = 15, y2 = 1, z2 = 2` 
```
1
2
3
15
1
2
```
**Expected output:** 
```
14.07
```

<hr>

**Case 3**

**Input:** `x1 = 1, y1 = 4, z1 = 3, x2 = 2, y2 = 2, z2 = 2` 
```
1
4
3
2
2
2
```
**Expected output:** 
```
2.45
```

<hr>

**Case 4**

**Input:** `x1 = 7, y1 = 10, z1 = 4, x2 = 5, y2 = 5, z2 = 5`  
```
7
10
4
5
5
5
```
**Expected output:** 
```
5.48
```

<hr>
