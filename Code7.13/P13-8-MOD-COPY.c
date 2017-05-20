#include <stdio.h>

int main(void)
{
	FILE 	*sfp, *dfp;
	char 	sname[FILENAME_MAX], dname[FILENAME_MAX];
	int 	ch;

	printf("please enter a src file name: ");
	scanf("%s", sname);
	printf("please enter a des file name: ");
	scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL) {
		puts("\athe src file open failed");
	} else {
		if ((dfp = fopen(dname, "w")) == NULL) {
			puts("\athe des file open failed");
		} else {
			while ((ch = fgetc(sfp)) != EOF) {
				putchar(ch);
				fputc(ch, dfp);
			}
			fclose(dfp);
		}
		fclose(sfp);
	}

	return 0;
}
