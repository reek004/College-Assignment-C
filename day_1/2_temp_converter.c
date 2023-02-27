// celsius to fahrenheit converter
#include <stdio.h>

int main()
{
    float celsius;
    printf("Enter the temperature in farenheit \n");
    scanf("%f", &celsius);

    printf("The temperature in celcius scale will be %.02f ", (celsius - 32) * 5 / 9);

    return 0;
}