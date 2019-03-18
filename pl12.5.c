#include <stdio.h>
 
int main()
{
   
   
   char a[20],b[20];
   int c=0,d=0,i,k;
   gets(a);
   gets(b);
   
   for(i=0;a[i]!='\0';i++)
   {
       c++;
       
   }
   
   for(i=0;b[i]!='\0';i++)
   {
       d++;
       
   }
  
    if(c>d)
    {
    for(i=c;i>d;i--)
    {
        a[i-1]=0;
      
        
     }
    }
    else 
    {
    for(i=d;i>c;i--)
    {
        b[i-1]=0;
    
        
     }
        
        
    }
    


   
   k=0;
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]!=0)
     {
       a[k]=a[i];
       k++;
   }}
    for(i=0;b[i]!='\0';i++)
   {if(b[i]!=0)
     {
       a[k]=b[i];
       k++;
       
   }
  a[k]='\0';
   }
   
     for(i=0;a[i]!='\0';i++)
     {
   printf("%c combine str is",a[i]);
     }
}
