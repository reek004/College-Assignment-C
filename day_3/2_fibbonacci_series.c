#include <stdio.h>
#include<stdlib.h>

int main()
{
   int a = 0, b = 1, n, i, fib;
   printf("Number of terms you want to print :\n");
   scanf("%d", &n);
   if(n<2){
      printf("Enter a higher number");
      exit(1);
   }
   printf("%d %d ", a, b);
   for (i = 3; i <= n; i++)
   { // as the first two digit is already printed
      fib = a + b;
      printf("%d ", fib);
      a = b;
      b = fib;
   }
   return 0;
}