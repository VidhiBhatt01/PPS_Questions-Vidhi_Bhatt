#include<stdio.h>
int main()
{

    char str[100];
    int i , count=0;

    printf("Enter the string: ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if( str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u'
           )

            count++;
    }

    printf("Total number of vowels =  %d \n", count);
    return 0;
}