#include <stdio.h>

int main()
{
    int N,i,j,f;
scanf("%d",&N);
for(i=2;i<=N;i++)
{   
    f=0;
  for(j=2;j<=i/2;j++)
  {
    if(i%j==0)
      f=1;  
  }
    
    
    if(flag==0&& N%i==0)
     printf("%d ",i);
     
    
}

    return 0;
}
