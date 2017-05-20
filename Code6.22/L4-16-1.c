/*九九乘法表*/
#include <stdio.h>
int main(void)
{
	int i,j;

	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			int h=i*j;
			if(h>40)
				break;
			printf("%3d",h);
		}
		putchar('\n');
	}
    return 0;
}