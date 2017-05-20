#include <stdio.h>
int main(void)
{
	int retry;

	do 
	{
	int no;
	printf("enter a number:");
	scanf("%d",&no);

	    switch(no%2)
	   {
	    case 0 : puts("no is even number.");        break;
	    case 1 : puts("no is odd number.");         break;
       }
    printf("retry?Yes---0,no---1. :");
    scanf("%d",&retry);
	} 
	while(retry==0);

    return 0;
    
}