
#include <stdio.h>

int main()
{
    char str[1000];
int k,i;
scanf("%s",str);
scanf("%d",&k);

for(i=0+k-1;str[i]!='\0';i=i+k)
{
printf("%c ",str[i]);
}
    return 0;
}
