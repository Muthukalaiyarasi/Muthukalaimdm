#include <stdio.h>

int main()
{
    int arr[100], len, i, j, temp, n;
       
        scanf("%d", &len);
       
        for (i = 0; i < len; i++) 
        {
            scanf("%d", &arr[i]);
        }
 
        printf("\n Enter Which kth Number You want");
        scanf("%d", &n);
        printf("%d", n, arr[n - 1]);
    return 0;
}
