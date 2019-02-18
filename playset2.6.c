#include <stdio.h>
int main()
{
	int ar[10],x;
    int n,i,j,max=99,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        if(ar[i]=='+')
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                ar[j]='+';
            }
        }
        if(count<=max)
        {
            max=count;
            x=ar[i];
        }
    }
    printf("%d",x);
	return 0;
}
