#include <stdio.h>
int main()
{
    int p,a,i,j,peri,ar,flag=0;
	scanf("%d %d",&p,&a);
	for(i=1;i<=(p/2);i++)
	{
	    for(j=1;j<=(p/2);j++)
	{
	    peri=2*(i+j);
	    ar=i*j;
	    if(peri==p && ar==a)
	    {
	        printf("yes");
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	    break;
	}
	if(flag==0)
	{
	    printf("no");
	}
	return 0;
}
