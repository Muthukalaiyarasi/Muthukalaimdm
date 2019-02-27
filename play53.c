#include<stdio.h>
int main()
{
    char ar[10];
    int i,count=0;
    scanf("%s",ar);
    for(i=0;ar[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
   return 0;
}
