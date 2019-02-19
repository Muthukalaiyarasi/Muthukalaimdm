#include <stdio.h>

int main(void) {
	char arr[15];
	scanf("%s",arr);
	int i;
	for(i=0;arr[i]!='\0';i=i+3)
	{
		printf("%c",arr[i]);
	}
	return 0;
}
