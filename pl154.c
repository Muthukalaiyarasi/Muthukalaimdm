#include <stdio.h>

int main()
{
char s[1000];
int k,i;
gets(s);
scanf("%d",&k);

for(i=0+k-1;s[i]!='\0';i=i+k)
{
    
    if(s[i]>=97 && s[i]<=122)
			s[i]=s[i]-32;

    
}    printf("%s ",s);
    return 0;
}
