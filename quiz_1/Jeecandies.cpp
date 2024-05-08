#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0,ans=0,last,fir=1,s=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
          temp = temp + arr[i];
          if(ans<temp){
            ans = temp;
            fir = s;
            last = i;
          }
          if(temp<=0){
            temp = 0;
            s = i+1;
          }     
    }
    cout << ans <<" "<<fir+1<<" "<<last+1<< '\n';
    return 0;
}
