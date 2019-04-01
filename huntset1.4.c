#include <stdio.h>

int main()
{
   int n,a[100],i,j,f=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   
   for(i=0;i<n;i++)
   {f=0;
     for(j=i+1;j<n;j++)
     {
           if(a[i]==a[j])
           {
               f++;
               a[j]='$';
               
           }
            
             
     }
             
     if(f==0 && a[i]!='$')
     {
       printf("%d",a[i]);
     }   
           
           
   }
               
           
   
   

   
   
    return 0;
}
