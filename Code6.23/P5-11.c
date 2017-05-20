#include <stdio.h>
int main(void)
{
	int i,j,a;
	int score[7][2]={0};			/*倒数二行放和，最后一行放平均*/

	/*输入成绩*/
	for(i=0;i<6;i++){           /*i行*/
		for(j=0;j<2;j++){       /*j列*/
			printf("输入score[%d]%d]元素[X][0]语文、[X][1]数学：",i,j);
			scanf("%d",&a);
			score[i][j]=a;
			putchar('\n');
		}
	}
	
	/*求和*/
	for(i=0;i<6;i++)
			score[6][0]+=score[i][0];
	printf("语文总成绩为%d",score[6][0]);
	putchar('\n');

	for(i=0;i<6;i++)
			score[6][1]+=score[i][1];	
	printf("数学总成绩为%d",score[6][0]);
	putchar('\n');

	printf("语文的平均成绩是:");
	score[7][0]=score[6][0]/6;
	printf("%d",score[7][0]);
	putchar('\n');

	printf("数学的平均成绩是:");
	score[7][1]=score[6][1]/6;
	printf("%d",score[7][1]);
	putchar('\n');

	return 0;

}