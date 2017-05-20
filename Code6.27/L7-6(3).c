/*按位运算*/

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

int main(void)
{
	unsigned a,b;
	printf("请输入两个非负整数。 \n");
	printf("a: ");			scanf("%u",&a);
	printf("b: ");			scanf("%u",&b);

	printf("\na    = "); print_bits(a);
	printf("\nb    = "); print_bits(b);
	printf("\na & b= "); print_bits(a&b);
	printf("\na ! b= "); print_bits(a|b);
	printf("\na ^ b= "); print_bits(a^b);
	printf("\n   ~a= "); print_bits(~a );
	printf("\n   ~b= "); print_bits(~b );

	putchar('\n');

	return 0;	

}