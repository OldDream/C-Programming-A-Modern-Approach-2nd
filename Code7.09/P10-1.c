/*	P296	*/

#include <stdio.h>

void adjust_point(int *n)
{
	if (*n > 100)
		*n = 100;
	else if (*n < 0)
		*n = 0;
}

int main(void)
{
	int na;
	

	puts("请输入1个整数.");
	printf("整数：");		scanf("%d", &na);
	

	adjust_point(&na);

	printf("调整之后是%d. \n", na);

	return 0;
}