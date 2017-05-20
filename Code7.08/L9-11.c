#include <stdio.h>
#include <ctype.h>

/*转换成大写*/
void str_toupper(char s[])
{
	int i=0;
	while (s[i]) {
		s[i] = toupper(s[i]);
		i++;
	}
}

/*转换成小写*/
void str_tolower(char s[])
{
	int i=0;
	while(s[i]) {
		s[i] = tolower(s[i]);
		i++;
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
