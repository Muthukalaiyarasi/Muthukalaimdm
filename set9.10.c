#include <stdio.h>

int main()
{
      //1
    char inputStr[100];
    int i;
    
    
    printf("Enter your string : ");
scanf("%s",&inputStr);
    
    
    int j = 0;
    
    
    for(i=0; inputStr[i] ;i++){
        
        if(inputStr[i] >= '0' && inputStr[i] <= '9'){
            inputStr[j] = inputStr[i];
            j++;
        }
    
    }
    
    inputStr[j] = '\0';
    
    
   
    printf("%s\n",inputStr);

    return 0;
}
