#include <stdio.h>

int main()
{
  int c=0,i;
  char str[100];
  printf ("enter the line");
  gets (str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
    c++;
  }
  printf("%d",c);
return 0;
}
