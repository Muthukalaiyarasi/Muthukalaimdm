
#include <stdio.h>
int main()
{
    
    char s[1000];
    int len=1,i;
    
    scanf("%[^\n]",s);

 
 for(i=0;s[i]!='\0';i++)
 {
     if(s[i]=='.')
     {
         len++;
     }
 }
  printf("%d",len);
    return 0;
}
