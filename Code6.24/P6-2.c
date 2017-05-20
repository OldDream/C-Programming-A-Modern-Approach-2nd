#include <stdio.h>

int min3(int a,int b,int c) /*返回较大数值*/
{
	int min=a;
	if(b<min)   min=b;
	if(c<min)   min=c;
	return min;
}

int main(void)
{
	int a,b,c;
	puts("请输入3个整数。");
	printf("整数1：");		scanf("%d",&a);
	printf("整数2：");		scanf("%d",&b);
	printf("整数3：");		scanf("%d",&c);
	printf("较小的整数是：%d .\n",min3(a,b,c));

	return 0;
}