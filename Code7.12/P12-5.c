#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

/*===表示坐标的结构体===*/
typedef struct {
	double x;
	double y;
} Point;

/*===表示汽车的结构体===*/
typedef struct {
	Point pt;
	double fuel;
} Car;

/*---返回点pa和点pb之间的距离---*/
double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

/*---显示汽车当前位置和剩余燃料---*/
void put_info(Car c)
{
	printf("当前位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("剩余燃料：%.2fL\n",c.fuel);
}

/*---使C指向的目标向dest行驶---*/
int move(Car *c,Point dest)
{
	double d = distance_of(c->pt, dest);
	if (d> c->fuel)
		return 0;
	c->pt = dest;
	c->fuel -= d;
	return 1;
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};
	while(1) {
		int select;
		double x,y;
		Point dest;
		put_info(mycar);
		printf("Drive?[Yes---1,No---0.]: ");
		scanf("%d", &select);
		if (select !=1)		break;
		printf("X方向距离目的地：");		scanf("%lf", &x);
		printf("Y方向距离目的地：");		scanf("%lf", &y);
		dest.x = mycar.pt.x + x;
		dest.y = mycar.pt.y + y;
		if (!move(&mycar, dest))
			puts("\a 燃料不足！");

	}
	return 0;
}