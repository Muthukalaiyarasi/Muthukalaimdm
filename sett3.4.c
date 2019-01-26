#include <stdio.h>
int main() 
{
    int N,a[1000],i,j,t;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<N;i++)
    {
        for(j=i;j<N;j++)
        {
        if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }}}
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
