#include <stdio.h>

#define  sqr(x) ((x)*(x))

int main(void)
{
	int n;
	double x;

	printf("请输入一个整数：");
	scanf("%d", &n);
	printf("该整数的平方是：%d. \n", sqr(n));

	printf("请输入一个实数：");
	scanf("%lf", &x);
	printf("该实数的平方是：%lf. \n", sqr(x));	

	return 0;
}