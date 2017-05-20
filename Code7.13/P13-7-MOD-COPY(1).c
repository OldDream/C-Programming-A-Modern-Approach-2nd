#include <stdio.h>

int main(void)
{
	FILE 	*fp;
	int 	ch;
	char	fname[FILENAME_MAX];
	int 	cnt = 0;

	printf("please enter a file name: ");
	scanf("%s", fname);
	if ((fp = fopen(fname, "r")) == NULL) {
		puts("\afile open failed");
	} else {
		while ((ch = fgetc(fp)) != EOF)
			if (ch != '\n')
				cnt++;
		fclose(fp);
	}

	printf("the file have %d character\n", cnt);

	return 0;
}