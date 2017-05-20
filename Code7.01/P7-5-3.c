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

/*---POS位反转！！！但是比pos小的都变成0了---*/
unsigned inverse_n(unsigned x,int pos,int n)
{
	unsigned g,z,y;
	int i=(pos+n-1)-1,k;

	g=x;
	z=move_right(g,pos-1); 		/*利用z获取移动后的x :例如修改第五位，则保后4位是0，进而做到g-z＝原数后4位*/
	z=move_left(z,pos-1);
	y=g-z;			/*y为原数后几位 :例如修改第五位，则保后4位是0，进而做到g-z＝原数后4位*/
	
	for(k=0;k<n;k++){
		if((g>>(i-k))&1U){       /*---n－1位为1则移动变0---if((x>>(i-k))&1U){ 此处x应该换成g因为x已经在移动中带了尾数0*/
			x=move_right(x,i+1-k);
			x=move_left(x,i+1-k);
		}
		else{				  /*---n－1位为0则移动变1---*/
			x=move_right(x,i-k);
			x=x+1;
			x=move_left(x,i-k);
		}
	}

	x=x+y;

	return x;
}

int main(void)
{
	unsigned a,b;
	int n,pos;
	printf("请输入1个非负整数和pos。 \n");
	printf("a: ");			scanf("%u",&a);
	printf("pos: ");			scanf("%d",&pos);
	printf("n: ");			scanf("%d",&n);

	b=inverse_n(a,pos,n);

	printf("第n位取反后的值:");
	print_bits(b);
	putchar('\n');
	printf("a    蛤        :");
	print_bits(a);
	putchar('\n');
	
	return 0;
}