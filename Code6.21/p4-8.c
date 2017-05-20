#include <stdio.h>
int main(void)
{
	int no;
	printf("entrt a number:");
	scanf("%d",&no);

	while(no-->0)
		putchar('*');
	while(no-->=0)
	putchar('\n');

	return 0;
}