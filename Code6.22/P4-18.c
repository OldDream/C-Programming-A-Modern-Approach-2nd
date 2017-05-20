#include <stdio.h>
int main(void)
{
	int i,n,j=0;

	printf("Integer is :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		if(n%i==0){
			printf("%d ",i);j++;
		}
	printf("\nall have :%d",j);	
	putchar('\n');

    return 0;
}