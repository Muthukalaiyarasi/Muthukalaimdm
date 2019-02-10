#include <stdio.h>

int main()
{
  int n,r1,r2,i,c=0;
  scanf("%d%d%d" ,&r1,&r2,&n);
  for(i=r1;i<r2;i++){
      if(i==n)
      {
          c=1;
      }
  }
      if(c==1)
      {
          printf("yes");
      }
      else
      {
          printf("no");
      }
  

    return 0;
}
