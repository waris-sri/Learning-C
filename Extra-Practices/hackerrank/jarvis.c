#include <stdio.h>

// TODO 1: Implement calculateAccuracy function
float calculateAccuracy(int correct, int size) {
  return (correct * 1.0 / size * 1.0) * 100;
}
// END 1

// TODO 2: Implement calculateConfusionMatrix function
void calculateConfusionMatrix(int predictions[], int actual[], int size) {
  int tp = 0;
  int tn = 0;
  int fp = 0;
  int fn = 0;
  for (int i = 0; i < size; i++) {
    if (predictions[i] == 1 && actual[i] == 1) {
      tp++;
    }
    if (predictions[i] == 0 && actual[i] == 0) {
      tn++;
    }
    if (predictions[i] == 0 && actual[i] == 1) {
      fp++;
    }
    if (predictions[i] == 1 && actual[i] == 0) {
      fn++;
    }
  }
  printf("TP: %d, FP: %d, TN: %d, FN: %d", tp, fp, tn, fn);
}
// END 2

// Measurement function
void measurement(int predictions[], int actual[], int size) {
  int correct = 0;

  // Calculate the number of correct predictions
  for (int i = 0; i < size; i++) {
    if (predictions[i] == actual[i])
      correct++;
  }

  // Call accuracy function
  float accuracy = calculateAccuracy(correct, size);
  printf("Accuracy: %.2f%%\n", accuracy);

  // Call confusion matrix function
  calculateConfusionMatrix(predictions, actual, size);
}

int main() {
  // Input: Number of samples
  int size;
  scanf("%d", &size);

  // Input: Predictions and actual results
  int predictions[size], actual[size];

  for (int i = 0; i < size; i++) {
    scanf("%d", &predictions[i]);
  }

  for (int i = 0; i < size; i++) {
    scanf("%d", &actual[i]);
  }

  // Call measurement function
  measurement(predictions, actual, size);

  return 0;
}
