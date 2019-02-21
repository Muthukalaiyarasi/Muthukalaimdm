#include <stdio.h>
#include<math.h>
#define pi 3.14
int main(void) {
	int a;
	scanf("%d",&a);
	float val;
	val=sin(a*pi/180);
	printf("%1f",val);
	return 0;
}
