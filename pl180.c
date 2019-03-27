#include <stdio.h>

int main()
{
    int n,d=0,b=1,r,t=2;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        d=d+r*b;
        n=n/10;
        b=b*2;
    }
    while(d>t)
    {
        t=t*2;
    }
    if(d<t)
    {
        printf("%d",t);
    }
   return 0;
}
