#include <stdio.h>
#include<math.h>
int main()
{
 int N,i,a[1000],c[1000],j,K,m=0,u,d=1;
 scanf("%d %d",&N,&K);
 
 for(i=0;i<N;i++)
 {

scanf("%d",&a[i]);
}

  for(i=0;i<N;i++)
 {d=1;
    
   for(j=i+1;j<N;j++)
   {
       if( a[j]!='$'&&a[i]!='$')
    {
   if(a[i]==a[j])
   {
      d++; 
      
      a[j]='$'; 
      
     break;
     }
   
}
} 

//printf("%d \n",c);

   if(d<K &&a[i]!='$')
  {
      //printf("%d ",a[i]);
      
      
      c[m]=a[i];
      m++;
      a[i]='$';
      
  }
     
     
     
 }
 
 
   for(i=0;i<m;i++)
 
 {
       for(j=i+1;j<m;j++)
     
{
    
    
    if(c[i]>c[j])
    {
        
        u=c[i];
        c[i]=c[j];
        c[j]=u;
        
    }
}     
 }
    for(i=0;i<m;i++)
 
 {
   printf("%d output is",c[i]);
   
 }
 
 
 
 
 
 
    return 0;
}
