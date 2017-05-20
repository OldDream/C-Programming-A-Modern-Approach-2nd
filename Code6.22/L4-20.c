#include <stdio.h>
int main(void)
{
	int retry;
	do{
		int i,no;

		do{
			printf("Enter a integer:");
			scanf("%d",&no);
			if(no<=0)
				puts("don't enter Non positive integer");
        }while(no<=0);

        for(i=1;i<=no;i++)
        	putchar('*');
        putchar('\n');
        puts("continue?Y---0,N---9:");
        scanf("%d",&retry);
	}while(retry==0);

    return 0;
}