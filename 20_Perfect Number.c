#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int sum = 0;

    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(n==sum)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a Perfect number");
    }

    return 0;
}
