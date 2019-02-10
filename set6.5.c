#include<stdio.h>
	

	int main() 
	{
	  int n,a,b;
	  
	  printf("enter the two numbers");
	  scanf("%d%d",&a,&b);
	  n=a*b;
	  if(n%2==0)
	  {
	  printf("product is even");
	  }
	  else
	  {
	    printf("product is odd");
	  }
	

	  return 0;
	}
