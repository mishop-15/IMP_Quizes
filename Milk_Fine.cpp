#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, p, f;
    cin >> n >> p >> f;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n, greater<int>());
    int penalty = 0;
    for (int i = 0; i < n; i++) {
        int sum = arr1[i] + arr2[i];
        if (sum > p) {
            penalty += (sum - p) * f;
        }
    }
    cout << penalty;
    return 0;
}
