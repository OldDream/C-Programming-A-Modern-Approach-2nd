#include <stdio.h>
int main(void)
{
	int i,j,a;
	int tensu1[4][3];
	int tensu2[3][4];
	int product[4][4];

	/*输入tensu1元素*/
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("输入tensu1[%d]%d]元素：",i,j);
			scanf("%d",a);
			tensu1[i][j]=a;
			putchar('\n');
		}
	}
	
	/*输入tensu2元素*/
	for(i=0;i<4;i++){        /*行*/
		for(j=0;j<3;j++){    /*列*/
			printf("输入tensu2[%d][%d]元素：",i,j);
			scanf("%d",a);
			tensu2[i][j]=a;
			putchar('\n');
		}
	}

	/*求积*/
	puts("积");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			product[i][j]=tensu1[i][j]*tensu2[j][i];
			printf("%4d",product[i][j]);
		}
		putchar('\n');
	}

	return 0;

}