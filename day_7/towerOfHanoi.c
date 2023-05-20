#include <stdio.h>

void TOH(int n, char source, char destination, char middle) {
    if (n == 1) {
        printf("Move disk 1 from %c -> %c\n", source, destination);
        return;
    } else {
        TOH(n - 1, source, middle, destination);
        printf("Move disk %d from %c -> %c\n", n, source, destination);
        TOH(n - 1, middle, destination, source);
    }
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    TOH(n, 'A', 'C', 'B');
    return 0;
}
