#include<stdio.h>
	

	int main() 
	{
	  int n,even;
	  
	  printf("enter the number");
	  scanf("%d",&n);
	  if(n%2==0)
	  {
	  even=n-2;
	  }
	  else
	  {
	    even=n-1;
	  }
	  printf("%d",even);
	  return 0;
	}
