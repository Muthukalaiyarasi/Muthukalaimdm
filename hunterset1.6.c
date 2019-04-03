#include <stdio.h>

int main(void) {
  int a[1000],i,j,n,flag=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
        flag=1;
        printf("%d",a[i]);
        i=n;
      }
    }
  }
  if(flag==0)
  {
    printf("unique");
  }
  return 0;
}
