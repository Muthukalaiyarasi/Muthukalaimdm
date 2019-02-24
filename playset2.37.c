#include<stdio.h>
int main()
{
int a,b,NUMBER,i,c=0;
scanf("%d",&NUMBER);
for(i=0;i<NUMBER;i++)
{
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        c++;
    }
}
printf("%d",c);

}
