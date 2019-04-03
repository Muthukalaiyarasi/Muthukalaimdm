#include <stdio.h>

int main(void) {
  int a[1000],b[1000],i,n,m,len=0,c=0,j;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
    len++;

  }
 
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(b[i]==a[j])
      {
      c++;
      }
    }
  }
  if(c==len)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
  return 0;
}
