#include<stdio.h>
int main(){
   int j, i, n, counter;
   printf("Enter the range:");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:",n);
   for(i = 1;i<=n;i++){
      counter = 0;
      for(j=2;j<=i/2;j++){
         if(i%j==0){
            counter++;
         break;
      }
   }
   if(counter==0 && i!= 1)
      printf("%d ",i);
   }
}