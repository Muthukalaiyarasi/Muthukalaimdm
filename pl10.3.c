#include <stdio.h>

int main(void) {
	int m;
	scanf("%d",&m);
	int a[m];
	int temp,i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m-1;i++)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	for(i=0;i<m;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
