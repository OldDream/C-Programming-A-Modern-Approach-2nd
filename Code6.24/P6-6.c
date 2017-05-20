#include <stdio.h>

void bell(int n) /*响铃*/
{
	while(n-->0)
		putchar('\a');   /*putchar居然可以放变量*/
}

int main(void)
{
	int i;

	printf("响铃次数：");		
	scanf("%d",&i);

	bell(i);
		
	return 0;
}
