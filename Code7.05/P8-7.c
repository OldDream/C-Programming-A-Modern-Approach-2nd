#include <stdio.h>

int combination(int n,int r)
{
	if(r<=n){
		if(r > 1)
			return combination(n-1,r-1) + combination(n-1,r);
		if(r == 1 || r == n)
			return n;
		if(r == 0)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}

int main(void)
{
	int n,r;

	printf("请输入一个整数n：");
	scanf("%d",&n);
	printf("请输入一个整数r：");
	scanf("%d",&r);

	printf("组合（r,n）为%d。\n",combination(n,r));

	return 0;
}