#include <stdio.h>
#include<conio.h>
int main()
{
int a[100],N,i;
scanf("%d",&N);
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}

for(i=1;i<N;i++)
{
 
if((a[i]%a[i-1])==0)
{
    printf("%d ",a[i]);
    
    
}
}

    return 0;
}
