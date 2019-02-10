#include <stdio.h>

int main()
{
  int c=0,i;
  char str[100];
  printf ("enter the line");
  gets (str);
  for(i=0;str[i];i++)
  {
    if(str[i]==' ')
    c++;
  }
  printf("%d",c);
return 0;
}
