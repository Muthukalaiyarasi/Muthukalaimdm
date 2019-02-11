 #include <stdio.h>
	
	int main()
	{
	    char ar[100];
	    int i,j,max;
	    scanf("%s",ar);
	    max=ar[0];
	    for(i=0;ar[i]!='\0';i++)
	{
	for(j=i+1;ar[j]!='\0';j++)
	{
	if(ar[i]>ar[j])
	{
	max=ar[i];
	ar[i]=ar[j];
	ar[j]=max;
	}
	}
	}
	    printf("%s",ar);
	    return 0;
}
