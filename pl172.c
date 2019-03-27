#include<stdio.h>

int main()
{
    int N,ar[100],i,j,k=0,t;
    scanf("%d",&N);
    while(N>0)
    {
        ar[k]=N%10;
        N=N/10;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(ar[i]<ar[j])
            {
                t=ar[i];
                ar[i]=ar[j];
                ar[j]=t;
            }
        }
        printf("%d",ar[i]);
    }
    
    return 0;
}
