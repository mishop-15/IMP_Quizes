#include<stdio.h>
long factorial(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
         fact=fact*i;
    }
 return fact;
}
int sum_digit(long n){
    int sum=0;
     while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
 return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    long fact = factorial(n);
    int sum = sum_digit(fact);
    printf("%d\n",sum);
    return 0;
}
