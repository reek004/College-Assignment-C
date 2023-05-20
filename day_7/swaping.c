#include<stdio.h>
int a =5, b = 4;
void swap(int *a,int *b);
int main(){
    printf("value before swapping a = %d & b = %d \n",a,b);
    swap(&a,&b);
    printf("value after swapping a = %d & b = %d\n",a,b);
}
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;

}