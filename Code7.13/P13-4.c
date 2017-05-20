#include <stdio.h>

int main(void)
{
	char NAME[128];
	int H;
	double W;

	FILE *fp;
	printf("NAME:");	scanf("%s", NAME);
	printf("Height:");	scanf("%d", &H);
	printf("Weight:");	scanf("%lf", &W);

	if ((fp = fopen("D:\\BaiduYunDownload\\Code7.13\\man_dat", "w")) == NULL)
		printf("No this FILE");
	else {
		fprintf(fp, "%s %d %lf", NAME, H, W);
		fclose(fp);
	}
	return 0;
}