/*逆向显示输入的整数*/

#include <stdio.h>

int scan_pint(void) /*返回输入的正整数*/
{
	int tmp;

	do{
		printf("请输入一个正数：");	
		scanf("%d",&tmp);
		if(tmp<=0)
			puts("\a 不要输入非正整数！");
	}while(tmp<=0);
	return tmp;
}

int rev_int(int num)  /*返回逆向显示的值*/
{
	int tmp=0;

	if(num>0){ 
		do{
			tmp=tmp*10+num%10;
			num/=10;
		}while(num>0);
	}
	return tmp;
}

int main(void)
{
	int nx=scan_pint();
	printf("逆向显示的值：%d \n",rev_int(nx));	
	return 0;
}
