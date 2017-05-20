#include <stdio.h>
#include <string.h>

#define LINEF  6
#define COLUMN  128

void put_strary(const char s[][COLUMN], int LINE)
{
	int i;
	for(i=0; i<LINEF; i++)
		printf("s[%d]=\"%s\"", i, s[i]);
}

int main(void)
{
	int i,j;
	char s[LINEF][COLUMN];
	char FFF[LINEF][COLUMN]={"$$$$$"};

	for (i=0; i<LINEF; i++){		/*输入字符串*/
		printf("输入第%d字符串:",i+1);
		scanf("%s",s[i]);

		if(strcmp(s[i],FFF[0])==0)		/*读取$$$$$时停止操作*/
			i+= LINEF;
	}


	if(i<=LINEF){
		for (i=0; i<LINEF; i++)
			printf("s[%d]=\"%s\"\n", i, s[i]);
	}
	else{
		j=i;
		for (i=0; i<(j-LINEF-1); i++)
		printf("s[%d]=\"%s\"\n", i, s[i]);
	}

	return 0;
}

