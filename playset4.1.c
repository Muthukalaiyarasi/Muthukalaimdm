#include <stdio.h>

int main(void) {
  char s[1000];
  int i,c=0,d=0,e=0;
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
  if(s[i]=='(')
  {
    c++;
  }
  if(s[i]==')')
  {
    d++;
  }
  
  }
  if(c==d)
  {
    printf("yes");

  }
  else
   {
    printf("no");
    
  }
  return 0;
}
