#include <stdio.h>

int main()
{
   int n,a[100],i,j,b[100],k=0,c=0,m,f=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   
   for(i=0;i<n;i++)
   {
      c=0; 
 
       for(j=i+1;j<n;j++)
       {
                 if(a[i]!='$'&&a[j]!='$')
                 {
           if(a[i]==a[j])
           {
               f++;
               c++;
             a[j]='$'; 
             
           }
             
               
           }
           
       }if(c!=0)
           {
              // printf("%d\n",a[i]);
            b[k]=a[i];
             k++;
               
               
           }
   }
   

    for(i=0;i<k;i++)
   {
       
   for(j=i+1;j<k;j++)
   {
     if(b[i]!='$'&&b[j]!='$')
       {
           
             
         if(b[i]>b[j])
         {
             
         m=b[i];
         b[i]=b[j];
         b[j]=m;
         
           
           
           
    
   }}}}for(i=0;i<k;i++)
   {
    
    
    printf("%d ",b[i]);
   }
   if(f==0)
   printf("unique");
   
    return 0;
}
