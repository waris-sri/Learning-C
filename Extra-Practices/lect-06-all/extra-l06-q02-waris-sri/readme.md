## Lesson 06 (1D-Array) Extra Practice: Q2 (Which team is the champion?)
Suppose there are two football teams (Team A and Team B) competing in a total of `n` matches. Write a program to receive the input for the number of matches `n` and two 1D arrays. Each array will store data on the number of goals scored by each team in each match, starting from the first match to match number `n`.

Compare the number of goals each team scored in each match:

* The team that scores more goals wins that match and earns **3 points**.

* The team that scores fewer goals loses that match and earns **0 points**.

* If both teams score the same number of goals, the match ends in a draw, and each team earns **1 point**.

Calculate the total score for each team and display the result, indicating which team is the winner (`A Wins!` or `B Wins!`). If both teams have the same score, display `It's a tie.`

**Note:** User must input only positive integers or 0. If user input **negative integer**, user need to input until input meet a condition.

<hr>

**Case 1**

**Input:** `n = 3` and `A = {0,3,2}` and `B = {1,3,5}`
```
3
0
3
2
1
3
5
```
**Expected output:** A get `1 points` (Lose 2 matches, Draw 1 match) and B get `7 points` (Win 2 matches, Draw 1 match), program will display `B Wins!`
```
1 7
B Wins!
```

<hr>

**Case 2**

**Input:** `n = 3` and `A = {4,2,2}` and `B = {5,2,1}`
```
3
4
2
2
5
2
1
```
**Expected output:** A get `4 points` (Win 1 match, Lose 1 match, Draw 1 match) and B get `4 points` (Win 1 match, Lose 1 match, Draw 1 match), program will display `It's a tie.`
```
4 4
It's a tie.
```

<hr>

**Case 3**

**Input:** `n : -2, -5, -1, 4` and `A = {3,1,5,2}` and `B = {0,3,2,1}`
```
-2
-5
-1
4
3
1
5
2
0
3
2
1
```
**Expected output:** A get `9 points` (Win 3 matches, Lose 1 match) and B get `3 points` (Win 1 match, Lose 3 matches), program will display `A Wins!`
```
9 3
A Wins!
```
