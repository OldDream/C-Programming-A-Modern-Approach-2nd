#include <stdio.h>

void put_stringr(const char s[],int n)
{
	int i=n-1;
	for(;i>=0;i--)
		putchar(s[i]);
	
}

int str_length(const char s[])
{
	int len=0;

	while(s[len])
		len++;
	return len;
}


int main(void)
{
	char str[128];
	int n;

	printf("请输入字符串:");
	scanf("%s",str);

	n=str_length(str);

	printf("你输入了：");
	put_stringr(str,n);
	printf("\n");

	return 0;
}
