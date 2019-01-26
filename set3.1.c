#include <stdio.h>
#include<math.h>
int main()
{
    int n,number1,diff,total=0,x,i;
    scanf("%d %d %d",&n,&number1,&diff);
    
total = (n * (2 * number1+ (n - 1) * diff)) / 2;
    x = number1+ (n- 1) * diff;
            printf("%d", total);

return 0;
}

