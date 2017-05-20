#include <stdio.h>

void put_string(const char *s)
{
	printf("显示的是：");
	while(*s){
		printf("%c",*s++);
	}
}

int main(void)
{
	char tmp[128];

	printf("输入的是：");
	scanf("%s", tmp);

	put_string(tmp);

	return 0;
}