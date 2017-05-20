#include <stdio.h>
int main(void)
{
	int i=1;
	int sum=0;
	int num;

	printf("A number? :");
	scanf("%d",&num);

	for(i=1;i<=num;i++){
	    sum+=i;
	}
	printf("Sum: %d \n",sum);

    return 0;
}