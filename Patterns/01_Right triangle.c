#include <stdio.h>
int main()
{
    int rows, i, j;
    printf("Enter the row size:");
    scanf("%d", &rows);
    for (j= 1; j <= rows; j++)
    {
        for (i = 1; i <= j; i++)
            printf("*");

        printf("\n");
    }
}
