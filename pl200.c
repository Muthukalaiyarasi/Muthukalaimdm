#include<stdio.h>
void main()
{
int i,j,c=0;
char arr[100];
scanf("%s",arr);
for(i=0;arr[i]!='\0';i++)
c++;
for(i=0;i<c;i++)
{
for(j=i+1;j<c;j++)
    if(arr[i]==arr[j])
        arr[j]='\0';
}
j=0;
for(i=0;i<c;i++)
{
if(arr[i]!='\0')
{
arr[j]=arr[i];
j++;
}
}
arr[j]='\0';
printf("%s",arr);
}
