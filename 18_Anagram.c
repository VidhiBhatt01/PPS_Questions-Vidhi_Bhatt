#include <stdio.h>
int check_Anagram(char [], char []);

int main()
{
    char a[100];
    char b[100];
    printf("Enter a: ");
    scanf("%s",a);
    printf("Enter b: ");
    scanf("%s",b);

    int x = check_Anagram(a,b);

    if(x==1)
    {
        printf("String is an Anagram");
    }
    else
    {
        printf("String is not an Anagram");
    }

    return 0;
}

int check_Anagram(char a[] , char b[])
{
    int first[26]={0};
    int second[26]={0};
    int c=0;


    while (a[c] != '\0')
    {
        first[a[c]-'a']++;
        c++;
    }

    c=0;

    while (b[c] != '\0')
    {
        second[b[c]-'a']++;
        c++;
    }

    for (c=0; c<26;c++)
    {
        if(first[c] != second[c])
            return 0;
    }
    return 1;
}

