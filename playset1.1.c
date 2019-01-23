#include <stdio.h>

int main()
{
    char str[100];
    int i,c=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        c++;
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
