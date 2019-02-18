#include <stdio.h>

int main(void) {
	int n;
	int m,a,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		m=a*a;
		s=s+m;
		n=n/10;
	}
	printf("%d",s);
	return 0;
}
