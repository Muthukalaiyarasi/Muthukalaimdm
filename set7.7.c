#include<stdio.h>
	
	int main()
	{
	   int num,r,i;
	   scanf("%d",&num);
	   r=num%10;
	   num=num-r;num=num+10;
	   printf("%d",num);
	    return 0;
	}

