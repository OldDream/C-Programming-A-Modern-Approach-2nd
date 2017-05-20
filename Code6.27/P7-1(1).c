#include <stdio.h>

int main(void)
{
	int n;

	printf("sizeof 1 = %u \n",(unsigned)sizeof(1));
	printf("sizeof -1 = %u \n",(unsigned)sizeof(-1));
	printf("sizeof +1 = %u \n",(unsigned)sizeof(+1));
	putchar('\n');

	printf("sizeof n = %u \n",(unsigned)sizeof n);
	printf("sizeof n+2 = %u \n",(unsigned)sizeof n+2);
	printf("sizeof (n+2) = %u \n",(unsigned)sizeof (n+2));
	printf("sizeof (n+2.0) = %u \n",(unsigned)sizeof (n+2.0));
	printf("sizeof 2.0 = %u \n",(unsigned)sizeof 2.0);
	printf("sizeof 2 = %u \n",(unsigned)sizeof 2);
	printf("sizeof 0 = %u \n",(unsigned)sizeof 0);
	putchar('\n');


	printf("sizeof (unsigned) = %u \n",(unsigned)sizeof (unsigned));
	printf("sizeof (unsigned)-1 = %u \n",(unsigned)sizeof (unsigned)-1);
	printf("sizeof (double) = %u \n",(unsigned)sizeof (double));
	printf("sizeof (double)-1 = %u \n",(unsigned)sizeof (double)-1);
	printf("sizeof ((double)-1) = %u \n",(unsigned)sizeof ((double)-1));

}