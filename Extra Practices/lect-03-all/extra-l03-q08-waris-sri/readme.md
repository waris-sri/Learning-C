## Lesson 03 Extra Practice: Q8
Write a program to receive two UPPERCASE alphabets and display a sequence of letters from the starting alphabets to the ending alphabet.

For example: start='A' and end='D', the program must show
```
A B C D
```
If the ending alphabet come before the starting alphabet, the program must display the sequence from starting alphabet until 'Z', and loop back to 'A' until the ending alphabet.
For example, start='X' and end='B', the program must show
```
X Y Z A B
```

<hr>

**Case 1**

Sample input: start='H' and end='B'
```
H
B
```
Sample output:
```
H I J K L M N O P Q R S T U V W X Y Z A B
```

**Case 2**

Sample input: start='J' and end='P'
```
J P
```

Sample output:
```
J K L M N O P
```
