#include <stdio.h>
int main(void)
{
	int i,j,o;           /*i行，j列。*/
	printf("give me the size of the square.");
	scanf("%d",&i);
	o=i;

	for(i=1;i<=o;i++){
		for(j=1;j<=o;j++)
			putchar('*');
		putchar('\n');
    }
    
    return 0;
}