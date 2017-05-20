#include <stdio.h>

enum animal { Dog, Cat, Monkey, Invalid}; /*这就是枚举, 此时自动赋予枚举常量，从0开始*/

void dog(void)
{
	puts("汪汪！！");
}

void cat(void)
{
	puts("喵～～");
}

void monkey(void)
{
	puts("唧唧～");
}

enum animal select(void)
{
	int tmp;
	do{
		printf("0-dog 1-cat 2-monkey 3-end:");
		scanf("%d",&tmp);
	}while(tmp < Dog || tmp > Invalid);
	return tmp;
}

int main(void)
{
	enum animal selected;

	do{
		switch(selected = select()){
			case Dog   : dog();		break;
			case Cat   : cat();		break;
			case Monkey   : monkey();		break;
			case Invalid:		break;
		}
	}while(selected != Invalid);

	return 0;
}