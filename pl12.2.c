#include <stdio.h>
#include<math.h>
int main()
{
   int N,i,s=0,a[10000],c;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
  
   
   
   for(i=1;i<=N;i++)
   {
     c=ceil(N/i);
   s=s+c;
  
   
   }
printf("%d no of subarr",s);
   
    return 0;
}
