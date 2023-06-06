#include<stdio.h> 
#include<conio.h>
 
void main(){
     int n;
     printf("Enter the integer ");
     scanf("%d",&n);
     isPalindrome(n);

}
int isPalindrome(int x){
    int lstdgt;
    int r=0;
    int n=x;
    printf("%d",n);
     while(n!=0){
           lstdgt=n%10;
           r=(r*10)+lstdgt;
           n /= 10;
     }

     if(r==x){
         printf("True");
     }
     else {
      printf("False");
      }
       

}