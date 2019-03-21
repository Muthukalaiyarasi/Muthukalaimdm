#include<stdio.h>
#include<conio.h>
int main()
{
    char ar[1000];
    int c=0,c1=0,i,s=0;
    scanf("%s",&ar);
    for(i=0;ar[i]!='\0';i++)
    {
        if(ar[i]%2==0)
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    if(c>0 && c1>0)
    {
        s=c*c1;
    }
    printf("%d",s);
    return 0;
}
