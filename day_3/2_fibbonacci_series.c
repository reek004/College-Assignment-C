#include<stdio.h> 
 
int main(){
     int a=0,b=1,n,i,fib;
     printf("Number of terms you want to print :\n ");
     scanf("%d",&n);
     printf("%d %d ",a,b);
     for(i=3;i<=n;i++){ // as the first digit is already printed 
        fib = a + b;
        printf("%d ",fib);
        a = b;
        b = fib;
     }
    return 0;
}