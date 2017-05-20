#include <stdio.h>

#define NUMBER 5

int main(void)
{
	int i;
	int tensu[NUMBER];
	int max,min;

	printf("输入%d名学生的成绩",NUMBER);
	for (i=0;i<NUMBER;i++){
		printf("tensu[%2d] : ",i+1);
		scanf("%d",&tensu[i]);
	}

	max=min=tensu[0];

	for (i=1;i<NUMBER;i++){
		if(tensu[i]>max)     max=tensu[i];
		if(tensu[i]<min)     min=tensu[i];
	}
	
	printf("max=%d \n",max);
	printf("min=%d \n",min);
	return 0;
}