#include <stdio.h>

int main()
{
int a,sum=0,rem;
scanf("%d",&a);
while(a>0)
{
    rem=a%10;
    sum=sum*10+rem;
    a=a/10;
}
printf("%d",sum);

    return 0;
}
