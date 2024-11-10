/*
---------- Pointer Extra: Student Grade Analysis -----------
Student ID: 6788112
Name: Waris
Surname: Sripatoomrak
Section: 3
-------------------------------------------
*/

#include <stdio.h>

#define MAX_STUDENTS 100
#define MAX_SUBJECTS 10

// Global variables
int grades[MAX_STUDENTS][MAX_SUBJECTS];
int countAbove80 = 0;
int countAverageMiddle50 = 0;

// Function prototypes
void calculateAverage(float *averages, int num_students, int num_subjects);
void findTopPerformer(int *studentIDs, float *averages, int num_students);
void findWorstPerformer(int *studentIDs, float *averages, int num_students);

int main() {
  int studentIDs[MAX_STUDENTS];
  float averages[MAX_STUDENTS];

  int num_students, num_subjects;

  // Read the number of students and subjects
  scanf("%d %d", &num_students, &num_subjects);

  // Read student IDs and grades and store them in studentIDs and grades arrays
  for (int i = 0; i < num_students; i++) {
    scanf("%d", &studentIDs[i]);
    for (int j = 0; j < num_subjects; j++) {
      scanf("%d", &grades[i][j]);
    }
  }

  // Calculate average grades
  calculateAverage(averages, num_students, num_subjects);

  // Find and display the top performer by calling function findTopPerformer
  ////////// Start of your code  //////////
  findTopPerformer(studentIDs, averages, num_students);
  //////////  End of your code  //////////

  // Find and display the worst performer by calling function findWorstPerformer
  ////////// Start of your code  //////////
  findWorstPerformer(studentIDs, averages, num_students);
  //////////  End of your code  //////////

  // Display the count of students with average above 80
  ////////// Start of your code  //////////
  printf("Number of students with average score above 80: %d", countAbove80);
  //////////  End of your code  //////////

  // Display the count of students who average pass the middle (50).
  ////////// Start of your code  //////////
  printf("\nNumber of students with average score pass middle 50: %d",
         countAverageMiddle50);
  //////////  End of your code  //////////

  return 0;
}

// Calculate average grade for each student.
// At the end of this function, averages array and countAbove80 should be
// updated.
void calculateAverage(float *averages, int num_students, int num_subjects) {
  for (int i = 0; i < num_students; i++) {
    float sum = 0;
    ////////// Start of your code  //////////
    for (int j = 0; j < num_subjects; j++) {
      sum += grades[i][j];
    }
    averages[i] = sum / num_subjects;
    // printf("\n%d) Average: %.2f\n", i, averages[i]);
    if (averages[i] > 80) {
      countAbove80++;
    }
    // printf("%d) countAbove80: %d\n", i, countAbove80);
    if (averages[i] >= 50) {
      countAverageMiddle50++;
    }
    // printf("%d) AverageMiddle50: %d\n", i, countAverageMiddle50);
    //////////  End of your code  //////////
  }
}

// Find the student with the highest average grade
void findTopPerformer(int *studentIDs, float *averages, int num_students) {
  int topIndex = 0;
  ////////// Start of your code  //////////
  for (int i = 0; i < num_students; i++) {
    if (averages[i] > averages[topIndex]) {
      topIndex = i;
    }
  }
  //////////  End of your code  //////////
  printf("Top Performer: Student ID %d with an average grade of %.2f\n",
         studentIDs[topIndex], averages[topIndex]);
}

// Find the student with the highest average grade
void findWorstPerformer(int *studentIDs, float *averages, int num_students) {
  int worstIndex = 0;
  ////////// Start of your code  //////////
  for (int i = 0; i < num_students; i++) {
    if (averages[i] < averages[worstIndex]) {
      worstIndex = i;
    }
  }
  //////////  End of your code  //////////
  printf("Worst Performer: Student ID %d with an average grade of %.2f\n",
         studentIDs[worstIndex], averages[worstIndex]);
}
