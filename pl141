#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    
    int i,j,k,l,m,N,c=0,d=0;
    char a[100][100];

    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<N;i++)
    {
        l=strlen(a[i]);
        for(j=i+1;j<N;j++)
        {
        m=strlen(a[j]);
        if(l==m)
        {
            for(k=0;k<m;k++)
            {
                if(a[i][k]==a[j][k])
                {
                    c++;
                }
            }
            if(c==m)
            {
                d=1;
                break;
            }
            else
            {
                d=0;
            }
        }
           
        }
    }
    if(d==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}
