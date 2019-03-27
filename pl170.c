#include<stdio.h>


int main()
{
    char a[1000],b[100],s[100];
    int i,n,j,l,c=1,maxi,k=0,p;
    
    gets(a);
    l=strlen(a);
    
    for(i=0;i<l;i++)
    {
        c=1;
        
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                
                a[j]='\0';
            }
        }
        if(a[i]!='\0')
        {
            b[k]=a[i];
            
            s[k]=c;
            
            k++;
            
            if(maxi<=c)
            
            {
                maxi=c;
            }
        }
    }
    printf("%d ",maxi);
    
    for(i=0;i<k;i++)
    {
        if(s[i]==maxi)
        {
            printf("%c",b[i]);
        }
    }
    
    return 0;
}
