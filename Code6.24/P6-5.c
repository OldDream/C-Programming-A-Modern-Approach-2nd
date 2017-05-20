#include <stdio.h>

int sum(int a,int b)
{
	int i,sum=0;

	for(i=a;i<=b;i++)
		sum+=i;
	return sum;
}

int main(void)
{
	int a,b;

	puts("sum from A to B.");
	printf("整数a：");		scanf("%d",&a);
	printf("整数b：");		scanf("%d",&b);
	
	printf("sum from A to B is：%d .\n",sum(a,b));

	return 0;
}
