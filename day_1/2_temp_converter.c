
#include <stdio.h>

int main()
{
    float fahrenheit;
    printf("Enter the temperature in fahrenheit \n");
    scanf("%f", &fahrenheit);

    printf("The temperature in celcius scale will be %.02f ", (fahrenheit - 32) * 5 / 9);

    return 0;
}