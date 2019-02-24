
#include<stdio.h>
main()
{
    char a[50],b[50];
    int i,j,k,e=0,d=0;
    gets(a);
    gets(b);
    for(i=0;b[i]!=NULL;i++)
    e++;
   for(i=0;a[i]!=NULL;i++)
    {
        d=0;
        if(a[i]==b[0])
        {
            k=i;
            for(j=0;b[j]!=NULL;j++)
            {
                if(a[k]==b[j])
                {
                    d++;
                }
                else
                break;
            k++;
            }
        }
        if(d==e)
        break;
    }
    if(d==e)
    printf("yes");
    else
    printf("no");
}
