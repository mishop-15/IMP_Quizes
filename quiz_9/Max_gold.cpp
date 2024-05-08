#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m[100][100] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cin>>m[i][j];
        }
    }

    for(int i = n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            m[i][j]=max(m[i+1][j], m[i+1][j+1]);
        }
    }
    cout<< m[0][0];
    
    return 0;
}
