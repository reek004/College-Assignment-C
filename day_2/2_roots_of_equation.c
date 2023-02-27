#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, x1, x2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 && b == 0)
    {
        printf("The equation has no solution\n");
    }
    else if (a == 0)
    {
        x1 = -c / b;
        printf("The root is x = %.2f\n", x1);
    }
    else
    {
        D = pow(b, 2) - 4 * a * c;

        if (D < 0)
        {
            printf("No real roots\n");
        }
        else
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            printf("The roots are = %.2f and = %.2f\n", x1, x2);
        }
    }

    return 0;
}