#include <stdio.h>

int main()
{
    char a[100];
    int c=0,i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    a[c]='.';
    a[c+1]='\0';
    printf("%s",a);
    return 0;
}
