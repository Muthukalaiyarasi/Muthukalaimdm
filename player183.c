#include <stdio.h>
void main() 
{
	int ar[100],n,c=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	
	for(i=0;i<n;i++)
	{
		if(ar[i]==0)
		c++; 
		if(ar[i]!=0) 
		printf("%d ",ar[i]);
	
	}
	for(j=0;j<c;j++)
		printf("%c ",'0');


}
