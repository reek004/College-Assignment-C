#include <stdio.h>

int main()
{
      int d; // d = days
      printf("Enter the number of days: ");
      scanf("%d", &d);
      printf("%d days are equal to %d months and %d days", d, (d / 30), d % 30);
      return 0;
}