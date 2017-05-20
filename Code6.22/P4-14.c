#include <stdio.h>
int main(void)
{
	int i=1,j=1,z=1;
	int A,B,num;

	printf("A number? :");
	scanf("%d",&num);

	A=num/10;
	B=num%10;

	for(i;i<=A;i++)
	    printf("1234567890");
	for(j;j<=B;j++)
	    printf("%d",z++);

    return 0;
}