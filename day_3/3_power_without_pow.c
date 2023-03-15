#include<stdio.h> 
 
int main(){
     int x,y,i,result=1;
     printf("Enter the number:");
     scanf("%d",&x);
     printf("Enter the power:");
     scanf("%d",&y);
     for(i = 1; i<=y;i++){
         result = x*result;
     }
     printf(" The result is %d ",result );

    return 0;
}