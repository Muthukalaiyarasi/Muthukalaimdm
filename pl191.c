#include <stdio.h>

int main()
{
    int n,a[100],b[100],c[100],i,j,k=0,d;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       
     scanf("%d",&a[i]);
       
   }
  
   
   
   for(i=0;i<n;i++)
   {
       
     scanf("%d",&b[i]);
       
   }
  
   
for(i=n-1;i>=0;i--)
{
    
    c[k]=b[i];
    k++;
}
   
  for(i=0;i<n;i++)
  {
      
      if(a[i]==c[i])
      d++;
      
      
      
  }
   
   
   if(d==n)
   printf("yes");
   else
   printf("no");
   
   
}
