#include <stdio.h>

int main(void)
{
	int ch;
	int cnt[1]={1};

	while((ch=getchar()) !=EOF){
		if(ch=='\n')
			cnt[0]++;
	}

	puts("标准输入的行数。");
	printf("行数: %d\n", cnt[0]);

	return 0;
}