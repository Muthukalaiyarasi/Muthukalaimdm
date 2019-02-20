 #include <stdio.h>

int main(void) {
	int num,k;
	scanf("%d %d",&num,&k);
	int i,a,count=0;
	while(num>0)
	{
		a=num%10;
		if(a==k)
		{
			count=count+1;
		}
		num=num/10;
	}
	printf("%d",count);
	return 0;
}
