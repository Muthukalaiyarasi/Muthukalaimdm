#include<stdio.h>
	#include <string.h>
	int main()
	{
	  char str1[98],str2[90];
	  int a1,a2;
	  printf("enter the strings");
	  scanf("%s",&str1);
	  scanf("%s",&str2);
	  a1=strlen(str1);
	  a2=strlen(str2);
	  if(a1>a2)
	  {
	    printf("%s",str1);
	  }
	  else if(a2>a1)
	  {
	    printf("%s",str2);
	  }
	  else
	  {
	    printf("%s",str2);
	  }
	  return 0;
	  }
