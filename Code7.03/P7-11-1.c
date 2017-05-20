/*P227*/

#include <stdio.h>

int main(void)
{
	int i;
	float x=0.0,y=0.0;		

	for(i=0;i<=100;i++){
		y=i/100.0;
        x+=y;
		printf("y=%f  ",y);		printf("x=%f",x);
		putchar('\n');
	}

	
	return 0;
}