#include<stdio.h>

int main() {
    int i, j, a[50], temp, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n-1; i++) {
      int flag = 0;
        for(j = 0; j < n-i-1; j++) {
            if(a[j] < a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if (flag=0){
          break;
        }
    }
    
    printf("Elements after sorting in descending order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
