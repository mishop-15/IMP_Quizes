#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[8];
    for(int i =0;i<8;i++){
        cin>>a[i];
    }
    int x = a[1], y= 0;
    for(int i=2;i<8;i+=2){
        if(a[0]==a[i]){
            y=a[i+1];
        }
    }
    int area = (x-y)*(x-y);
    cout<<area<<endl;
}
