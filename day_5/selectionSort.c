#include <stdio.h>

int main()
{
    int a[100], i, j, min, n, swap;
    printf("Enter the number of elements;\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements %d :\n", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap = a[i];
            a[i] = a[min];
            a[min] = swap;
        }
    }
    printf("sorted list in ascending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}