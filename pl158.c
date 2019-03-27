#include <stdio.h>

int main()
{
    int a,b,c,r,bin=0,base=1,K=0,j,l[1000],f=0,m[1000],co=1;
    scanf("%d %d",&a,&b);
    c=a*b;
    while(c>0)
    {
        
        r=c%2;
        c=c/2;
     bin=bin+(r*base);
     
        base=base*10;
        
    }
    
    while(bin>0)
    {
          r=bin%10;
        bin=bin/10;
           
       
          l[K]=r;
        
         K++;  
        
    }
    
    
    for(j=K;j>0;j--)
    {
      
       m[f]=l[j];
       f++;
        
    }
    
     
    for(K=0;K<f;K++)
    {
     
     if(m[K]==1)
     {
     co++;
     if(co==2)
     {
      printf("%d",K);
    
     }
    }
    }
 
}
