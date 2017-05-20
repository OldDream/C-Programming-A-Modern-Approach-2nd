/*金字塔*/
#include <stdio.h>
int main(void)
{
	int i,j,h;
	puts("Draw a triangle");
	printf("height=");     scanf("%d",&h);
	
	for(i=1;i<=h;i++){
		for(j=1;j<=i+1;j++)
			putchar(' ');
		for(j=1;j<=2*h-2*i+1;j++)
			printf("%d",i);

		putchar('\n');
	}

    return 0;
}