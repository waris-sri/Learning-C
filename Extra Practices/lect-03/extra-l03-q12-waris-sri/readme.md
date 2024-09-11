## Lesson 03 Extra Practice: Q12
Every year the tuition fee at the C Programming Academy will be increased by 5 percent a year. The tuition fee of this year is `T` Baht per year. Calculate each year's tuition fee (starting from 2023) and determine the final tuition fee and the year when the tuition fee is more than `M` Baht.

The program must take `T` and `M` respectively, calculate and display each year tuition fee as shown in the example below.


<hr>

**Sample Input/Output**

**Input**: Tuition fee `T` is 75,000 Baht and `M` is 100,000 Baht
```
75000
100000
```
**Output**:
The program calculate each year tuition fee until the fee is more than `M` 
(100,000 Baht). Then, display the final fee

```
Year:2024, Fee: 78750.00
Year:2025, Fee: 82687.50
Year:2026, Fee: 86821.88
Year:2027, Fee: 91162.97
Year:2028, Fee: 95721.12
Year:2029, Fee: 100507.17
In 2029, the final fee is 100507.17 Baht
```

**Explanation of Output**: The fee will be calculated cumulatively from the previous tuition fee plus 5%, for example,
* In 2024, the fee is calculated from 75000 + 5% = 78750.00
* In 2025, the fee is calculated from 78750 + 5% = 82687.50
* In 2026, the fee is calculated from 82687.50 + 5% = 86821.88
...
  
The calculation keeps going until the amount of fee is more than the target `M`, which is in the year of 2029 (100507.17 Baht)
