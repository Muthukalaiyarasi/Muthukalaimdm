#include <stdio.h>
#include<math.h>
int main()
{
int hour1,min1,hour2,min2,hour3,min3;
scanf("%d %d\n%d %d",&hour1,&min1,&hour2,&min2);
hour3=abs(hour1-hour2);
min3=abs(min1-min2);
printf("%d %d",hour3,min3);
return 0;
}
