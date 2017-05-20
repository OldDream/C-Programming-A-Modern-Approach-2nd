#include <stdio.h>

typedef struct gstudent {
	char 	name[128];
	double 	height;
	double 	weight;
} student;

int get_num(FILE *file);
void swap(student *pa, student *pb);
void bubble(student data[], int len);

int main(void)
{
	FILE *fp;

	fp = fopen("hw.dat", "r");
	double 	hsum = 0.0;
	double 	wsum = 0.0;
	int 	num = get_num(fp);		/*此处获取人数*/
	student stu[num];				/*构建stu数组，元素为结构体student*/
	
	if ((fp = fopen("hw.dat", "r")) == NULL) {
		puts("\afile open failed");
	} else {
		int i = 0;
		while (fscanf(fp, "%s%lf%lf", stu[i].name, 
			&stu[i].height, &stu[i].weight) == 3)		/*开始遍历，fscanf读取到的直接写到数组stu【i】内*/
			i++;

		bubble(stu, num);		/*冒泡排序*/

		for (i = 0; i < num; i++) {			/*逐个输出*/
			printf("%-10s %5.1f %5.1f\n", stu[i].name, 
				stu[i].height, stu[i].weight);	
			hsum += stu[i].height;		/*求和height*/
			wsum += stu[i].weight;		/*求和weight*/
		}
		puts("----------------------");
		printf("average    %5.1f %5.1f\n", hsum / num, wsum / num);		/*求平均*/
		fclose(fp);
	}

	return 0;
}

int get_num(FILE *fp) /*获取文件内的人数*/
{
	int cnt = 0;
	char name[128];
	double height, weight;
	while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3)
		cnt++;		/*每获取一组数据，fscanf返回3(读取几个字符就会返回相应数字，本处：  name, &height, &weight )，则cnt+1*/

	return cnt;
}

void swap(student *pa, student *pb)		/*前后交换，直接交换结构体*/
{
	student tmp = *pa;
	*pa = *pb;
	*pb = tmp;

	return;
}

void bubble(student data[], int len)
{
	while (len > 0) {
		int i;
		for (i = 0; i < len - 1; i++)
			if (data[i].height > data[i + 1].height)
				swap(&data[i], &data[i+1]);
		len = i;
	}

	return;
}

