#include <stdio.h>

int main() {
       int array[4][4],tran[4][4];
       
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    printf("elements of the array before transpose:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("elements of the array after transpose:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            tran[i][j]=array[j][i];
            printf("%d", tran[i][j]);
        }
        printf("\n");
    }
    return 0;
}