#include <stdio.h>
int main(void)
{
	int i,n,f;

	printf("Integer is :");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		f=i*i*i;
		printf("%d's 3rd power is %d \n",i,f);
	}
	putchar('\n');

    return 0;
}