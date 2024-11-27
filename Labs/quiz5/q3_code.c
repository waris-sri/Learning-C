#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_LINE_LEN 150
#define MAX_COURSE_LEN 120
#define MAX_STATUS_LEN 10
#define N_GRADES 8
#define MAX_ENROLL 7

char POSSIBLE_GRADES[N_GRADES][3] = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};

struct Course {
  // TODO 1: Declare a structure for the course enrollment
  char id[8];
  char name[MAX_COURSE_LEN];
  int credit;
  float grade;
  // END 1
};

// Convert a single character into its numerical value
// For example: '5' becomes 5
// Returns 1 if conversion successful, 0 if character is not a digit
// Result is stored in the `out` parameter
int convert_char_to_int(
    char c,
    int *out); // `out` is a pointer to store the converted integer result

// Convert a letter grade (A, B+, B, etc) into its numerical equivalent
// Returns 1 if conversion successful, 0 if invalid grade
// Result is stored in the out parameter
int convert_str_to_grade(char str[], float *out);

// Parse a CSV line of course information into its components
// Extracts course ID, name, credits and grade into the provided parameters
// Uses `convert_char_to_int()` and `convert_str_to_grade()` for conversion
void parse_course(char line[], char *course_id, char *course_name, int *credit,
                  float *grade);

// TODO 2: Create two function prototypes for the functions:
//         - create_course
//         - compute_gpa
// (Look from the code hints in `main()`)

// Function prototype for `create_course` function
// Takes a char array `line[]` as input parameter
// Returns a struct `Course` as the function's return type
struct Course create_course(char line[]);
float compute_gpa(struct Course courses[], int n, char status[]);
// END 2

int main() {
  int n = 0;
  char status[MAX_STATUS_LEN];
  float gpa;
  struct Course courses[MAX_ENROLL];
  char line[MAX_LINE_LEN];
  while (fgets(line, MAX_LINE_LEN, stdin) != NULL) {
    if (strlen(line) <= 1) {
      break;
    }
    courses[n] = create_course(line);
    n++;
  }

  char *pos;
  if ((pos = strchr(line, '\n')) != NULL)
    *pos = '\0';

  gpa = compute_gpa(courses, n, status);

  printf("================== Enrollment ==================\n");
  for (int i = 0; i < n; i++) {
    struct Course c = courses[i];
    printf(
        "%s %s %d %.2f\n",
        // TODO 3: Add Course ID, Course Name, Course Credit, and Course Grade
        c.id, c.name, c.credit, c.grade);
  }
  printf("------------------------------------------------\n");
  printf("GPA: %.2f\nSTATUS: %s\n", gpa, status);
  printf("================================================\n");
  return 0;
}

int convert_char_to_int(char c, int *out) {
  if (c >= '0' && c <= '9') {
    *out = c - '0';
    return 1;
  } else {
    *out = -1;
    return 0;
  }
}

int convert_str_to_grade(char str[], float *out) {
  float grade = 4.0;
  for (int i = 0; i < N_GRADES; i++) {
    if (strcmp(str, POSSIBLE_GRADES[i]) == 0) {
      *out = grade;
      return 1;
    }
    grade -= 0.5;
    if (grade == 0.5) {
      grade = 0.0;
    }
  }
  return 0;
}

void parse_course(char line[], char *course_id, char *course_name, int *credit,
                  float *grade) {
  int state = 0, j = 0;
  char grade_str[3];
  for (int i = 0; (line[i] != '\0' && line[i] != '\n'); i++) {
    if (line[i] == ',') {
      state++;
      j = 0;
      continue;
    }
    switch (state) {
    case 0:
      course_id[j] = line[i];
      course_id[j + 1] = '\0';
      break;
    case 1:
      course_name[j] = line[i];
      course_name[j + 1] = '\0';
      break;
    case 2:
      convert_char_to_int(line[i], credit);
      break;
    case 3:
      grade_str[j] = line[i];
      grade_str[j + 1] = '\0';
      break;
    default:
      break;
    }
    j++;
  }
  convert_str_to_grade(grade_str, grade);
}

// TODO 4: Define the function create_course
//         This function must call `parse_course`

// Declares a function named `create_course` that takes a char array (`line[]`)
// as input and returns a struct `Course`. The function will parse the input
// line and create a new `Course` struct containing the course details
struct Course create_course(char line[]) {

  // Create a new `Course` struct to store course information
  struct Course c;

  // Parse the input line to extract course details
  // `parse_course` will fill in:
  // - `c.id` with the course ID
  // - `c.name` with the full course name
  // - `c.credit` with the number of credits
  // - `c.grade` with the numeric grade value
  // We pass pointers (&) to credit and grade since they need to be modified
  parse_course(line, c.id, c.name, &c.credit, &c.grade);

  // Return the populated `Course` struct
  return c;
};
// END 4

// GPA < 1.5, Status: `"RETIRED"`
// GPA >= 1.5 and GPA < 1.8, Status: `"PRO 1"`
// GPA >= 1.8 and GPA < 2.0, Status: `"PRO 2"`
// GPA >= 2.0, Status: `"NORMAL"`

// TODO 5: Define the function compute_gpa
float compute_gpa(struct Course courses[], int n, char status[]) {
  float gpa = 0;
  float credits = 0;
  for (int i = 0; i < n; i++) {
    struct Course c = courses[i];
    gpa += c.credit * c.grade;
    credits += c.credit;
  }
  gpa /= credits;
  if (gpa < 1.5) {
    // `status = "NORMAL"` doesn't work because strings can't be assigned or
    // equated that way
    strcpy(status, "RETIRED");
  } else if (gpa >= 1.5 && gpa < 1.8) {
    strcpy(status, "PRO 1");
  } else if (gpa >= 1.8 && gpa < 2.0) {
    strcpy(status, "PRO 2");
  } else if (gpa >= 2.0) {
    strcpy(status, "NORMAL");
  }
  return gpa;
}
// END 5
