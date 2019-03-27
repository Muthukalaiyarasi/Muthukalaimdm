#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,count=0,num1=0,sum;
    scanf("%s",str);
    j=strlen(str);
    for(i=0;i<j;i++)
    {
        if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')||(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
        {
            count++;
        }
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        {
        if((str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u')||(str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U'))
        {
        num1++;
        }
        }
    }
    sum=count*num1;
    printf("%d",sum);
}
