
#include <stdio.h>

int main()
{
    int n1,n2,i,a,b,s,r;
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n2;i++)
    {
        a=i;
        b=i;
        s=0;
        while(a)
        {
            r=a%10;
            s=s+r*r*r;
            a=a/10;
            
        }
        if(i==s)
        {
            printf("%d",i);
        }
    }

    return 0;
}
