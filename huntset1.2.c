#include <stdio.h>

int main()
{
   int i,j,b[100],k,m;
   scanf("%d",&k);
   for(i=0;i<k;i++)
   {
       scanf("%d",&b[i]);
   }
   
   
  
   

    for(i=0;i<k;i++)
   {
       
   for(j=i+1;j<k;j++)
   {
     
           
             
         if(b[i]<b[j])
         {
             
         m=b[i];
         b[i]=b[j];
         b[j]=m;
         
           
           
           
    
   }}}
   for(i=0;i<k;i++)
   {
    
    
    printf("%d ",b[i]);
   }
   
   
    return 0;
}
