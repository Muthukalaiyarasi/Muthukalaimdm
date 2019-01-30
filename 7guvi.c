#include <stdio.h>
int main()
{
    
    char s[1000000];
    int c=0,len=0,i;
    
    scanf("%[^\n]",s);
c=strlen(s);
 
 for(i=0;i<c;i++)
 {
     if(s[i]==' ')
     {
         len++;
     }
 }
  printf("%d",c-len);
    return 0;
}
