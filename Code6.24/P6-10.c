#include <stdio.h>

void intary_rcpy(int v1[],const int v2[],int n) /*V1,V2倒序交换。*/
{
	int i;
	for(i=0;i<n;i++)
		v1[i]=v2[n-1-i];
}

void print_array(const int v[],int n)	/*显示数组*/
{
	int i;
	printf("{");
	for(i=0;i<n;i++)
		printf("%d",v[i]);
	printf("}");
}

int main(void)
{
	int ary1[]={0,0,0,0,0};
	int ary2[]={1,2,3,4,5};

	printf("ary1= ");	print_array(ary1,5);	putchar('\n');  /*输出原数组*/
	printf("ary2= ");	print_array(ary2,5);	putchar('\n');

	intary_rcpy(ary1,ary2,5);

	puts("把0赋给两个数组的所有元素。");
	printf("ary1= ");	print_array(ary1,5);	putchar('\n'); 
	printf("ary2= ");	print_array(ary2,5);	putchar('\n');

	return 0;

}

