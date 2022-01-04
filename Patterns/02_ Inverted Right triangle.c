#include <stdio.h>
int main()
{
    int rows, i, j;
    printf("Enter the row size:");
    scanf("%d", &rows);
    for (j= rows; j>=1; j--)
    {
        for (i = 1; i <= j; i++)
            printf("*");

        printf("\n");
    }
}
