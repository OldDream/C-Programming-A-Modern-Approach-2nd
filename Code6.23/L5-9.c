#include <stdio.h>
int main(void)
{
	int i;
	int tensu[5];
	int sum=0;

	for (i=0;i<5;i++){
		printf("tensu[%2d] : ",i+1);
		scanf("%d",&tensu[i]);
		sum+=tensu[i];
	}

	printf("SUM: %5d \n",sum);
	printf("AVE: %5.1f \n",(double)sum/5);

	return 0;
}