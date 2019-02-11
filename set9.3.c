#include <stdio.h>
	
	int main()
	{
	    long int a,b,c;
	    char d;
		scanf("%ld %c %ld",&a,&d,&c);
		if(d==37)
		{
		    b=a%c;
		}
		if(d==47)
		{
		    b=a/c;
		}
		printf("%ld",b);
	
	
	    return 0;
}
