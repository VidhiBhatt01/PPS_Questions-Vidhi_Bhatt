#include <stdio.h>
#include <math.h>

int GCD(int,int);
int main()
{

    int num1,num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    GCD(num1,num2);
    printf("GCD= %d",GCD(num1,num2));

    return 0;

}

int GCD(int num1,int num2)
{

    if(num2>num1)
        return GCD(num2,num1);
    if(num2==0)
        return num1;
    else
        return GCD(num2,num1%num2);
}
