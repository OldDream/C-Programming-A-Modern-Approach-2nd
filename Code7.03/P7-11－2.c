/*P227*/

#include <stdio.h>

int main(void)
{
	int i;
	float x=0.0,y=0.0;		

	for(x=0.0;x<=1.0;x+=0.01){
		y+=x;
		printf("x=%f  ",x);
		printf("y=%f",y);
		putchar('\n');
	}

	
	return 0;
}
