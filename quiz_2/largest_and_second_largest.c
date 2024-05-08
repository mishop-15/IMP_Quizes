#include <stdio.h>

int main() {
    int digit1, digit2, digit3, digit4;

    scanf("%d %d %d %d", &digit1, &digit2, &digit3, &digit4);

    int sum1 = digit4 + digit3;


    int sum2 = digit4 * 10 + digit3 + digit4 * 10 + digit2;

    int sum3 = digit4 * 100 + digit4 * 10 + digit4 + digit3 * 100 + digit2 * 10 + digit1;

    printf("Sum of largest and second largest single-digit numbers: %d\n", sum1);
    printf("Sum of largest and second largest double-digit numbers: %d\n", sum2);
    printf("Sum of largest and second largest triple-digit numbers: %d\n", sum3);

    return 0;
}
