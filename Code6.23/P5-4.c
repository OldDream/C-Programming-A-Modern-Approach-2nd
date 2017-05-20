#include <stdio.h>
int main(void)
{
	int i;
	int a[5]={17,23,36};/*注意！ 此处中括号内的是数量，只有定义处的是数量*/
	int b[5];

	for (i=0;i<5;i++)
		b[i]=a[4-i];  /*注意！ 此处中括号内的是下标！！！！！*/

	puts("  a    b");
	puts("--------");

	for (i=0;i<5;i++)
		printf("%4d%4d\n",a[i],b[i]);

	return 0;
}