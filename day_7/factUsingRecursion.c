#include<stdio.h> 
 int fact(int x){
    if(x==0||x ==1){
        return 1;
    }
    else{
    return x*fact(x-1);
    }
}
void main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int result = fact(n);
    printf("The factorial of %d is %d",n,result);
}