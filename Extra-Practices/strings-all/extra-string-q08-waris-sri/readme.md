## String Extra Practice: Q8 (Substring)
Write a program to determine whether a word is part of another word (i.e. **substring**).

Specifically, the program first receives two words from a user. Then it determines whether the first word is part of the second word in the case-insensitive manner (i.e., uppercase and lowercase letters are treated as equivalent).

* If so, the program prints the first and the last match positions in the second word:
```
found at <first pos> to <last_pos> positions
```
* Otherwise, the program prints:
```
not found.
```
**Note:** 

* This program accepts 20 characters at maximum for both words. So you need to think what will be the size of the input character arrays.
* You are NOT allowed to use ANY built-in functions in `string.h` , except `strlen` that returns the length of a string.
* For simplicity, you can assume that the input words contain **ONLY** letters (i.e., no symbols or digits) and contain **NO** space.

<hr>

**Case 1**

**Sample input:** 
```
Akara
akarrakaraAkara
```
**Sample output:** 
```
found at 5 to 9 positions
found at 10 to 14 positions
```

<hr>

**Case 2**
**Sample input:** 
```
Akara
Pilailuckakra
```
**Sample output:** 
```
not found
```

<hr>

**Case 3**
**Sample input:** 
```
Mahidol
mahIdOl
```
**Sample output:** 
```
found at 0 to 6 positions
```

<hr>
