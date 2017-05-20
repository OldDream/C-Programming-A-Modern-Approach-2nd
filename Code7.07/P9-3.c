#include <stdio.h>
#include <string.h>

#define NUMBER 6

int main(void)
{
	int i,j;
	char s[NUMBER][128];
	char K[1][128]={"$$$$$"};

	for (i=0; i<NUMBER; i++){
		printf("s[%d]=", i);
		scanf("%s", s[i]);


		if(strcmp(s[i],K[0])==0)		/*读取$$$$$时停止操作*/
			i+= NUMBER;
	}

	if(i<=NUMBER){
		for (i=0; i<NUMBER; i++)
			printf("s[%d]=\"%s\"\n", i, s[i]);
	}
	else{
		j=i;
		for (i=0; i<(j-NUMBER-1); i++)
		printf("s[%d]=\"%s\"\n", i, s[i]);
	}

	return 0;
}