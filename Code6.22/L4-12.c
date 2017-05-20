#include <stdio.h>
int main(void)
{
	int i,no;

	printf("enter a number:");
	scanf("%d",&no);

	for(i=1;i<=no;i++)
		printf("*");
	putchar('\n');

    return 0;
}