#include <stdio.h>

int main()
{
  int n,i,a[100],s,m=0,j;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }

  for(i=0;i<=n;i++)
  {
   for(j=i;j<n;j++)
		{
			s=a[i]|a[j];
			if(m<s)
			{
				m=s;
			}
		}
		
}

  printf("%d",m);
  
    return 0;
}
