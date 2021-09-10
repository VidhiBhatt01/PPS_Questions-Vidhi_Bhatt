#include<stdio.h>
int main()
{
    double n1,n2,n3;
    printf("Enter n1: ");
    scanf(" %lf", &n1);
    printf("Enter n2: ");
    scanf(" %lf", &n2);
    printf("Enter n3: ");
    scanf(" %lf", &n3);

    printf("\n");
    if(n1>n2)
    {
        if(n1>n3)
            printf("%.2lf is largest", n1);
        else
            printf("%.2lf is largest", n3);
    }
    else
        {
        if(n2>n3)
            printf("%.2lf is largest", n2);
        else
            printf("%.2lf is largest", n3);
    }
    printf("\n\n");
    return 0;

}
