#include <stdio.h>
#include<string.h>
int main()
{
char ar[100][1000],t[1000],r1[1000];
int i,l,n,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",ar[i]);
}
strcpy(t,ar[0]);
for(i=1;i<n;i++)
    {
         strcpy(r1,ar[i]);
            if(r1[0]<t[0])
            {
                strcpy(t,r1);
            }
            else if(r1[0]==t[0])
            {
                l=strlen(t);
                s=strlen(r1);
                if(s<l)
                {
                    strcpy(t,r1);
                }
            }
            else
            {
            }
    }
puts(t);
return 0;
}
