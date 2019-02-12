#include <stdio.h>
int main() 
{
    int n,ar[10],temp=0,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(ar[i]>ar[j])
           {
               temp=ar[i];
               ar[i]=ar[j];
               ar[j]=temp;
           }
       }
    }
   
     if(n%2==0)
     {
         printf("%d\n",(ar[n/2]+ar[(n/2)-1])/2);
     }
     else
     {
         printf("%d\n",ar[(n-1)/2]);
     }
	return 0;
}
