#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

typedef struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
}Student;

void hiroko(Student *std)
{
	if (std->height < 180)  std->height = 180;
	if (std->weight >  80)  std->weight =  80;
}

int main(void)
{
	char a[NAME_LEN];
	int b;
	float c;
	long d;
	printf("a:");	scanf("%s", a);
	printf("b:");	scanf("%d", &b);
	printf("c:");	scanf("%f", &c);
	printf("d:");	scanf("%ld", &d);
	
	Student sanaka;
	strcpy(sanaka.name, a);
	sanaka.height = b;
	sanaka.weight = c;
	sanaka.schols = d;

	hiroko(&sanaka);

	printf("name 	= %s\n", sanaka.name);
	printf("height 	= %d\n", sanaka.height);
	printf("weight 	= %f\n", sanaka.weight);
	printf("schols 	= %ld\n", sanaka.schols);
}