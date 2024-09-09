#include <stdio.h>

// Try to implement Sieve of Eratosthenes algorithm
// later because it's kinda cool

int main() {
  int n;

  do {
    scanf("%d", &n);
  } while (n < 2 || n > 1000);

  // Assume all numbers are prime
  // `1` = prime (true), `0` = not prime (false)
  int primes[n];
  for (int i = 0; i <= n; i++) {
    primes[i] = 1;
  }

  /*
    SIEVE:
    Mark all multiples of m as `0` iff primes[m] is `1`
    The remains are prime numbers (nor marked)
    Initialize m as 2 because the number 0 and 1 aren't primes!

    OPTIMIZE:
    All numbers smaller than m * m would have already been marked as non-prime
    by smaller primes. If m = 3, we can start marking multiples of 3 starting
    from 9 right away since numbers like 6 (= 2×3) would already have been
    marked as non-prime when you processed m = 2.
  */

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
