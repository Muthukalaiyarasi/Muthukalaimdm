#include <stdio.h>

int main(void) {
	int n,rem,s=0,flag=0;
	scanf("%d",&n);
	while(n>0)
	{
		if(n<10)
		{
			rem=n%10;
			s=s+rem;
			break;
		}
		if(flag==0)
		{
		rem=n%10;
		s=s+rem;
		n=n/10;
		flag=1;
		}
		else
		{
		n=n/10;	
		}
		
		
	}
	printf("%d",s);
	return 0;
}
