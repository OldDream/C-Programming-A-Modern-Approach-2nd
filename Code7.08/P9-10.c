#include <stdio.h>
void del_digit(char str[])
{
	int i=0,j=0;
	while(str[i])
		if(str[i] >= '0' && str[i] <= '9')
			i++;
		else
			str[j++]=str[i++];

	str[j]='\0';	/*保证输出到j停止，后面可能还有数字。*/
		
	
			/*
			str[j]=str[i]
			i++;
			j++;
			*/
			/*本段可以换成str[j++]=str[i++]，有效减少数量*/

}

int main(void)
{
	char str[128];

	printf("输入字符串:  ");
	scanf("%s", str);
	putchar('\n');

	del_digit(str);

	printf("删除数字后的字符串: %s\n", str);

	return 0;
}