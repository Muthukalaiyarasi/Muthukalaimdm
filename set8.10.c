#include <stdio.h>
	
	int main()
	{
	    long int num;
	    int re,i=0,j,a[100];
	    scanf("%ld",&num);
	    while(num!=0)
	    {
	        re=num%10;
	        if(!(re%2==0))
	        {
	            a[i]=re;
	            i++;
	        }
	        num=num/10;
	    }
	    for(j=i-1;j>=0;j--)
	    {
	        printf("%d",a[j]);
	    }
	    return 0;
	}
