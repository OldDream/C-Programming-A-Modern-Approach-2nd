#include <stdio.h>

#define NUMBER 3

void rev_string(char s[][128],int n)
{
	int i,x=0,j;
	char t;

	for(j=0; j<n; j++){
		while(s[j][x])		/*统计字符个数*/
			x++;

		for(i=0; i<x/2; i++){
			t=s[j][i];
			s[j][i]=s[j][x-1-i];
			s[j][x-1-i]=t;
		}
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
	int i;
	char str[NUMBER][128];

	for(i=0; i<NUMBER; i++) {
		printf("请输入字符串%d：",i);
		scanf("%s", str[i]);
	}
	
	rev_string(str,NUMBER);

	
	printf("倒序后为：");
	for(i=0; i<NUMBER; i++) {
		put_string(str[i]);
		printf("\n");
	}
	return 0;
}