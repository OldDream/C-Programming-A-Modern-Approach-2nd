#include <stdio.h>

int gcd(int x,int y)
{
	if(x>y){
		if(x%y==0)
			return y;
		if(x%y!=0)
			return gcd(y,x%y);
	}
	else
		return 0;		 
}

int main(void)
{
	int x,y;

	printf("请输入一个整数x：");
	scanf("%d",&x);
	printf("请输入一个整数y：");
	scanf("%d",&y);

	printf("x、y的最大公约数为%d。\n",gcd(x,y));

	return 0;
}