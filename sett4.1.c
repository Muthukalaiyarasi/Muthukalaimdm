#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int len;
printf("enter the string");
scanf("%[^\n]s",str);
len=strlen(str);
printf("%d",len);

return 0;
}
