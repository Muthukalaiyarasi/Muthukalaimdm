#include <stdio.h>

int main()
{
    int arr[1000],n,i,k,f=0,p;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         if(arr[i]>k)
            {
                p=arr[i];
                f=0;
                break;
            }
    }
    if(f==0)
    {
        printf("%d",p);
    }
        
   
}
