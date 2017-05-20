#include <stdio.h>

/*---返回整数x中设置的位数---*/
int count_bits(unsigned x)
{
	int bits=0;
	while (x) {
		if(x&1U) bits++;
		x>>=1;
	}
	return bits;
}

/*---返回unsigned型的位数---*/
int int_bits(void)
{
	return count_bits(~0U);
}

/*---显示unsigned型的内容---*/
void print_bits(unsigned x)
{
	int i;
	for(i=int_bits()-1;i>=1;i--)
		putchar(((x>>i)&1U)?'1':'0');
}

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

/**/
unsigned set(unsigned x,int pos)
{
	int pos,n,a,b,c;
	unsigned x,y,z,h;

	a=int_bits();
	y=x;

	printf("向右移动pos位: ");			scanf("%d",&pos);
	x=int move_right(x,n);

/*地pos位改1，先左移再加上1,因为左移后空位用0填充。*/
	x=int move_left(x,1);
	z=x;			/*利用z.*/
	x=x+1；

/*x左移pos－1位，留好位置。*/
	x=int move_left(x,pos-1);

/*利用z.Y还原X消去的pos－1位。*/
	z=move_left(z,pos);
	y=x-z;  /*y等于哪些因为x右移被消除的数.*/
	h=x+z;

	return h;
}

int main(void)
{
	unsigned a,b;
	int n;
	printf("请输入1个非负整数和pos。 \n");
	printf("a: ");			scanf("%u",&a);
	printf("n: ");			scanf("%d",&n);

	b=set(a);

	printf("b：%u \n",print_bits(h));
	
	return 0;
}