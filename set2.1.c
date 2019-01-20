#include<stdio.h>
#include<conio.h>
void main()
{
   int n,p,i,sum=1;
   scanf("%d%d",&n,&p);
   for (i=0;i<p;i++)
   {
       sum=sum*n;
       
   }
   printf("%d",sum);
   getch();

}
