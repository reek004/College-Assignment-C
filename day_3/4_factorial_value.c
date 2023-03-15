#include <stdio.h>

int main()
{
   int i, facto = 1, n;
   printf("Enter a number:");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      facto = facto * i;
   }
   printf("The Value Of factorial will be %d", facto);

   return 0;
}