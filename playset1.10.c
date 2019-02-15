#include <stdio.h>
#include<string.h>
int main()
{
   char s1[100000],s2[100000];
   int l1,l2,count=0,d=0,i;
   scanf("%s %s",s1,s2);
      l1=strlen(s1);
   l2=strlen(s2);
   if(l1==l2)
   {
   for(i=0;s1[i]!='\0';i++)
   {
    
           if(s1[i]==s2[i])
           {
               d++;
           }
           else
           {
               count++;
           }
       }
   }
if(count==1)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
