#include <stdio.h>

int main()
{
    int i, j, f = 1, n, c = 0; // n=number of terms, f= factorial ,c = counter in main loop, j=second loop initializer, i = first loop initializer
    float sum = 0;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    int var =1 ; 
    for (i = 1; i <= n; i++)
    {       
        // the denominator increases by two
        c++; // counter counts the loop each time it runs
        for (j = 1; j <= var; j++)
        { // loop for getting the factorial value
            f = f * j;
        }
        if (c % 2 == 0)
        { // if counter is even then its the second term or the even term which is positive
            sum = sum + (1.0 / f);
        }
        else
        {
            sum = sum - (1.0 / f); // if the is odd that means it is the odd term which is negative
        }
        f = 1;// value of f is again changed to 1 so that the next
        var+=2; 
    }
    printf("The sum of the series is %f", sum);

    return 0;
}