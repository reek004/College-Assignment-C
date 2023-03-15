#include <stdio.h>

int main()
{
    int x, y, i;
long long result = 1;
    printf("Enter the number:");
    scanf("%d", &x);
    printf("Enter the power:");
    scanf("%d", &y);
    for (i = 1; i <= y; i++)
    {
        result = x * result;
    }
    printf("The result is %lld ", result);

    return 0;
}