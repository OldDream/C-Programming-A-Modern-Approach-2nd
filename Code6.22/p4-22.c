#include <stdio.h>
int main(void)
{
	int i,j,a,b;           /*j长（列），i宽（行）。*/
	printf("A");      scanf("%d",&i);
	printf("B");       scanf("%d",&j);
	
	if(i>j){
		a=i;
		i=j;
		j=a;
	}
	a=i;
	b=j;

	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++)
			putchar('*');
		putchar('\n');
    }
    
    return 0;
}