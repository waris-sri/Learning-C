// Update Struct Data Using Pointers

#include <stdio.h>

#define N 5

struct Employees {
  int id;
  char name[50];
  float salary;
};

// suppose we have to increase each employee's salary by 10%
// use `void` because we need to modify the values and not to return them
// we usually have to copy an entire structure to do something with it,
// but that can sometimes take toll on the memory, so pointers come to help

// initialize the pointer as `*employee` from `Employees` struct
// deference from the pointer for getting `salary` member with `*employee`
// (*employee).salary is equivalent to employee->salary in functionality
void updateSalary(struct Employees *employee) {
  (*employee).salary = (*employee).salary + ((*employee).salary * 0.1);
}

void printDetails(struct Employees *employee) {
  printf("ID: %d, Name: %s, Salary: $%.2f\n", (*employee).id, (*employee).name,
         (*employee).salary);
}

int main() {
  struct Employees employee[N] = {{1, "Ali", 50000.0},
                                  {2, "Bob", 60000.0},
                                  {3, "Charlie", 55000.0},
                                  {4, "Diana", 45000.0},
                                  {5, "Eve", 70000.0}};
  for (int i = 0; i < N; i++) {
    // include `&` ("points to"/"address of") because we aren't passing the
    // actual struct in, but rather passing in the reference to each of them
    updateSalary(&employee[i]);
  }

  printf("\033[1;33m=== Updated Employee Information ===\033[0m\n");
  for (int i = 0; i < N; i++) {
    printf("\033[33m");
    printDetails(&employee[i]);
    printf("\033[0m");
  }

  return 0;
}
