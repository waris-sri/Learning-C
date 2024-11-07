[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/suerKP1J)
Write a program that uses the built-in functions in `string.h` to concatenate THREE input strings.

In particular, the program first receives three input strings (each has the maximum length of 10 characters). Then it combines these strings using commas (`,`). Finally, it prints out the output.

**Note**
- You are **NOT** allowed to use `printf("%s,%s,%s", str1, str2, str3);`. Otherwise, you will get a ZERO score.
- You **MUST** use the built-in functions such as `strcat()`, `strcpy()`, etc. to concatenate three strings and store the output strings in a new array (let’s say `all_strs`).
  - *Please make sure that the new array has enough room to store all characters from the three strings.*
- You should use `printf("%s", all_strs);` to print the output.
 

The following cases are the example of the inputs and their corresponding output.   


**Case 1:**

Sample input:
```
hello
World!
students
```
Sample output:
```
hello,World!,students 
```

**Case 2:**

Sample input:
```
!$*!1
MUICT
Mahidol
```
Sample output:
```
!$*!1,MUICT,Mahidol 
```
