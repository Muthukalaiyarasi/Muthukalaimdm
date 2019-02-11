#include <stdio.h>
	
	int main()
	{
	    int numb,i,flag=0;
	    scanf("%d",&numb);
	    for(i=2;i<numb;i++)
	    {
	        if(numb%i==0)
	        {
	            flag=1;
	            break;
	        }
	    
	    }
	    if(flag==1)
	    {
	        printf("yes");
	    }
	     else
	    {
	        printf("no");
	    }
	    return 0;
	}
