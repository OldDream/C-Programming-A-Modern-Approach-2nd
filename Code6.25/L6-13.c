/*线性查找（顺序查找）*/

#include <stdio.h>

#define NUMBER 5     /*元素个数*/
#define FAILED -1    /*查找失败*/

/*---查找元素数为为n的数组v中与key一致的元素---*/

int search(const int v[],int key,int n)
{
	int i;

	while(1){			/*while(1)表示一直执行直到遇到return*/
		if(i==n)
			return FAILED;
		if(v[i]==key)
			return i;
		i++;
	}
}

int main(void)
{
	int i,ky,idx;
	int vx[NUMBER];

	for (i=0;i<NUMBER;i++){
		printf("vx[%d]:",i);
		scanf("%d",&vx[i]);
	}
	printf("要查找的值：");
	scanf("%d",&ky);

	idx=search(vx,ky,NUMBER);	/*输出的i赋值给idx.*/

	if(idx==FAILED)
		puts("\a 查找失败。");
	else
		printf("%d是数组的第%d号元素。 \n",ky,idx+1 );
}