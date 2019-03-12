#include <stdio.h>

int main(void) {
	int n,i=0,rem,arr[10],f=0;
	scanf("%d",&n);
	while(n>=1)
	{
		rem=n%10;
		arr[i]=rem;
		n=n/10;
		i++;
	}
	for(int j=0;j<i;j++)
	{
		for(int k=j+1;k<i;k++)
		{
			if(arr[j]==arr[k])
			{
				printf("yes");
				f=1;
				break;
			}
		}
		if(f==1)
		{
			break;
		}
	}
	if(f==0)
	{
		printf("no");
	}
	return 0;
}
