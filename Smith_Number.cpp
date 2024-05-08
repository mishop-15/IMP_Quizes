#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int sumOfPrimeFactors(int num) {
    int sum = 0;
    for (int i = 2; i <= sqrt(num); ++i) {
        while (num % i == 0) {
            sum += sumOfDigits(i);
            num /= i;
        }
    }
    if (num > 1) {
        sum += sumOfDigits(num);
    }
    return sum;
}
bool isSmithNumber(int num) {
    return sumOfDigits(num) == sumOfPrimeFactors(num);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isSmithNumber(n)) {
        cout << "Smith Number" << endl;
    } else {
        cout << "Not Smith Number" << endl;
    }
    return 0;
}
