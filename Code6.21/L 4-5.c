#include <stdio.h>
int main(void)
{
	int no;
	printf("entrt a number:");
	scanf("%d",&no);

	while(no>=0){
		printf("%d ",no);
		no--;
	}
	printf("\n");

	return 0;
}