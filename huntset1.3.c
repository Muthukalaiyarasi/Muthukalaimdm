#include <stdio.h>

int main()
{
   int n,a[100],i,j,b[100],k=0,m,f=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   
   for(i=0;i<n;i++)
   {
     
           if(i==a[i])
           {
               f++;
               b[k]=a[i];
             k++;
            
             
           }
             
               
           
           
   }
               
           
   
   

    for(i=0;i<k;i++)
   {
       
   for(j=0;j<k;j++)
           {
             
         if(b[i]<b[j])
         {
             
         m=b[i];
         b[i]=b[j];
         b[j]=m;
         
           
           
           
    
   }}}for(i=0;i<k;i++)
   {
    
    
    printf("%d ",b[i]);
   }
   if(f==0)
   printf("-1");
   
    return 0;
}
