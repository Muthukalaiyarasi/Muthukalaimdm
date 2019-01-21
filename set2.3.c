#include <stdio.h>

int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    if(n<=1000)
{
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    s=1;
    break;
}
if(s==0)
{
    printf("yes");
}
}
else
{
    printf("no");
    
}
    return 0;
}
