#include<stdio.h>
int main(void)
{
  int n,i,x=0,rem=0;
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    x=n/i;
    rem=n%i;
    if(x%2!=0 && rem==0)
    {
      printf("%d",i);
      break;
    }
  }
  return 0;
}
