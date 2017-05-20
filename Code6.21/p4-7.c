#include <stdio.h>
int main(void)
{
	int i=2,no,n1;
	printf("entrt a number:");
	scanf("%d",&no);
	n1=no;

	while(no>=i){
		printf("%d ",i);
		i=i*2;
	}
	
	if(n1>=0)
		printf("\n\n\n\n");

	return 0;
}