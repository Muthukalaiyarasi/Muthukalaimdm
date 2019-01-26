#include <stdio.h>
int main() 
{
    char s[10000];
    int len=0,i,count=0;

    scanf("%s",s);
    len=strlen(s);
        for(i=0;i<len;i++)
    {
  if(s[i]>='0' && s[i]<='9' || s[i]=='.')
    {
        count++;
    }}
    if(count==len)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
return 0;
}

