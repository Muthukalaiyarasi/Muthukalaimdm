#include <stdio.h>
#include <string.h>
int main()
{
   char s[20];
 int n,c=0,count=0;
  printf("Enter a character\n");
  scanf("%s", s);
 
  n=strlen(s);
  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count=1;
    c++;
  }
    if(count==1)
    {
        printf("yes");
    }
    else
    {
        printf("not");
    }

    return 0;
}
