/*求正方形边长*/

#include <stdio.h>
#include <math.h>

double dist(a)
{
	return sqrt(a);

}

int main(void)
{
	long double b;
	

	
	printf("输入面积：  \n");			scanf("%Lf",&b);

	printf("面积位%.2LF的正方形，边长为%.2f. \n",b,dist(b));

	return 0;
}