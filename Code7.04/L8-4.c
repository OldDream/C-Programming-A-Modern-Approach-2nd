#include <stdio.h>

#define puts_alart(str) (putchar('\a'), puts(str));

int main(void)
{
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);

	if (n)
		puts_alart("这个整数不是0.")
	else
		puts_alart("这个整数是0.");

	return 0;
}