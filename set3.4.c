#include <stdio.h>
#include<math.h>
int main()
{
    int number,i,a[10000],min;
    scanf("%d",&number);
    
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<number;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}
