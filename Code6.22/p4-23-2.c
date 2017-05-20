/*直角在右上角的等腰直角三角形*/
#include <stdio.h>
int main(void)
{
	int i,j,height,w;
	puts("Draw a triangle");
	printf("height=");     scanf("%d",&height);
	w=height;

	for(i=1;i<=height;i++){
		for(j=1;j<=i+1;j++)
			putchar(' ');
		for(j=1;j<=w-i+1;j++)
			putchar('*');

		putchar('\n');
	}

    return 0;
}