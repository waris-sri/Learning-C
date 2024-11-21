#include <stdio.h>

// TODO 1: Implement calculateAccuracy function
float calculateAccuracy(float correct, float size) {
  return (correct / size) * 100;
}
// END 1

// TODO 2: Implement calculateConfusionMatrix function
void calculateConfusionMatrix(int predictions[], int actual[], int size) {
  int TP = 0, FP = 0, TN = 0, FN = 0;
  for (int i = 0; i < size; i++) {
    if (predictions[i] == 0 && actual[i] == 0)
      TN++;
    if (predictions[i] == 1 && actual[i] == 0)
      FP++;
    if (predictions[i] == 0 && actual[i] == 1)
      FN++;
    if (predictions[i] == 1 && actual[i] == 1)
      TP++;
  }
  printf("Confusion Matrix:\n");
  printf("TP: %d, ", TP);
  printf("FP: %d, ", FP);
  printf("TN: %d, ", TN);
  printf("FN: %d", FN);
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
