#include <stdio.h>

int main()
{
    int n,fact=1,i;
    scanf("%d",&n);
    if(n<=20)
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("%d",fact);
    }
    else
    {
        printf("num is gteater than 20");
    }

    return 0;
}
