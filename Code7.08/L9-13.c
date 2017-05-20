#include <stdio.h>

void put_strary2(char str[][6], int n)
{
	int i;

	for (i = 0; i < n; i++) {
		int j = 0;
		printf("st[%d] = \"", i);
		while (str[i][j])
			printf("%c",str[i][j++]);	/*putchar和printf都可以*/
		puts("\"");
	}
}


void put_strary2(char str[][6], int n);

int main(void)
{
	char cs[][6] = {"Turbo", "NA", "DOHC"};

	put_strary2(cs, 3);

	return 0;
}


