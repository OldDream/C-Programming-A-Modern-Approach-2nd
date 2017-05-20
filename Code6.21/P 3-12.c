#include <stdio.h>
int main(void)
{
	int no;
	printf("enter a number:");
	scanf("%d",&no);

	switch(no%2)
	{
	case 0 : puts("no is even number.");        break;
	case 1 : puts("no is odd number.");         break;
    }
	
    return 0;
    
}