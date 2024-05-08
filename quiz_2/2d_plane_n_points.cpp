#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};
struct Pair {
    Point p1, p2;
};

int main() {
    int n;
    cin >> n;

    Pair pairs[n];
    for (int i = 0; i < n; ++i) {
        cin >> pairs[i].p1.x >> pairs[i].p1.y >> pairs[i].p2.x >> pairs[i].p2.y;
    }

    int parallel = 0, intersect = 0, identical = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int slope1_x = pairs[i].p2.x - pairs[i].p1.x;
            int slope1_y = pairs[i].p2.y - pairs[i].p1.y;
            int slope2_x = pairs[j].p2.x - pairs[j].p1.x;
            int slope2_y = pairs[j].p2.y - pairs[j].p1.y;

            if (slope1_x * slope2_y == slope1_y * slope2_x) {
                parallel++;
            }
            else if ((pairs[i].p1.x - pairs[i].p2.x) * (pairs[j].p1.y - pairs[j].p2.y) != (pairs[i].p1.y - pairs[i].p2.y) * (pairs[j].p1.x - pairs[j].p2.x)) {
                intersect++;
            }
            else if (pairs[i].p1.x == pairs[j].p1.x && pairs[i].p1.y == pairs[j].p1.y && pairs[i].p2.x == pairs[j].p2.x && pairs[i].p2.y == pairs[j].p2.y) {
                identical++;
            }
        }
    }

    cout << "PARALLEL: " << parallel << endl;
    cout << "INTERSECT: " << intersect << endl;
    cout << "IDENTICAL: " << identical << endl;

    return 0;
}
