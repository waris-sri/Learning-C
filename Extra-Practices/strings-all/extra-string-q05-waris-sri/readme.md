## String Extra Practice: Q5 (Remove Symbols)

Write a program to remove symbols and spacebar (Everything that is not alphabet or number) from the input string.

**If user input non-alphabet and number string, program will display**

```
Empty string.
```

and end the program.

**Hint**: 

* You may use the built-in function in [string.h](https://www.tutorialspoint.com/c_standard_library/string_h.htm) and [ctype.h](https://www.tutorialspoint.com/c_standard_library/ctype_h.htm) to make your life **easier**.
* There is build-in function in `ctype.h` that you can use to check.

<hr>

**Case 1**

Sample input:
```
Hello World! 123 hEllO People:) 0986
```

Sample output:
```
HelloWorld123hEllOPeople0986
```

<hr>

**Case 2**

Sample input:
```
Good Morning! Now is at 9:30am
```

Sample output:
```
GoodMorningNowisat930am
```

<hr>

**Case 3**

Sample input:
```
!@#$!@#$%#$
```

Sample output:
```
Empty string.
```

<hr>
