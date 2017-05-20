#include <stdio.h>
#include <ctype.h>

/*转换成大写*/
void str_toupper(char s[])
{
	while (*s) {
		*s = toupper(*s);
		s++;
	}
}

/*转换成小写*/
void str_tolower(char s[])
{
	while(*s) {
		*s = tolower(*s);
		s++;
	}
}

int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);

	str_toupper(str);
	printf("大写：%s\n",str);

	str_tolower(str);
	printf("小写：%s\n",str);

	return 0;
}
