#include <stdio.h>
int main(void)
{
	int i,no;

	printf("enter a number:");
	scanf("%d",&no);

	for(i=0;i<=no;i++)
		printf("%d ",i);
	putchar('\n');

    return 0;
}