## String Extra Practice: Q3 (Find word occurrance)

Write a program to input the input string, then find every occurance of input word (display index that program found).

**If user input word that not exist in string, program will display**

```
Not found.
```

and end the program.

* Uppercase and lowercase letter is **different**.

**Hint**: 

* You may use the built-in function in [string.h](https://www.tutorialspoint.com/c_standard_library/string_h.htm) to make your life **easier**.

<hr>

**Case 1**

Sample input:
```
Hello World! 123 hEllO People:) 0986
People
```

Sample output:
```
Word People found at index: 23
```

<hr>

**Case 2**

Sample input:
```
I love programming. I love DST.       
love
```

Sample output:
```
Word love found at index: 2
Word love found at index: 22
```

<hr>

**Case 3**

Sample input:
```
Good Morning! Now is at 9:30am
Evening
```

Sample output:
```
Not found.
```

<hr>
