#include <stdio.h>
int main()
{
    
    char s[1000000];
    int len=0,i;
    
    scanf("%[^\n]",s);

 
 for(i=0;s[i]!='\0';i++)
 {
     if(s[i]==' ')
     {
         len++;
     }
 }
  printf("%d",len+1);
    return 0;
}
