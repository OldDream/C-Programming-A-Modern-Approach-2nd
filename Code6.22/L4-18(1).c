/*直角在左下角的等腰直角三角形*/
#include <stdio.h>
int main(void)
{
	int i,j,width,height;
	puts("Draw a triangle");
	printf("height=");     scanf("%d",&height);

	for(i=1;i<=height;i++){
		for(j=1;j<=i;j++)
			putchar('*');
		putchar('\n');
	}

    return 0;
}