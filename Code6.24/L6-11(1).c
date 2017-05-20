#include <stdio.h>

#define NUMBER 5

int max_of(int v[],int n)
{
	int i;
	int max=v[0];

	for(i=1;i<n;i++)
		if(v[i]>max)
			max=v[i];
	return max;
}

int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int max_e,max_m;

	printf("请输入%d名学生的分数。 \n",NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("[%d]英语:",i+1);    scanf("%d",&eng[i]);
		printf("    数学:",i+1);    scanf("%d",&mat[i]);
	}

	max_e=max_of(eng,NUMBER);		/*英语最高分*/
	max_m=max_of(mat,NUMBER);		/*数学最高分*/

	printf("英语最高分=%d \n",max_e);
	printf("数学最高分=%d \n",max_m);

	return 0;
}