/*求两点间距*/

#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

}

int main(void)
{
	long double x1,y1;
	long double x2,y2;

	printf("求两点间距. \n");
	printf("点X1坐标：  \n");			scanf("%Lf",&x1);
	printf("点Y1坐标：  \n");			scanf("%Lf",&y1);
	printf("点X2坐标：  \n");			scanf("%Lf",&x2);
	printf("点Y2坐标：  \n");			scanf("%Lf",&y2);

	printf("两点之间的距离为%f. \n",dist(x1,y1,x2,y2));

	return 0;
}