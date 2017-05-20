#include <stdio.h>

int str_chnum(const char *s, int c)
{
	int i = 0;
	while (*s){
		if (c == *s)
			i++;
		s++;
	}
	return i;
}

int main(void)
{
	char tmp[128];
	int a;
	char c;

	printf("输入的是：");
	scanf("%s", tmp);

	while (getchar() != '\n')
		;

	printf("查找的是：");
	scanf("%c", &c);

	a = str_chnum(tmp, c);
	printf("数量:%d \n", a);

	return 0;
}
		