#include <stdio.h>
int main(void)
{
	int no;
	pfintf("enter a number:");
	scanf("%d",&no);

	switch(no%3);
	case 0 : puts("/3----0.");         break;
	case 1 : puts("/3----1.");         break;
	case 2 : puts("/3----2.");         break;
    
    return 0;
}