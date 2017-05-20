#include <stdio.h>
int main(void)
{
	int i=0;
	int sum=0;
	int num,tmp;

	printf("How many? :");
	scanf("%d",&num);

	for(i=0;i<num;i++){
		printf("No.%d : ",i+1);
	    scanf("%d",&tmp);
	    sum+=tmp;
	}
	printf("Sum: %d \n",sum);
	printf("Ave: %.2f \n",(double)sum/num);

    return 0;
}