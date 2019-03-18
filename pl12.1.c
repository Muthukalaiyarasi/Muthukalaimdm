#include <stdio.h>

int main()
{
   int N,a[100],M,i,j,b[100],p[100],k=0,c=0,m;
   scanf("%d %d",&N,&M);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
      for(i=0;i<M;i++)
   {
       scanf("%d",&b[i]);
   }
   
   
   for(i=0;i<N;i++)
   {
      c=0; 
 
       for(j=0;j<M;j++)
       {
                 if(b[i]!='$'&&b[j]!='$')
                 {
           if(a[i]==b[j])
           {
               
               c++;
             b[j]='$'; 
             
           }
             
               
           }
           
       }if(c!=0)
           {
              // printf("%d\n",a[i]);
            p[k]=a[i];
             k++;
               
               
           }
   }
   

    for(i=0;i<k;i++)
   {
       
   for(j=i+1;j<k;j++)
   {
     if(p[i]!='$'&&p[j]!='$')
       {
           
             
         if(p[i]>p[j])
         {
             
         m=p[i];
         p[i]=p[j];
         p[j]=m;
         
           
           
           
    
   }}}}for(i=0;i<k;i++)
   {
    
    
    printf("%d sorted order ",p[i]);
   }
   
   
    return 0;
}
