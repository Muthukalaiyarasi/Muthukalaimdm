#include <stdio.h>

int main()
{
  long N,r,base=1,bin=0,a=0;
   scanf("%ld",&N);
   
   while(N)
   {
       
       r=N%2;
       N=N/2;
       bin=bin+(r*base);
      base=base*10;
      
   }
  
   
   
   while(bin)
   {
       a++;
       r=bin%10;
       if(r==1)
       {
           
           
           printf("%d is",a);
           break;
       }
       
       
       
       bin=bin/10;
       
       
       
       
   }
    return 0;
}
