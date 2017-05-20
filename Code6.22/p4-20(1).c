/*九九乘法表*/
#include <stdio.h>
int main(void)
{
	int i=1,j=1;    /*i列，j行*/
	do{
		switch(i%2){                   /*第一行*/
			case 1 :printf("  ");i++;           break;
			case 0 :printf(" |");i++;           break;
	    }
	    }while(i<=2);
		for(i=3;i<=11;i++)
			printf("%3d",i-2);
		printf("\n");

		for(i=1;i<=11;i++)             /*第二行*/
			printf("---");
		printf("\n");

		for(j=3;j<=11;j++){            /*第三行及之后的*/
			for(i=1;i<=1;i++)
				printf("%3d",j-2);
			for(i=2;i<=2;i++)
				putchar('|');
			for(i=3;i<=11;i++)
				printf("%3d",(i-2)*(j-2));
			printf("\n");
		}
	
    return 0;
}