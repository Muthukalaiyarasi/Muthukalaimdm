#include <stdio.h>

int main(void){
	long int n;
	int i,sum=0,r;
	scanf("%ld",&n);
	i=1;
	while(n!=0)
	{
		r=n%10;
		if(r==0)
		{
			i=i+i;
		}
		else
		{
			sum=sum+(r*i);
			i=i+i;
		}
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
