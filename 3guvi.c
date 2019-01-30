#include <stdio.h>
int main()
{
    
    char s[1000];
    int len=0,i,c=0;
    
    scanf("%[^\n]",s);
    c=strlen(s);

 
 for(i=0;i<c;i++)
 {
     if(s[i]>='0' && s[i]<='9')
     {
         len++;
     }
 }
  printf("%d",len);;
    return 0;
}
