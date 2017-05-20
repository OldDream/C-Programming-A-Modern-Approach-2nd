#include <stdio.h>
int main(void)
{
	int i,j,width,height;
	puts("Draw a square~");
	printf("width=");     scanf("%d",&width);
	printf("height=");     scanf("%d",&height);

	for(i=1;i<=height;i++){
		for(j=1;j<=width;j++)
			putchar('*');
		putchar('\n');
	}

    return 0;
}