#include<stdio.h> 
 
int main(){
     int n;
        printf("Enter the number of lines ");
        scanf("%d",&n); 
 
     for(int i =1;i<=n;i++)
     {
        int nsp=n-i;
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        
        }
        int count = i;
        for(int k=1;k<=i;k++)
        {
            printf("%d",count);
            count++;
        }
        int count2 = count-2;
        for(int l=1; l<=i-1;l++)
        {
            printf("%d",count2);
            count2--;
        }
         printf("\n");
     }
    return 0;
}