#include <stdio.h>
#include<math.h>

int main()
{
  char string1[20];
    int i, length;
    int f= 0;
    
    
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            f= 1;
            break;
   }
}
    
    if (f) {
        printf(" not palindrome");
    }    
    else {
        printf("a palindrome");
    }
    return 0;
}
