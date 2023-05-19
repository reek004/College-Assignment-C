#include <stdio.h>

int main() {
       int array[5][5];

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &array[i][j]);
        }
    }

   
    int max_value = 1;

    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (array[i][j] > max_value) {
                max_value = array[i][j];
            }
        }
    }

    printf("The largest number in the array is: %d\n", max_value);

    return 0;
}
