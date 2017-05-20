/*直角在左上角的等腰直角三角形*/
#include <stdio.h>
int main(void)
{
	int i,j,w=1,height;
	puts("Draw a triangle");
	printf("height=");     scanf("%d",&height);

	for(i=height;i>=1;i--){
		for(j=height;j>=w;j--)
			putchar('*');
		putchar('\n');
		w++;
	}

    return 0;
}