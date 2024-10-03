#include <stdio.h>

// Points assigned to each letter of the alphabet
// The name is in all caps because it contains constant values (a good practice)
//              A  B  C  D   E  F  G  H  I  J  K  L  M
//              N  O  P  Q   R  S  T  U  V  W  X  Y  Z
int POINTS[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void) {
  // Get input words from both players
  // Assume the maximum lengths are 100 characters
  char word1[100], word2[100];
  printf("Player 1: ");
  scanf("%s", word1);
  printf("Player 2: ");
  scanf("%s", word2);

  // Compute scores for both words
  int score1 = 0, score2 = 0;

  // Compute score for word1
  for (int i = 0; word1[i] != '\0'; i++) {
    if (word1[i] >= 'A' && word1[i] <= 'Z') {
      score1 += POINTS[word1[i] - 'A'];
    } else if (word1[i] >= 'a' && word1[i] <= 'z') {
      score1 += POINTS[word1[i] - 'a'];
    }
  }

  // Compute score for word2
  for (int i = 0; word2[i] != '\0'; i++) {
    if (word2[i] >= 'A' && word2[i] <= 'Z') {
      score2 += POINTS[word2[i] - 'A'];
    } else if (word2[i] >= 'a' && word2[i] <= 'z') {
      score2 += POINTS[word2[i] - 'a'];
    }
  }

  // Print the winner
  if (score1 > score2) {
    printf("Player 1 wins!");
  } else if (score1 < score2) {
    printf("Player 2 wins!");
  } else {
    printf("Tie!");
  }

  return 0;
}
