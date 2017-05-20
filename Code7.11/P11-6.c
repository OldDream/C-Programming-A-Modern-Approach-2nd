#include <stdio.h>

char *str_char(char *str, int c);

int main(void)
{
	char st[128];
	char ch;

	printf("please enter a string: ");
	scanf("%s", st);

	while (getchar() != '\n')
		;

	printf("please enter a character: ");
	scanf("%c", &ch);

	printf("the '%c''s address in string \"%s\": %p\n", 
		ch, st, str_char(st, ch));

	return 0;
}

char *str_char(char *str, int c)
{
	while (*str) {
		if (c == *str) {
			return str;
		}
		str++;
	}

	return NULL;
}

