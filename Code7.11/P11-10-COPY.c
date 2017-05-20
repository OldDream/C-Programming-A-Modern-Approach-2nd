#include <stdio.h>

int strtoi(const char *nptr);
long strtol(const char *nptr);
double strtof(const char *nptr);

int main(void)
{
	char chi[128];
	char chl[128];
	char chf[128];

	puts("please enter thress numbers");
	printf("please enter a integer string: ");
	scanf("%s", chi);
	printf("please enter a long string: ");
	scanf("%s", chl);
	printf("please enter a float real string: ");
	scanf("%s", chf);

	printf("the integer \"%s\" is %d\n", chi, strtoi(chi));
	printf("the long \"%s\" is %ld\n", chl, strtol(chl));
	printf("the real \"%s\" is %f\n", chf, strtof(chf));

	return 0;
}

int strtoi(const char *nptr)
{
	int result = 0;
	int signal = 1;

	if ((*nptr >= '0' && *nptr <= '9') || *nptr == '-' || *nptr == '+') {
		if (*nptr == '-' || *nptr == '+') {		/*限定在正号和负号两种情况*/
			if (*nptr == '-')
				signal = -1;		/*负号直接改signal＝－1*/
			nptr++;		/*正号直接推进到数字位*/
		}
	} else {
		return 0;		/*前面一大堆为了排除掉非数字的东西,非数字直接return 0*/

	}

	while (*nptr >= '0' && *nptr <= '9')
		result = result * 10 + (*nptr++ - '0');		/*转换成0～9的字符*/

	return result * signal;
}

long strtol(const char *nptr)
{
	long result = 0;
	int signal = 1;

	if ((*nptr >= '0' && *nptr <= '9') || *nptr == '-' || *nptr == '+') {
		if (*nptr == '-' || *nptr == '+') {
			if (*nptr == '-')
				signal = -1;
			nptr++;
		}
	} else {
		return 0;
	}

	while (*nptr >= '0' && *nptr <= '9')
		result = 10 * result + (*nptr++ - '0');		/*一开始指向数字的第一位，即最高位，自然可以X10提高位数。*/

	return result * signal;
}

double strtof(const char *nptr)
{
	long pos = 0;		/*整数位。*/
	double val = 1.0;
	double dec = 0.0;		/*小数位。*/
	int signal = 1;

	if ((*nptr >= '0' && *nptr <= '9') || *nptr == '-' || *nptr == '+') {
		if (*nptr == '-' || *nptr == '+') {
			if (*nptr == '-')
				signal = -1;
			nptr++;
		}
	} else {
		return 0.0;
	}

	while (*nptr >= '0' && *nptr <= '9')		/*当数字结束或者碰到非数字比如.小数点的时候，跳出循环。*/
		pos = 10 * pos + (*nptr++ - '0');

	if (*nptr == '.')
		nptr++;
	else
		dec = 0.0;

	while (*nptr >= '0' &&  *nptr <= '9') {
		val /= 10.0;		/*每次除10，用于构造0.1  0.01  0.001 。。。。之类的东西。*/
		dec += val * (*nptr - '0');		/*计算小数位的值*/
		nptr++;
	}

	return signal * (pos + dec);
}

