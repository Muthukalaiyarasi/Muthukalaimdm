#include <stdio.h>

int main()
{
  int n,K,i,f=1,c,d=1,e=1;
  scanf("%d %d",&n,&K);
  c=n-K;
  for(i=1;i<=n;i++)
  {
      f=f*i;
  }
    for(i=1;i<=c;i++)
  {
      d=d*i;
  }
      for(i=1;i<=K;i++)
  {
      e=e*i;
  }
  
  

  printf("%d",(f/(d*e)));
  
    return 0;
}
