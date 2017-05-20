#include <stdio.h>

int cube(int x)
{
	return x*x*x;
}

int main(void)
{
	int x;
	puts("请输入1个整数。");
	printf("整数x：");		scanf("%d",&x);
	
	printf("x的三方是：%d .\n",cube(x));

	return 0;
}
