#include<stdio.h>
int main(){
    int i,j,n,d;
    char ch;
    printf("Enter the number of lines ");
    scanf("%d",&n); 
 
    for(i=1;i<=n;i++)
    { 
        d=1;
       
        for(j = 1;j<=i;j++){
              ch = (char)d+96;
             printf("%c ",ch);
             d++; 
        }
       
        printf("\n");
    
    }

    
}