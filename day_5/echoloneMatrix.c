#include<stdio.h> 
 
int main(){
     int arr[5][5],i,j;
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
        }
     }
     printf("The pattern \n");
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
     }
    return 0;
}