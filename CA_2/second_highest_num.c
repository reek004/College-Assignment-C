#include<stdio.h> 
 
int main(){
     int a,b,c;
     printf("Enter three unique numbers:");
     scanf("%d %d %d",&a,&b,&c);
     if(a<b&&a>c||a>b&&a<c){
        printf("The second highest number is %d",a);
        }
     else if(b<a&&b>c||b>a&&b<c){
        printf("The second highest number is %d",b);
     }
     else if(c<a&&c>b||c>a&&c<b){
        printf("The second highest number is %d",c);
     }
     else {
        printf("Invalid Input");
     }
    return 0;
}