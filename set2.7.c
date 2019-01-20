#include<stdio.h>
#include<conio.h>
void main()
{
    int n,t=0,i,j,rem,c=0,n1,n2,sum;
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n1!=0)
    {
        c++;
        n1=n1/10;
    }
    while(n2!=0)
    {
        rem=n2%10;
        for(i=0;i<c;i++)
        {
            sum=sum*rem;
        }
        t=t+sum;
        n2=n2/10;
        sum=1;
    }
    if(n==t)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();

}
