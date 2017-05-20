#include <stdio.h>

#define NUMBER 80

int main(void)
{
	int i,j,num;
	int n[NUMBER];

	printf("数据个数：");
	scanf("%d",&num);
		
	printf("请输入个数.\n");

	for(i=0;i<num;i++){
		printf("%2d号：",i+1);
			scanf("%d",&n[i]);
	}

	putchar('{');

	for(i=0;i<num-1;i++)
		printf("%d, ",n[i]);
	if(i=num-1)
		printf("%d",n[i]);
	putchar('}');

	return 0;
}