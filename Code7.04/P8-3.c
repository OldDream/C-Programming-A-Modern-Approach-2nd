#include <stdio.h>

#define  swap(type,x,y) (x=x+y,y=x-y,x=x-y)

int main(void)
{
	int x,y;

	printf("请输入一个整数x：");
	scanf("%d", &x);
	printf("请输入一个整数y：");
	scanf("%d", &y);

	swap(int,x,y);

	printf("x互换y，X是：%d，Y是%d   \n",x,y);	


	double a,b;

	printf("请输入一个实数x：");
	scanf("%lf", &a);
	printf("请输入一个实数y：");
	scanf("%lf", &b);

	swap(double,a,b);

	printf("x互换y，X是：%lf，Y是%lf   \n",a,b);	

	return 0;
}