#include <stdio.h>

int main()
{
      char str[100000];
    int i,a=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            b=str[i]-48;
            while(a)
            {
                printf("%c",str[i-1]);
                a--;
            }
        }
    }
        
   return 0;
}
