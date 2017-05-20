#include <stdio.h>

#define NUMBER 5

/*冒泡排序*/
void bsort(int a[],int n)
{
	int i , j;

	for (i=n-1; i>0; i--){
		for(j=i; j<=n-1; j++){
			if(a[j-1] > a[j]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}

int main(void)
{
	int i;
	int height[NUMBER];

	printf("请输入 %d人的身高。 \n",NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("%2d 号：",i+1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);

	puts("按升序排列。");

	for(i=0;i<NUMBER;i++)
		printf("%2d 号：%d\n",i+1,height[i]);

	return 0;
}