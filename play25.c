#include <stdio.h>

int main()
{
  int NUMBER,i,l,k=0,z[10],m,j,t;
  char a[10][10];
  scanf("%d",&NUMBER);
  for(i=0;i<NUMBER;i++)
  {
      
      scanf("%s",&a[i]);
      
  }
  
   for(i=0;i<NUMBER;i++)
  {
    
    
    
l=strlen(a[i]);
      
 z[k]=l;
      k++;
  }
  
  
 
   for(i=0;i<NUMBER;i++)
  {
  for(j=i+1;j<NUMBER;j++)
   {
       if(z[i]>z[j])
       {
           
           
           t=z[i];
           z[i]=z[j];
           z[j]=t;
           
       }
       
       
   }
  }
  
  
  

  
  for(i=0;i<NUMBER;i++)
  {
      
      
      for(j=0;j<NUMBER;j++)
      {
          
          if(z[i]==strlen(a[j]))
          printf("%s\n",a[j]);
      }
  }
  
  
  
}

