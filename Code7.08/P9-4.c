#include <stdio.h>

int str_length(const char s[])
{
	int len=0;

	while(s[len])
		len++;
	return len;
}

void null_string(char s[])
{
	int len=0;

	while(s[len]){
		s[len]='\0';
		len++;
	}

}

int main(void)
{
	char str[128];

	printf("请输入字符串:");
	scanf("%s",str);
	null_string(str);
	printf("字符串全变为null后是:%s \n", str);
	printf("字符串\"%s\"的长度是%d", str, str_length(str));

	return 0;
}


