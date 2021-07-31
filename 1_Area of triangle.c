#include<stdio.h>
int main()
{
    int base , height;
    float area;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the height: ");
    scanf("%d", &height);

    area=0.5*base*height;
    printf("The area of triangle is: %.2f",area);

    return 0;
}
