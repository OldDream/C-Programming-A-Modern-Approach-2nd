#include <stdio.h>

int max3(int a,int b,int c) /*返回较大数值*/
{
	int max=a;
	if(b>max)   max=b;
	if(c>max)   max=c;
	return max;
}

int main(void)
{
	int a,b,c;
	puts("请输入3个整数。");
	printf("整数1：");		scanf("%d",&a);
	printf("整数2：");		scanf("%d",&b);
	printf("整数3：");		scanf("%d",&c);
	printf("较大的整数是：%d .\n",max3(a,b,c));

	return 0;
}