#include <stdio.h>

void put_stringn(const char s[],int n)
{
	int i,j;
	for(j=0;j<n;j++){
		i=0;
	while (s[i])
		putchar(s[i++]);
	}
}

int main(void)
{
	char str[128];
	int n;

	printf("请输入字符串:");
	scanf("%s",str);

	while(getchar() != '\n');

	printf("请输n:");
	scanf("%d",&n);

	printf("你输入了：");
	put_stringn(str,n);
	printf("\n");

	return 0;
}
