#include<bits/stdc++.h>
using namespace std;
int main(){
        int candyList[10];
        int maxCandies = -1001;
        int startLoc = 1, endLoc = 1;
        for(int i=0;i<10;i++){
            cin>>candyList[i];
        }
        int currentSum = 0;
        for(int i =0;i<10;i++){
            currentSum+=candyList[i];
            if(currentSum>maxCandies){
                maxCandies = currentSum;
                endLoc+=1;
            }
            if(currentSum<0){
                currentSum = 0;
                startLoc+=1;
            }
        }

        cout<< maxCandies <<" "<< startLoc <<" "<< endLoc << endl;

    return 0;
}