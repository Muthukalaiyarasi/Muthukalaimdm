#include <stdio.h>

int main()
{
    int a,b,c,d=0,rem,bin=0,base=1;
    scanf("%d %d",&a,&b);
    c=a*b;
    while(c)
    {
        
        rem=c%2;
        c=c/2;
     bin=bin+(rem*base);
     
        base=base*10;
        
    }
    
    while(bin>0)
    {
          rem=bin%10;
        bin=bin/10;
           
        if(rem==1)
        {  d++;
            
        }
           
        
    }
   printf("%d",d);
}
