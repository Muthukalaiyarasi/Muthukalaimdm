#include <stdio.h>
void main() {
	int n,arr[100],max,r,c,i,j;
	scanf("%d",&n);
	max=n;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	r=arr[0];
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
				c+=1;
			
		}
		if(max>c)
		{
			max=c;
			r=arr[i];
		}
		
	}
	printf("%d",r);
}
