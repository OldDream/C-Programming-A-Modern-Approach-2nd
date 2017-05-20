#include <stdio.h>

void rev_string(char s[])
{
	int i,n=0;
	char t;

	while(s[n])		/*统计字符个数*/
		n++;

	for(i=0; i<n/2; i++){
		t=s[i];
		s[i]=s[n-1-i];
		s[n-1-i]=t;
	}
}


void put_string(const char s[])   /*显示字符串*/
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}


int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);
	
	rev_string(str);

	printf("倒序后为：");
	put_string(str);
	printf("\n");

	return 0;
}