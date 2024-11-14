// YOUR CODE HERE
#include <stdio.h>

struct Date {
  int day;
  int month;
  int year;
};
typedef struct Date DATE;

struct Bank {
  int acc_num;
  char bank_name[21];
  float balance;
  DATE issued;
};

int account_compare(DATE issuedA, DATE issuedB) {
  if (issuedA.year != issuedB.year)
    return issuedA.year > issuedB.year ? 1 : -1;
  if (issuedA.month != issuedB.month)
    return issuedA.month > issuedB.month ? 1 : -1;
  if (issuedA.day != issuedB.day)
    return issuedA.day > issuedB.day ? 1 : -1;
  return 0;
}

int main() {
  struct Bank bankA;
  scanf("%d %s", &bankA.acc_num, bankA.bank_name);
  scanf("%d %d %d", &bankA.issued.day, &bankA.issued.month, &bankA.issued.year);
  scanf("%f", &bankA.balance);

  struct Bank bankB;
  scanf("%d %s", &bankB.acc_num, bankB.bank_name);
  scanf("%d %d %d", &bankB.issued.day, &bankB.issued.month, &bankB.issued.year);
  scanf("%f", &bankB.balance);

  int cmp = account_compare(bankA.issued, bankB.issued);
  printf("First Account %d (%d-%d-%d) %.2f [%s]\n", bankA.acc_num,
         bankA.issued.day, bankA.issued.month, bankA.issued.year, bankA.balance,
         bankA.bank_name);
  printf("Second Account %d (%d-%d-%d) %.2f [%s]\n", bankB.acc_num,
         bankB.issued.day, bankB.issued.month, bankB.issued.year, bankB.balance,
         bankB.bank_name);
  printf("Compare two accounts: %d\n", cmp);

  return 0;
}
