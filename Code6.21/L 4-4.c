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
		sum+=t;
		cnt++;

		printf("continue? Yes---0,No---1.");
		scanf("%d",&retry);
	} while(retry==0);

	printf("sum is %d,average is %.2f.",sum,(double)sum/cnt);
	return 0;
}