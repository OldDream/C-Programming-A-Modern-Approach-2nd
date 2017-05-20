#include <stdio.h>

void rev_intary(int v[],int n)		/*对元素个数为n的数组进行倒序排列*/
{
	int temp,i;
	for(i=0;i<n/2;i++){
		temp=v[i];
		v[i]=v[n-1-i];
		v[n-1-i]=temp;
	}
}

void print_array(const int v[],int n)	/*显示数组*/
{
	int i;
	for(i=0;i<n;i++)
		printf("%d \n",v[i]);
}

int main(void)
{
	int i;
	int eng[5];

	printf("请输入%d名学生的分数。 \n",5);
	for(i=0;i<5;i++){
		printf("[%d]英语:",i+1);    scanf("%d",&eng[i]);
	}

	rev_intary(eng,5);
	print_array(eng,5);

	return 0;
}