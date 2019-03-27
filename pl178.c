#include <stdio.h>

int main()
{
  char str[1000];
    int i,j,l,count;
    scanf("%[^\n]s",str);
    
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        count=1;
        for(j=i+1;j<l;j++)
        {
            if((str[i]==str[j]) && (str[j]>='a'&& str[j]<='z'))
            {
                str[j]=str[j]-32;
                count++;
            }
        }
        if(count>1)
        {
            str[i]=str[i]-32;

        }
    }
    printf("%s",str);
	
    return 0;
}
