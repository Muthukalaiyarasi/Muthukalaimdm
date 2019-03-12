#include <stdio.h>
#include<math.h>

int main()
{
   int N,ar[100000],i,j,c=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&ar[i]);
   }
   
      for(i=0;i<N;i++)
   {
       
      for(j=i+1;j<N;j++)
   {
      if(ar[i]<ar[j])
      c++;

   
       
     
   }
   
   }
   printf("%d",c);
    return 0;
}
