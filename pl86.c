#include <stdio.h>


int main(void){
	int n,t=0;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=t^a[i];
	}
	printf("%d",t);
	

	return 0;
}
