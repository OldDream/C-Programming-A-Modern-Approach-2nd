#include <stdio.h>
int main(void)
{
	int no,n1;
	printf("entrt a number:");
	scanf("%d",&no);
	n1=no;

	while(no>0)
		printf("%d ",no--);
	
	if(n1>=0)
		printf("\n\n\n\n");
	
	return 0;
}