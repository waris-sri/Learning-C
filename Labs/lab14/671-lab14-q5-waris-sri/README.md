[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/lhuzdjhq)
Create a new structure named ``Date`` containing ``day``, ``month``, and ``year`` variables. Then, use ``typedef`` to give a short name ``DATE`` to the ``Date`` structure.

Modify the ``BankAccount`` structure from the ``L14-Q4`` by adding another variable named ``issued`` with type ``DATE`` to represent the issued date of the bank account.

Create a self-defined function named ``account_compare`` which takes two bank accounts ``a``, and ``b``. The function compares the issued date between two bank accounts. If account ``a`` and account ``b`` are issued on the same date, the function returns ``0``. If account ``a`` is issued before account ``b``, the function returns ``-1``. If account ``a`` is issued after account ``b``, the function returns ``1``.

The ``main`` program asks for input from users to create two bank accounts, displays bank account info, and finally compares the issued date of those two accounts.


**Case 1**

_Input_
```
12345 Bangkok_Bank 18 11 2021 1500.50
98765 SCB 20 11 2021 900.90
```

_Output_
```
First Account 12345 (18-11-2021) 1500.50 [Bangkok_Bank]
Second Account 98765 (20-11-2021) 900.90 [SCB]
Compare two accounts: -1
```

**Case 2**

_Input_
```
12344 Bangkok_Bank 18 11 2021 200.50
98764 Kasikorn_Bank 18 11 2021 300.30
```

_Output_
```
First Account 12344 (18-11-2021) 200.50 [Bangkok_Bank]
Second Account 98764 (18-11-2021) 300.30 [Kasikorn_Bank]
Compare two accounts: 0
```

**Case 3**

_Input_
```
22344 Kasikorn_Bank 15 10 2022 1200.45
78764 Bangkok_Bank 18 11 2021 3030.30
```

_Output_
```
First Account 22344 (15-10-2022) 1200.45 [Kasikorn_Bank]
Second Account 78764 (18-11-2021) 3030.30 [Bangkok_Bank]
Compare two accounts: 1
```
