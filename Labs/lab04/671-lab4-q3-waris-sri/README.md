[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/XIArg2fY)
# Another Guessing Game

Write a program that simulates a guessing number game. The number that a player has to guess is `42`.

At the beginning, the game waits for the player to input a number. If the player inputs an incorrect number, the program prints out whether the number is less than (i.e., `too low`) or greater than (i.e., `too high`) the correct number. 

When the player inputs the correct number, the program prints out `You WIN :)`. If the player cannot guess the correct number within `5` times, the program prints out `You LOSE :(`. (i.e., the maximum number of guesses is `5`).

<hr>

**Case 1**

Sample input:
```
1
49
56
42
```
Sample output:
```
too low
too high
too high
You WIN :)
```

**Case 2**

Sample input:
```
42
```
Sample output:
```
You WIN :)
```

**Case 3**
Sample input:
```
1 
100
12
77
52
```
Sample output:
```
too low
too high
too low
too high
too high
You LOSE :(
```
