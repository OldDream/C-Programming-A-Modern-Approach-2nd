#include <stdio.h>

#define NUMBER 80

int main(void)
{
	int i,j,num;
	int tensu[NUMBER];
	int bunpu[11]={0};

	printf("请输入学生人数：");

	do{
		scanf("%d",&num);
		if(num<1 || num>NUMBER)
			printf("请输入1~%d的数：",NUMBER);
	}while(num<1 || num>NUMBER);

	printf("请输入%d人的分数.\n",num);

	for(i=0;i<num;i++){
		printf("%2d号：",i+1);
		do{
			scanf("%d",&tensu[i]);
			if(tensu[i]<0 || tensu[i]>100)
				printf("请输入1~100的数：");
		}while(tensu[i]<0 || tensu[i]>100);

		bunpu[tensu[i]/10]++;
	}

	int max=bunpu[0];				/*找到最大的个数，这个决定一共要几行*/
	for(i=1;i<11;i++){
		if(bunpu[i]>max)
			max=bunpu[i];
	}

	for(i=max;i>0;i--){
		for(j=0;j<=10;j++){
			if(bunpu[j]<max)
				printf("   ");
			if(bunpu[j]>=max)
				printf(" * ");
			}
			max--;
			putchar('\n');
		}

	for(j=0;j<=10;j++)
		printf("---");

	putchar('\n');

	for(j=0;j<=10;j++)
		printf("%3d",j*10);

	return 0;
}