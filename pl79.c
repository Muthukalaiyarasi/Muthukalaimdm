#include <stdio.h>
int main() 
{
    int n,ar[10],i,j,diff,max=0;
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
	       diff=ar[i]-ar[j];
	   }
	   else
	   {
	        diff=ar[j]-ar[i];  
	   }
	   if(diff>max)
	   {
	       max=diff;
	   }
	 }
	}
	printf("%d",max);
	return 0;
}
