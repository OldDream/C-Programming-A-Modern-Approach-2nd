#include <stdio.h>

int max2(int a,int b) /*返回较大数值*/
{
	if (a>b)
		return a;
	else
		return b;
}

int main(void)
{
	int n1,n2;
	puts("请输入2个整数。");
	printf("整数1：");		scanf("%d",&n1);
	printf("整数2：");		scanf("%d",&n2);
	
	printf("最大的整数是：%d .\n",max2(n1,n2));

	return 0;
}