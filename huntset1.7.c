#include <stdio.h>

int main(void) {
  int a[1000],i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
  
  for(i=0;i<n;i++)
  {
    if(a[i]%2!=0)
    {
      printf("%d ",a[i]);
    }
  
  
    else
    {
      printf("%d ",a[i]);
    }
  }
  return 0;
}
