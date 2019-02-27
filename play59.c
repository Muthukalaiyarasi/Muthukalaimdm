#include <stdio.h>
int main()
{
    int ar[100000],N,i,c;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<N;i++)
    {
        if(ar[i]==0)
        {
            c=i;
        }
    }
    for(i=0;i<c;i++)
    {
        if(ar[i]!=0)
        {
        printf("%d ",ar[i]);
        }
    }

}
