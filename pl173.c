#include <stdio.h>
#include <string.h>
void main()
{
    char str[100],str2[100],str3[100];
    int i,j=0,len,len1,k=0,sum=0;
    scanf("%[^\n]s",str);
    scanf("\n");
    scanf("%[^\n]s",str2);
    len=strlen(str);
    len1=strlen(str2);
    if(len>len1)
    {
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str2[j] && str3[i]!=' ')
        {
                str3[ka]=str[i];
            k++;
            j++;
            sum=1;
        }
        else
        {
            if(str[i]==' ' && k>0 && sum==1 )
            {
                j=j-k;
                sum=0;
        
        }
            else
            {
            j++;
            }
        }
       }
    }
    else
    {
       for(i=0;str2[i]!='\0';i++)
    {
        if(str2[i]!=str3[j] && str2[i]!=' ')
        {
                str3[k]=str2[i];
            k++;
            j++;
            sum=1;
        }
        else
        {
            if(str2[i]==' ' && k>0 && sum==1 )
            {
                j=j-k;
                sum=0;
            }
            else
            {
            j++;
            }
        }
         }
    }
printf("%s",str3);
 }
