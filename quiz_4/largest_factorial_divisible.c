#include <stdio.h>

int largest_factorial(int n) {
    int factorial = 1;
    int largest_factorial = 1;
    int i = 1;
    while (factorial <= n) {
        if (n % factorial == 0) {
            largest_factorial = factorial;
        }
        i++;
        factorial *= i;
    }
    return largest_factorial;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = largest_factorial(n);
    printf("%d\n", result);
    return 0;
}
