#include <stdio.h>

void rev_intary(int v[],int n)		/*对元素个数为n的数组进行倒序排列*/
{
	int i;
	for(i=0;i<n/2;i++){
		int temp=v[i];
		v[i]=v[n-1-i];
		v[n-1-i]=temp;
	}
}

void print_array(const int v[],int n)	/*显示数组*/
{
	int i;
	for(i=0;i<n;i++)
		printf("%d \n",v[i]);
}

int main(void)
{
	int ary1[]={1,2,3,4,5};

	print_array(ary1,5);	putchar('\n');  /*输出原数组*/

	rev_intary(ary1,5);
	
	print_array(ary1,5);	putchar('\n'); 

	return 0;

}