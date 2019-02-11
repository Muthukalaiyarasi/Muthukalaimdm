#include <stdio.h>
	
	int main()
	{
	    int numb,i;
	    scanf("%d",&numb);
	    for(i=1;i<=numb;i++)
	    {
	        if(numb%i==0)
	        {
	            printf(" %d",i);
	        }
	    
	    }
	    
	    return 0;
	}
