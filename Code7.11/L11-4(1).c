#include <stdio.h>
#define NUMBER 5

int main(void)
{
	
	int i, b, c;
	char a[][NUMBER] = {"LIST", "C", "Ada"};
	char *p[] ={"PAUL", "X", "MAC"}; 

	b = sizeof(a) / NUMBER;
	for (i=0; i<b; i++)
		printf("a[%d]= \"%s\"\n", i, a[i]);

	c = sizeof(p);
	for (i=0; i<b; i++)
		printf("p[%d]= \"%s\"\n", i, p[i]);
	
 	return 0;
}