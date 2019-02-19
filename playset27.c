#include <stdio.h>

int main(void) {
	char a1[10];
	scanf("%s",a1);
	int i,u,v;
	for(i=0;a1[i]!='\0';i++)
	{
		u=a1[i];
		if(u>91)
		{
			v=u-32;
			a1[i]=v;
		}
		if(u<97)
		{
			v=u+32;
			a1[i]=v;
		}
	}
	printf("%s",a1);
	return 0;
}
