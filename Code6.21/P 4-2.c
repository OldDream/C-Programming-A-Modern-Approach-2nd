#include <stdio.h>
int main(void)
{
	int sum=0;
	int a,b,c;
	printf("entrt A number:");
	scanf("%d",&a);
	printf("entrt B number:");
	scanf("%d",&b);
	
	if(a<b){
		c=a;a=b;b=c;
	}

	do{
		sum=sum+b;
		b=b+1;
	} while(b!=a+1);

	printf("sum from a to b is %d.",sum);
	return 0;
}