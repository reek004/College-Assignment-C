#include<stdio.h> 
 
int main(){
     int n ,sum=0,digit;
     printf("Enter a 5 digit number ");
     scanf("%d",&n);
     for (int i = 1; i<=5; i++)
     {
        digit = n%10;
        sum=sum+digit;
        n=n/10;
    }
     printf("%d",sum);
    return 0;
}