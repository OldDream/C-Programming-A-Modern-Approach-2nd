#include <stdio.h>
#include <string.h>

char *del_digit(char *str);

int main(void)
{
	char st[128];

	printf("please enter a string: ");
	scanf("%s", st);

	puts("delete the digit from string");
	printf("the delete digit string is \"%s\"\n", del_digit(st));

	return 0;
}

char *del_digit(char *str)
{
	char *t = str;		/*只能在声明的时候定义指针，后面不可以单独  *t = str  */
	char *p = str;

	while (*str)
		if (*str >= '0' && *str <= '9')
			str++;
		else
			*p++ = *str++;
	*p = '\0';		/*p指向的地址，会随着P++一直移动，直接return P会输出\0，所以要有个t从头开始。*/
	
	return p;
}

