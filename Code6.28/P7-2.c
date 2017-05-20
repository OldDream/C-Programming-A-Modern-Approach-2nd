#include <stdio.h>

/*左移n位*/
int move_left(unsigned x,int n)
{
	x<<=n;

	return x;
}

/*右移n位*/
int move_right(unsigned x,int n)
{
	x>>=n;
	
	return x;
}

/*乘以2的n次幂*/
int multiply_by(unsigned x,int n)
{
	while(n>0){
		x=x*2;
		n--;
	}
	
	return x;
}

/*除以2的n次幂*/
int divided_by(unsigned x,int n)
{
	while(n>0){
		x=x/2;
		n--;
	}
	
	return x;
}

int main(void)
{
	unsigned a,b,c,d,e,f;
	int n;
	printf("请输入两个非负整数和n。 \n");
	printf("a: ");			scanf("%u",&a);
	printf("b: ");			scanf("%u",&b);
	printf("n: ");			scanf("%d",&n);

	c=move_left(a,n);
	d=move_right(b,n);
    
	e=multiply_by(a,n);
	f=divided_by(b,n);

	printf("左移减去积：%u \n",c-e);
	printf("右移减去商：%u \n",d-f);

	return 0;
}