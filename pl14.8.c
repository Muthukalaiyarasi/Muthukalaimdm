#include <stdio.h>

int main()
{
 int N,i,p=1,c=0;
 scanf("%d",&N);
 for(i=1;i<=N;i++)
 {
    p=p*2;
    if(p==N)
    {
        c++;
        printf("Yes");
        break;
        
    }
     
}
if(c==0)
     printf("No");
     
     
    return 0;
}
