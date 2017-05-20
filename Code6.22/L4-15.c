#include <stdio.h>
int main(void)
{
	int i,n;

	printf("Integer is :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		if(n%i==0)
			printf("%d ",i);
	putchar('\n');

    return 0;
}