#include <stdio.h>
	
	int main()
	{
	int kabalii,opponent;
	    scanf("%d %d",&kabalii,&opponent);
	    if(kabalii<opponent)
	    {
	        kabalii=opponent-kabalii;
	    }
	    else
	    {
	        kabalii=kabalii-opponent;
	    }
	    printf("%d",kabalii);
	
	    return 0;
	}
