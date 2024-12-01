#include <stdio.h>

#define MAX_PACKAGE_NAME_LENGTH 50
#define MEMBER_DISCOUNT 10

// ===== DO NOT MODIFY =====
// Structure to represent a buffet package
struct BuffetPackage {
  char name[MAX_PACKAGE_NAME_LENGTH];
  float price;
};
// =========================

// Structure to represent a reservation
struct Reservation {
  // TODO1: Declare the reservation members (3 lines)
  int numPeople;
  int isMember;
  struct BuffetPackage package;
  //// END
};

// Function to calculate the total price of a reservation
float calculateTotalPrice(struct Reservation reservation) {
  // TODO2: Implement the function, you must use MEMBER_DISCOUNT constant in
  // your calculation
  float totalPrice;
  totalPrice = reservation.numPeople * reservation.package.price;
  if (reservation.isMember == 1) {
    totalPrice = totalPrice * (100 - MEMBER_DISCOUNT) / 100;
  }
  return totalPrice;
  //// END
}

int main(void) {
  // ===== DO NOT MODIFY =====
  // Define available buffet packages
  struct BuffetPackage buffetPackages[] = {
      {"Regular Buffet", 15.0}, // index 0
      {"Deluxe Buffet", 25.0},  // index 1
      {"Premium Buffet", 35.0}, // index 2
  };

  int package = 0; // 1=Regular, 2=Deluxe, and  3=Premium
  struct Reservation myReservation;
  float totalPrice = 0.0;
  // =========================

  // TODO3: Prompt the user to provide reservation details:
  // number of people, is member or not (1 or 0), and a buffet package (1, 2, or
  // 3)
  scanf("%d %d", &myReservation.numPeople, &myReservation.isMember);
  scanf("%d", &package);
  myReservation.package = buffetPackages[package - 1];
  //// END

  // TODO4: Call function calculateTotalPrice to update the totalPrice variable
  // (1 line)
  totalPrice = calculateTotalPrice(myReservation);
  //// END

  // ===== DO NOT MODIFY =====
  printf("==Reservation Details==\n");
  printf("Number of People: %d\n", myReservation.numPeople);
  printf("Membership Discount: %s\n",
         (myReservation.isMember == 1) ? "Yes" : "No");
  printf("Buffet Package: %s\n", myReservation.package.name);
  printf("Total Price: %.2f", totalPrice);
  return 0;
  // =========================
}
