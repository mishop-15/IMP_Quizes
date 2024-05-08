#include<bits/stdc++.h>
using namespace std;
int sumofDigits(int);

int sumofdigit1toN(int n){
    int result = 0;
    for(int i = 1;i<=n;i++){
        result += sumofDigits(i);
    }
    return result;
}

int sumofDigits(int x){
    int sum = 0;
    while(x!=0){
        sum += x%10;
        x /= 10;
    }
    return sum;
}


int main(){
    int n;
    cin >> n;
    cout << sumofdigit1toN(n)<<'\n';
    return 0;
}
