/*计算最高分。*/

#include <stdio.h>

#define NUMBER 5

int tensu[NUMBER];
int top(void);

int top(void)        /*top放到前面，因为在main里被调用。*/
{
	extern int tensu[];
	int i;
	int max=tensu[0];

	for(i=0;i<NUMBER;i++)
		if(tensu[i]>max)
			max=tensu[i];

	return max;
}

int main(void)
{
	extern int tensu[];
	int i;

	printf("请输入%d名同学的分数。\n",NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("%d:",i+1);
		scanf("%d",&tensu[i]);
	}
	printf("最高分:%d",top());
	return 0;
}

