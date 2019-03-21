#include <stdio.h>
#include<conio.h>
int main()
{
 int n,m,i,a,b,c=0;
 
 scanf("%d %d",&n,&m);
 

     
     for(i=0;i<n;i++)
     {
     
     
     scanf("%d %d",&a,&b);
     if(m==a||m==b)
     c++;
     
     
     
     
 }
 
 if(c!=0)
 printf("yes");
 else
 printf("no");
 
    return 0;
}
