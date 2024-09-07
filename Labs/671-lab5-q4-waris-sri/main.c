#include <stdio.h>

// Implement "Sieve of Eratosthenes"
int main() {
  int n;

  do {
    scanf("%d", &n);
  } while (n < 2 || n > 1000);

  // Assume all numbers are prime
  // 1 = prime (true), 0 = not prime (false)
  int primes[n];
  for (int i = 0; i <= n; i++) {
    primes[i] = 1;
  }

  // Sieve: Mark all multiples of m as 0 iff primes[m] is 1
  // The remains are prime numbers (nor marked)
  // Initialize m as 2 because 0 and 1 aren't primes'
  for (int m = 2; m * m <= n; m++) {
    if (primes[m] == 1) {
      for (int i = m * m; i <= n; i += m) {
        primes[i] = 0;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (primes[i] == 1) {
      printf("%d ", i);
    }
  }
}
