#include <stdio.h>
#include<math.h>
int main()
{
    int number,i,a[10000],max=0;
    scanf("%d",&number);
    
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<number;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}
