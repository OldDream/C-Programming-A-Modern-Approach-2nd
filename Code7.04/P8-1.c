#include <stdio.h>

#define  diff(x,y) ((x)-(y))

int main(void)
{
	int x,y;

	printf("请输入一个整数x：");
	scanf("%d", &x);
	printf("请输入一个整数y：");
	scanf("%d", &y);

	printf("x-y是：%d \n", diff(x,y));	

	return 0;
}