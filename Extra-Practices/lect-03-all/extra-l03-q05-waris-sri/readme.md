## Lesson 03 Extra Practice: Q5
Write the program to calculate the average score of a students given multiple homework. The program must **repetitively** take the input scores until receiving `-1`. 

Then, the program will **calculate** the **average** of the input scores, display the **average** of the scores, and determine `“Pass”` and `“Fail”` of the student.

* You can assume the user will input only numbers and `-1`
* The valid score is in range of **0 and 100** inclusively. If the user input the invalid score > 100 or score < 0 but score not equal to `-1`, the program will **_skip_** the loop and take a new input.
* If the user input `-1`, the program will **_stop_** taking inputs and **calculate the 
average of “valid” score**.
* If the average score is **more than 50**, the program displays `“Pass”`; otherwise, the program displays `“Fail”`
* All output numbers are in **2 decimal places**

**Requirement:** The program must use `while` loop

<hr>

**Example 1:**
**Input:**   
```
75
80
43
-5
90
55
-1
```
**Expected output:** The program need to skip `-5` and stop to take the input at `-1`
```
68.60 Pass
```
<hr>

**Example 2:**
**Input:**
```
35
70
101
25
0
-1
```
**Expected output:** The program need to skip `101` and stop to take the input at `-1`
```
32.50 Fail
```
<hr>

**Example 3:**
**Input:**  
```
90
100
-11
200
-1
```
**Expected output:** The program need to skip `-11` and `200` and stop to take the input at `-1`
```
95.00 Pass
```
