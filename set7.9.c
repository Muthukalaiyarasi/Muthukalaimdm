

#include<stdio.h>
	#include <string.h>
	

	void main()
	{
	int a,b,diff;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
	diff=a-b;
	}
	else
	{
	    diff=b-a;
	}
	if(diff%2==0)
	{
	    printf("even");
	}
	else
	{
	    printf("odd");
	}
	return 0;
	}
