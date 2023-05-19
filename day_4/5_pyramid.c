#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of lines ");
    scanf("%d", &n);
    int nst=1;

    for (i = 1; i <= n; i++)
    {   int nsp=n-i;
        for (j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for ( int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        nst+=2;
        printf("\n");
    }
    return 0;
}