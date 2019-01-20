#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[10],sum=0,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
        i++;
    }
    printf("%d",sum);
    getch();

}
