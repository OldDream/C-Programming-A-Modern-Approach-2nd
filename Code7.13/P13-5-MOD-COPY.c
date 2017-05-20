#include <stdio.h>
#include <time.h>
#include <string.h>

char file[] = "D:\\BaiduYunDownload\\Code7.13\\dt.dat";

void get_data(void);
void put_data(void);

int main(void)
{
	get_data();

	put_data();

	return 0;
}

void get_data(void)
{
	FILE *fp;

	if ((fp = fopen(file, "r")) == NULL) {
		puts("the program to run for the first");
	} else {
		int year, mon, day, m, n, s;
		char mood1[64];
		fscanf(fp, "%d%d%d%d%d%d%s", &year, &mon, &day, 
				&m, &n, &s, mood1);
		
		printf("the last run is at %d[Y] %02d[M] %02d[D] " 
			"%d[H] %d[M] %d[S] %s.\n", 
			year, mon, day, m, n, s, mood1);
		fclose(fp);
	}

	return;
}

void put_data(void)
{
	FILE 	*fp;
	time_t 	t;
	struct 	tm *local;

	time(&t);
	local = localtime(&t);

	char mood1[64] = {"mood is "}, mood2[32];
	printf("Nice mood? :");
	scanf("%s", mood2);
	strcat(mood1, mood2);

	if ((fp = fopen(file, "w")) == NULL) {
		puts("\afile open failed");
	} else {
		fprintf(fp, "%d %d %d %d %d %d %s\n", local->tm_year + 1900, 
		local->tm_mon + 1, local->tm_mday, local->tm_hour, 
		local->tm_min, local->tm_sec, mood2);
	
		fclose(fp);
	}

	return;
}

