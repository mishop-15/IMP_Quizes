#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
void circleRelationship(double x1, double y1, double r1, double x2, double y2, double r2) {
    double dist_centers = distance(x1, y1, x2, y2);
    double sum_radii = r1 + r2;
    double diff_radii = abs(r1 - r2);

    if (dist_centers < sum_radii && dist_centers > diff_radii) {
        cout << "Intersect" << endl;
    } else if (dist_centers == sum_radii) {
        cout << "Tangent External" << endl;
    } else if (dist_centers < diff_radii) {
        cout << "Enclose" << endl;
    } else if (dist_centers == diff_radii) {
        cout << "Tangent Internal" << endl;
    } else {
        cout << "Disjoint" << endl;
    }
}

int main() {
    double x1, y1, r1, x2, y2, r2;
    
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    circleRelationship(x1, y1, r1, x2, y2, r2);

    return 0;
}
