#include <stdio.h>
#define N 5
int main() {
  // Upside-down right-angled triangle
  for (int i = N; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }

  // Upright right-angled triangle
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }

  printf("\n");

  // Diamond
  // upper
  for (int i = 0; i < N; i++) {
    for (int k = N; k > i; k--) {
      printf(" ");
    }
    // left side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    // right side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }
  // lower
  for (int i = N; i > 0; i--) {
    for (int k = N; k > i; k--) {
      printf(" ");
    }
    // left side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    // right side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }

  printf("\n");

  // Egg
  // upper
  for (int i = 1; i < N - 1; i++) {
    for (int k = N; k > i; k--) {
      printf(" ");
    }
    // left side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    // right side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }
  // // middle
  // for (int i = 0; i < N - 1; i++) {
  //     printf("#");
  //     for (int j = 0; j < N - 1; j++) {
  //         printf("#");
  //     }
  // }
  // printf("\n");
  // lower
  for (int i = N - 2; i > 0; i--) {
    for (int k = N; k > i; k--) {
      printf(" ");
    }
    // left side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    // right side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }

  printf("\n");

  // Rotated rhombus
  // upper
  for (int i = 1; i < N; i++) {
    for (int k = N; k > i; k--) {
      printf(" ");
    }
    // left side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    // right side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }
  // lower
  for (int i = N; i > 0; i--) {
    for (int k = N; k > i + 1; k--) {
      printf(" ");
    }
    // left side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    // right side
    for (int j = 0; j < i; j++) {
      printf("#");
    }
    printf("\n");
  }
}
