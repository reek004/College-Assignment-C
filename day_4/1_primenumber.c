#include<stdio.h> 
 
int main(){
     int n,i,flag=0;
     printf("Enter the number: \n");
     scanf("%d",&n);
     if(n==1){
          flag=1;
     }
     for(i=2;i<=n/2;i++){
          if(n%i==0){
               flag=1;
               break;
               }
               }
 if(flag==1){
          printf("The number is a not a prime number");
               }
 else{
     printf("The number is a prime number");
     }

     
    return 0;
}