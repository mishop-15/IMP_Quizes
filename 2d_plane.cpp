#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(4));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<double> slope(n);
    vector<double> intercept(n);
    for (int i = 0; i < n; i++) {
        int x1 = matrix[i][0];
        int y1 = matrix[i][1];
        int x2 = matrix[i][2];
        int y2 = matrix[i][3];
        if (x2 - x1 != 0) {
            slope[i] = static_cast<double>(y2 - y1) / (x2 - x1);
            intercept[i] = y1 - slope[i] * x1;
        } else {
          
            slope[i] = std::numeric_limits<double>::infinity();
            intercept[i] = x1; 
        }
    }
    int parallel = 0, intersect = 0, identical = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (slope[i] == slope[j]) {
                parallel++;
                if (slope[i] != std::numeric_limits<double>::infinity() && intercept[i] == intercept[j]) {
                    identical++;
                }
            } else {
                intersect++;
            }
        }
    }
    cout << "parallel: " << parallel << ", identical: " << identical << ", intersect: " << intersect << endl;
    return 0;
}
