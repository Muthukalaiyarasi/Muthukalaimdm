#include<stdio.h>
	int main()
	{
	  int n,c=0,t=0;
	  printf("enter the number");
	  scanf("%d",&n);
	  while(n!=0)
	  {
	    t=n%10;
	    c++;
	    n=n/10;
	  }
	  
	  printf("%d",c);
	
	return 0;
}
