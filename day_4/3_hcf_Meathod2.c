#include<stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 = n1-n2;
        else
            n2 = n2-n1;
    }
    printf("HCF = %d",n2);

    return 0;
}
