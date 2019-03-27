#include <stdio.h>
void main()
{
    int n,arr[1000],i,max=0,min=0,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=min=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        x=i;
        }
        else if(arr[i]<min)
        {
        min=arr[i];
        y=i;
        }
    }
    printf("%d",x-y);
 }
