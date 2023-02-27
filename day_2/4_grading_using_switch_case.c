#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("Grade O\n");
        break;
    case 8:
        printf("Grade E\n");
        break;
    case 7:
        printf("Grade A\n");
        break;
    case 6:
        printf("Grade B\n");
        break;
    case 5:
        printf("Grade C\n");
        break;
    case 4:
        printf("Grade D\n");
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Grade F\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}