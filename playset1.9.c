#include <stdio.h>

int main(void) {
  long int n1,n2,i,j,f=0,c=0;
  scanf("%ld %ld",&n1,&n2);
  for(i=n1;i<=n2;i++)
  {
    for(j=2;j<=i/2;j++)
    {
      if(i%j==0)
      {
        f=1;
        break;
      }
    }
    if(f==0)
    {
      c++;
    }
   f=0;
  }
  printf("%ld",c);
  return 0;
}
