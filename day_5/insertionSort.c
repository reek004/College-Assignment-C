#include <stdio.h>

int main()
{
    int n, a[25], i, j, k, flag = 0;
    printf("Enter number of elements :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %dth element :", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n - 1; i++)
    {
        k = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > k)
            {
                a[j + 1] = a[j];
                flag = 1;
            }
            else
            {
                break;
            }
        }
        if (flag)
        {
            a[j + 1] = k;
        }
    }
    printf("sorted list in ascending order \n :");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}