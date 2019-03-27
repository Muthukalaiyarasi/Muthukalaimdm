#include<stdio.h>
void main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=(a*a)+(b*b)-(c*c);
    if(d==0)
        printf("yes");
    else
        printf("no");
}
