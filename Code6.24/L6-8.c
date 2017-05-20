#include <stdio.h>

void put_stars(int ch,int n)
{
	while(n-->0)
		putchar(ch);   /*putchar居然可以放变量*/
}

int main(void)
{
	int i,len;

	puts("生成一个短边在右下角的等腰直角三角形。");
	printf("短边：");		
	scanf("%d",&len);

	for(i=1;i<=len;i++){
		put_stars(' ',len-i);
		put_stars('*',i);
		putchar('\n');
	}
	
	return 0;
}
