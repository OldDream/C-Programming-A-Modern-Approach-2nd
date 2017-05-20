#include <stdio.h>

#define NUMBER 5

int main(void)
{
	int i;
	int tensu[NUMBER];
	int sum=0;

	for (i=0;i<NUMBER;i++){
		printf("tensu[%2d] : ",i+1);
		scanf("%d",&tensu[i]);
		sum+=tensu[i];
	}

	printf("SUM: %5d \n",sum);
	printf("AVE: %5.1f \n",(double)sum/NUMBER);

	return 0;
}