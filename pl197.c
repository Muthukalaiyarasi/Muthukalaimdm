#include<stdio.h>

void main()
{
    int a[100],i,j,answer,n,max=0,min=0;
   
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
     if(a[i]>max)
        max=a[i];
    
    if(a[i]<min)
       min=a[i];
     
    }
    answer=max-min;
    printf("%d",answer);


}
