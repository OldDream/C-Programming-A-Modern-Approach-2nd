#include <stdio.h>
int main(void)
{
	int sum=0;
	int cnt=0;
	int retry;

	do{
		int t;
		printf("entrt a number:");
		scanf("%d",&t);
		sum=sum+t;
		cnt=cnt+1;

		printf("continue? Yes---0,No---1.");
		scanf("%d",&retry);
	} while(retry==0);

	printf("sum is %d,average is %f.",sum,(double)sum/cnt);
	return 0;
}