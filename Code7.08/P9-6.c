#include <stdio.h>

int str_char(const char s[],char c)
{
	int len=0,i=0;

	while(s[len]){
		if (s[len] == c)
			i++;
		len++;
	}
	return i;
}

int main(void)
{
	char str[128];
	char c;

	printf("请输入字符串:");
	scanf("%s",str);

	while (getchar() != '\n');		/*很重要，否则不执行输入C，会跳过去，连续两个scanf，回车会被第二个scanf接收，导致第二个捕捉到null*/

/*理解：
最后输的那个回车符应该是会留在缓冲区的，并被下一个getchar或scanf(%c\%s)接受。
所以一般在后面有读取字符的操作前加上一个getchar()，来接受缓冲区的回车。
while()就是 10楼 所说的多输的字符的清除。*/

	printf("请输入要查找的字符:");
	scanf("%c",&c);

	printf("字符串\"%s\"中为%c的字符的个数是:%d", str, c, str_char(str,c));

	return 0;
}


