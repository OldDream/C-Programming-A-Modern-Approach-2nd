#include <stdio.h>

int main(void)
{
	int i,j,ch;
	int cnt[10]={0};

	while((ch=getchar()) !=EOF){
		if(ch >= '0' && ch <= '9')
			cnt[ch-'0']++;         /*此处'0'为字符0对应的数字大小*/
	}

	puts("\n---分布图---");
	
	for(i=9;i>=0;i--){
		printf("%3d:",i);
		for(j=0;j<cnt[i];j++)   /*cnt[i]为i大小为i的数的数目*/
			putchar('*');
		putchar('\n');
	}
	return 0;
}