#include <stdio.h>

#define NAME_LEN 64

/*  表示学生的结构体  */
struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};

int main(void)
{
	struct student takao = {"Takao", 173, 86.2};

	printf("name 	= %s\n", takao.name);
	printf("height 	= %d\n", takao.height);
	printf("weight 	= %f\n", takao.weight);
	printf("schols 	= %ld\n", takao.schols);
}