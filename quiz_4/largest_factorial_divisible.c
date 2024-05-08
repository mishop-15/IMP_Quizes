#include <stdio.h>
    int factorial(int n){
    int fac=1;
    for(int i=1; i<=n; i++){
        fac= fac*i;
    }
    return fac;
}
    int main() {
    int n, result;
    scanf("%d", &n);
    for(int i=0; i<20; i++){
    if(n%factorial(i)==0){
    result=i;
        }
    }
 printf("%d", result);
    }
