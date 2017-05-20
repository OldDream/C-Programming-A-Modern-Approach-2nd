#include <stdio.h>

int main(void)
{
	float a;
	long double b;
	long double c;
	printf("     输入float型a ：");		scanf("%f",&a);
	printf("    输入double型b ：");		scanf("%Lf",&b); 
	n/*　　在C语言中：
　　1）用scanf()函数输入double类型的变量时，转换说明中的转换字符(占位符)只能用lf，即%lf，写成%f无法正确输入double型数据；
　　2）用printf()函数输出double类型的变量时，转换说明中的转换字符(占位符)可用%lf或%f，皆能正确输出，且输出结果一致。*/
	printf("输入long float型c ：");		scanf("%Lf",&c);

	printf("a: %f \n",a);
	printf("b: %Lf \n",b);
	printf("c: %Lf \n",c);

	return 0;

}