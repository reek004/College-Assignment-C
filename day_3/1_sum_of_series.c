#include <stdio.h>

int main()
{
   int i, n;
   float sum = 0;
   printf("Enter the number of terms in the series : \n");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      sum = sum + (1.0 / i);
   }
   printf("The sum of the series is %.2f", sum);
   return 0;
}