#include<stdio.h>
int main()
{
	    int a,pro=1,rem;
	    scanf("%d",&a);
	    while(a!=0)
	    {
	        rem=a%10;
	        pro=pro*rem;
	        a=a/10;
	    }
	    printf("%d",pro);
	    return 0;
	}
