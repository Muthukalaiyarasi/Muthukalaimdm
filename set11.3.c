#include <stdio.h>
#include<string.h>
int main() 
{
	char arr[100];
    int n,i;
    scanf("%[^\t\n]s",arr);
    n=strlen(arr);
    arr[0]=arr[0]-32;
    for(i=0;i<n;i++)
    {
      if(arr[i]==' ')
      {
          arr[i+1]=arr[i+1]-32;
      }
    }
    printf("%s",arr);
	
	return 0;
}
