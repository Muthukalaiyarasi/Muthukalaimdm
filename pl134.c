#include <stdio.h>
#include<conio.h>
int main()
{
   int N,a[10000],i,j,l,r,m;
   scanf("%d",&N);
   scanf("%d %d",&l,&r);
   
   
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   m=a[l-1];
      for(i=l;i<r;i++)
   {
   if(m>a[i])
   {
       m=a[i];
       
   }
   }
   

        printf("%d ",m);
       
 
   
  
    return 0;
}
