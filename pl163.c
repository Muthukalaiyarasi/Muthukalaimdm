
#include <stdio.h>

int main()
{
    int arr[1000],n,i,k,f=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        if(arr[i]==k)
        {
           f=1;
           break;
        }
    }
        if(f==1)
        {
            printf("yes");
  
        }
        else
        {
            printf("no");
        }

        

}
