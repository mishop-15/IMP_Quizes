#include<bits/stdc++.h>
using namespace std;
int main(){
 int a[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> a[i][j];
        }
    }
     long long int x=a[0][1]*a[0][2]*a[0][3]*a[0][0];
     long long int y=a[1][3]*a[2][3]*a[3][3];
     long long int z=a[3][1]*a[3][2]*a[3][0];
     long long int w=a[1][0]*a[2][0];
     long long int result=x*y*z*w;
        cout << result << '\n';
    return 0;
}
