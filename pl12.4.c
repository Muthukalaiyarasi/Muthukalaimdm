#include <stdio.h>

int main(void){
	int n,r,j,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		re=n%10;
		j=r*r;
		sum=sum+j;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
