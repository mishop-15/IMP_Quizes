#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int heights[n]; 
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    int maxHeight = heights[0];
    for (int i = 1; i < n; i++) {
        maxHeight = max(maxHeight, heights[i]);
    }
    for (int row = maxHeight; row > 0; row--) {
        for (int col = 0; col < n; col++) {
            if (heights[col] >= row) {
                cout << "O ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }

    return 0;
}