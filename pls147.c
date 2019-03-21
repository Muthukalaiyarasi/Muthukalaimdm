#include<stdio.h>
int main()
{
    char a1[100],b1[100];
    int i,j=0,k;
    gets(a1);
    for(i=0;a1[i]!='\0';i++)
    {
        if(a1[i]!=' ')
        {
            b1[j]=a1[i];
            j++;
        }
        if(a1[i]==' ')
        {
            for(k=j-1;k>=0;k--)
            {
                printf("%c",b1[k]);
                b1[k]='\0';
            }
            printf(" ");
            j=0;
        }
            
    }
    return 0;
        
}
