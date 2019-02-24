
#include <stdio.h>

int main()
{
    int NUMBER,K,i,f=0;
	scanf("%d",&NUMBER);
	int a[NUMBER];

	for(i=0;i<NUMBER;i++)
	{
	    scanf("%d",&a[i]);
	}
for(i=0;i<NUMBER;i++)
{
    
    if(a[i]<a[i+1])
    {
       f=1;
       break;
        
     }
}if(f==0)
	printf("no");
	else
		printf("yes");
    return 0;
}
