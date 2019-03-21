#include <stdio.h>
#include<conio.h>
int main()
{
int N,K,i,c=0,a[100];
scanf("%d %d",&N,&K);

for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}




for(i=0;i<N;i++)
{
    if(a[i]==K)
    {
        
        c++;
        
    }
    
}
if(c!=0)
printf("yes %d",c);
else
printf("no");


    return 0;
}
