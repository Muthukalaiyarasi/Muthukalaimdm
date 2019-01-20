#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum,i;
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    getch();
}
