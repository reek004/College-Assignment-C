#include<stdio.h> 
 
int main(){
     int n,r=0,lstdigit;
     printf("Enter the integer ");
     scanf("%d",&n);

     while(n!=0){
           lstdigit=n%10;
           r=(r*10)+lstdigit;
           n /= 10;
     }
     printf("%d",r);

    return 0;
}