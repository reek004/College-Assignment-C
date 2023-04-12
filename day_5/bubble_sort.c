#include <stdio.h>

int main()
{

    int a[50], num, i, j, temp;

    printf("Please Enter the Number of Elements you want in the array: ");

    scanf("%d", &num);

    printf("Please Enter the Value of Elements :\n");

    for (i = 0; i < num; i++)
    {

        scanf("%d", &a[i]);
    }

    for (i = 0; i < num - 1; i++)
    {

        for (j = 0; j < num - i - 1; j++)
        {

            if (a[j] > a[j + 1])
            {

                temp = a[j];

                a[j] = a[j + 1];

                a[j + 1] = temp;
            }
        }
    }

    printf("Array after implementing bubble sort: ");

    for (i = 0; i < num; i++)
    {

        printf("%d  ", a[i]);
    }

    return 0;
}