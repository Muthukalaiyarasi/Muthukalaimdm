#include<stdio.h>
void main()
{
    int coin,player,rem;
    scanf("%d%d",&coin,&player);
    rem=coin%player;
    if(rem==0)
    {
    printf("%d",player);
    }
    else
    {
    printf("%d",rem);
    }
}
