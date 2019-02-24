#include <stdio.h>

int main()
{

char Str[100000];
 int i,j,c=0;
 gets(Str);
 
 
 for(i=0;Str[i]!='\0';i++)
 {c=0;
     
     
    for(j=i+1;Str[j]!='\0';j++)
    {
        if(Str[i]!='#'&&Str[i]!='#')
        {
        if(Str[i]==Str[j])
        {
            
            
           c++;
           Str[j]='#';
            
        }
        
        
    }}
     
     if(c==0&&Str[i]!='#')
    {
     printf("%c ",Str[i]);
     
     
     
     
     
    }
     
 }
 
 
 
 
 
 
}
