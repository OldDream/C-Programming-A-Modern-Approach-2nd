/*三个数按照升序排列*/

#include <stdio.h>

void swap(int *a, int *b)		/*前后顺序调换*/
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort2(int *n1, int *n2)		/*保证（小，大）*/
{
	if(*n1 > *n2)
		swap(n1, n2);
}

void sort3(int *n1, int *n2, int *n3)
{
	sort2(n1, n2);
	sort2(n2, n3);
	sort2(n1, n2);
}

int main(void)
{
	int n1, n2, n3;
	puts("请输入3个整数。");
	printf("整数A：");		scanf("%d", &n1);
	printf("整数B：");		scanf("%d", &n2);
	printf("整数C：");		scanf("%d", &n3);

	sort3(&n1, &n2, &n3);

	puts("按升序排列后。");
	printf("%d， %d， %d", n1, n2, n3);

	return 0;
}