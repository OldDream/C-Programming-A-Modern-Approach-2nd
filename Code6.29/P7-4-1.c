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
	for(i=int_bits()-1;i>=0;i--)
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
	int a,b,c;
	unsigned y,z,h,g;

	g=x;
	z=move_right(g,pos-1); 		/*利用z获取移动后的x.,例如修改第五位，则保后4位是0，进而做到g-z＝原数后4位*/
	z=move_left(z,pos-1);
	y=g-z;

	x=move_right(x,pos);
	x=move_left(x,1);		/*pos位改1，先左移再加上1,因为左移后空位用0填充?????。*/
	x=x+1;
	x=move_left(x,pos-1);
	z=move_left(z,pos-1);		/*利用z.Y还原X消去的pos－1位。*/
	
	h=x+y;

	return h;
}

int main(void)
{
	unsigned a,b;
	int n;
	printf("请输入1个非负整数和pos。 \n");
	printf("a: ");			scanf("%u",&a);
	printf("n: ");			scanf("%d",&n);

	b=set(a,n);

	printf("b:");
	print_bits(b);
	putchar('\n');
	printf("a:");
	print_bits(a);
	putchar('\n');
	
	return 0;
}