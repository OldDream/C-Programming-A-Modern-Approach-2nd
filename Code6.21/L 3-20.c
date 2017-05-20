#include <stdio.h>
int main(void)
{
	int no;
	printf("enter a number:");
	scanf("%d",&no);

	switch(no%3)
	{
	case 0 : puts("/3----0."); puts("HEHE");        break;
	case 1 : puts("/3----1.");         
	case 2 : puts("/3----2.");         break;
    }
    
}