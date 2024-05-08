#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,w;
    cin>> v>> w;
    int tw = (w - v*2)/2;
    int fw = v- tw;
    cout<< tw << fw << endl;
    
    return 0;
}