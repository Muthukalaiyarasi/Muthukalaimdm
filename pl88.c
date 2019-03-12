#include <stdio.h>
int main()
{
	int n,m;
	float re;
	scanf("%d %d",&n,&m);
	re=n>>m;
	printf("%0.2f",re);
	return 0;
}
