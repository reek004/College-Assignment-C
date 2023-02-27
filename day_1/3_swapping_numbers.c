#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value of a after swapping %d, value if b after swapping %d", a, b);

    return 0;
}