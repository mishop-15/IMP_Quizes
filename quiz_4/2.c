#include <stdio.h>

int largest_factorial_factor(int n) {
  int largest_factorial = 1;

  // Iterate through potential factors, starting from 2
  for (int i = 2; i <= n; i++) {
    // Divide n by the factor repeatedly as long as it's divisible
    while (n % i == 0) {
      largest_factorial = i;
      n /= i;
    }
  }

  return largest_factorial;
}

int main() {
  int n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  int largest_factor = largest_factorial_factor(n);

  printf("The largest factorial factor of %d is %d\n", n, largest_factor);

  return 0;
}
