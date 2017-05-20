#include <stdio.h>

int main(void)
{
	int num=0,z=0;

	printf("请输入一个整数：");
	scanf("%d",&num);

	for(;num>1;num--){
		z=num*(num-1);
		num--;
	}

	printf("该数的阶乘为%d。\n",z);

	return 0;
}