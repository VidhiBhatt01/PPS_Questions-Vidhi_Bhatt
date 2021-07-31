#include<stdio.h>
int main()
{
    // Que = Ask the user to enter a number between 1 to 7 and print the day of week accordingly
    int no;
    printf("Enter a number between 1 to 7: ");
    scanf("%d", &no);

    switch(no)
    {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;

    }
    printf("\n");
    return 0;
}
