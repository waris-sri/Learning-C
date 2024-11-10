## Pointer Extra Practice: Q8 (Student Grade Analysis)

Write a C program to analyze student grades using student IDs and a global two-dimensional array for grades. The program should also count the number of students with an average score above 80 and pass middle 50 (Pass 50 points).

**Your Tasks:**

* The program should first take the number of students `num_students` and the number of subjects `num_subjects` as input.
* It should then read the student ID and grades for each student in each subject, storing them in appropriate arrays.
```
int grades[MAX_STUDENTS][MAX_SUBJECTS]: Global array to store grades of each student in each subject.

int studentIDs[MAX_STUDENTS]: Local array to store studentID of each student.

float averages[MAX_STUDENTS]: Local array to store average scores of each student.
```
* Implement the function `calculateAverage` to compute the average grade for each student and count the number of students with an average above 80.
* Implement the function `findTopPerformer` to identify the student with the highest average grade.
* Display the ID and average grade of the top performer.
* Implement the function `findWorstPerformer` to identify the student with the lowest average grade.
* Display the ID and average grade of the worst performer and the count of students with an average above 80 and pass middle 50.

**Constraints**

* You are Not allowed to modify the other parts of the code, except the provided sections i.e. put your code in the area start between `////////// Start of your code //////////` and `////////// End of your code //////////`. **Otherwise**, you will get a **ZERO** score.
* Use the provided global array for grades and local arrays for student IDs and averages.
* You are NOT allowed to create new variables, except for the control variables used in the repetition statement (e.g., i or j).
* Do not use any built-in C functions for sorting or finding maximum values.

**Global Variables**

```
int grades[MAX_STUDENTS][MAX_SUBJECTS]: Global array to store grades of each student in each subject.

int countAbove80: Global variable to count the number of students with an average score above 80.
int  countAverageMiddle50: Global variable to count the number of students with an average score pass middle 50.
```
<hr>

**Sample Input and Output**

**Case 1 Sample input:**
```
3 2
101
80 90
102
85 95
103
70 75
```
**Sample output:**
```
Top Performer: Student ID 102 with an average grade of 90.00
Worst Performer: Student ID 103 with an average grade of 72.50
Number of students with average score above 80: 2
Number of students with average score pass middle 50: 3
```
<hr>

**Case 2 Sample input:**
```
4 3
201
50 60 70
202
90 80 70
203
85 75 65
204
100 90 80
```
**Sample output:**
```
Top Performer: Student ID 204 with an average grade of 90.00
Worst Performer: Student ID 201 with an average grade of 60.00
Number of students with average score above 80: 1
Number of students with average score pass middle 50: 4
```
<hr>

**Case 3 Sample input:**
```
2 4
301
55 65 75 85
302
60 70 80 90
```
**Sample output:**
```
Top Performer: Student ID 302 with an average grade of 75.00
Worst Performer: Student ID 301 with an average grade of 70.00
Number of students with average score above 80: 0
Number of students with average score pass middle 50: 2
```
<hr>
