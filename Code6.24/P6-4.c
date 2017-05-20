#include <stdio.h>

int pow4(int x)
{
	return x*x*x*x;
}

int main(void)
{
	int x;
	puts("请输入1个整数。");
	printf("整数x：");		scanf("%d",&x);
	
	printf("x的四方是：%d .\n",pow4(x));

	return 0;
}
