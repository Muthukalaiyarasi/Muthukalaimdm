#include <stdio.h>
#include <math.h>
int main(void) {
	long int n,r=0,i=1,sum=0;

	scanf("%ld",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*i;
		n=n/10;
		i=i*2;
	}
	printf("%lo",sum);
	return 0;
}
